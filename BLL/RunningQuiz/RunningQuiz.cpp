#include "RunningQuiz.h"

RunningQuiz::RunningQuiz(Quiz& quiz, string examineeID, u16string examineeName) {
	this->status = NOT_STARTED;
	this->isAuth = false;
	this->header = QuizHeader(*quiz.getQuizHeader());

	// load and shuffle questions
	vector<Question> rawQuesList = quiz.getQuestionList();
	random_shuffle(rawQuesList.begin(), rawQuesList.end());
	int quesAmount = this->header.getExamAmount();
	if (quesAmount <= 0 || quesAmount > rawQuesList.size()) quesAmount = rawQuesList.size();
	RunningQuestion* rQues;
	for (int i = 0; i < quesAmount; i++) {
		rQues = new RunningQuestion(rawQuesList[i]);
		this->questions.push_back(rQues);
	}

	// examinee info
	this->record.setExamineeID(examineeID);
	this->record.setExamineeName(examineeName);

	// time count info
	this->timeCount = (quiz.getQuizHeader()->getDuration() > 0) ?
		new CountDown(quiz.getQuizHeader()->getDuration()) : nullptr;
}

RunningQuiz::~RunningQuiz() {
	for (int i = 0; i < int(this->questions.size()); i++) {
		delete questions[i];
	}
	delete this->timeCount;
}

bool RunningQuiz::authExamPass(string typeInPass) {
	this->isAuth = (this->header.getExamPass().compare(typeInPass) == 0);
	return this->isAuth;
}

bool RunningQuiz::isAuthenticated() {
	return this->isAuth;
}

bool RunningQuiz::generateQuestions(vector<u16string> &tags, vector<IExamQuestionSI*>& examQuestionsSI) {
	if (!this->isAuth) return false;

	for (int i = 0; i < int(this->questions.size()); i++) {
		if (isQuestionHasTag(this->questions[i], tags)) {
			examQuestionsSI.push_back(this->questions[i]);
		}
	}

	return true;
}

void RunningQuiz::startQuiz() {
	if (!this->isAuth) return;
	if (this->timeCount) this->timeCount->startCountdown();
	TimeStamp startTime;// current time stamp
	this->record.setStartStamp(startTime);
	this->status = NOT_STARTED;
}

ICountDownValue* RunningQuiz::getRemainingTime() {
	if ((!this->isAuth) || this->timeCount == nullptr) return nullptr;
	return this->timeCount->calRemainingTime();
}

bool RunningQuiz::isHasTimeCountDown() {
	return this->timeCount != nullptr;
}

IQuizHeaderSI* RunningQuiz::getQuizHeader() {
	if (!this->isAuth) return nullptr;
	return &this->header;
}

bool RunningQuiz::isQuestionHasTag(Question* ques, vector<u16string>& tags) {
	if (tags.empty()) return true;
	for (auto iter = tags.begin(); iter != tags.end(); ++iter) {
		if (ques->isHasTag((*iter))) return true;
	}
	return false;
}

u16string RunningQuiz::getExamineeName() {
	return this->record.getExamineeName();
}

string RunningQuiz::getExamineeID() {
	return this->record.getExamineeID();
}

string RunningQuiz::getID() {
	return this->header.getID();
}

IQuizRecord* RunningQuiz::submit() {
	double mark = 0;
	// cal mark
	RunningQuestion* rQues;
	for (auto iter = this->questions.begin(); iter != this->questions.end(); ++iter) {
		rQues = (*iter);
		if (rQues->checkResult()) mark += rQues->getMark();
	}
	this->record.setMark(mark);
	// cal exam time
	if (this->timeCount) {
		this->record.setExamTime(this->timeCount->calElapsedSecond());
	}
	else {
		this->record.setExamTime(0);
	}

	this->status = SUBMITED;
	return &this->record;
}

bool RunningQuiz::isSubmited() {
	return (this->status == SUBMITED);
}

bool RunningQuiz::saveQuizRecord() {
	vector<QuizRecord> quizRecordList;
	DALManager::GetInstance()->loadQuizRecord(this->getID(), quizRecordList);
	quizRecordList.push_back(this->record);
	return DALManager::GetInstance()->saveQuizRecord(this->getID(), quizRecordList);
}

bool RunningQuiz::getRanking(QuizRecordsWrapper& wrapper, int& examineeRank) {
	if (!(isSubmited() && this->header.getShowRankingOption())) return false;

	vector<QuizRecord> records;
	DALManager::GetInstance()->loadQuizRecord(this->getID(), records);
	records.push_back(this->record);

	wrapper = QuizRecordsWrapper(records, true);
	examineeRank = (wrapper.find(this->record) + 1);
	return true;
}
