#include "BLLManager.h"

BLLManager* BLLManager::instance = nullptr;

BLLManager* BLLManager::GetInstance() {
	if (BLLManager::instance == nullptr) {
		BLLManager::instance = new BLLManager();
	}
	return BLLManager::instance;
}

void BLLManager::DestroyInstance() {
	Random::DestroyInstance();
	delete BLLManager::instance;
	BLLManager::instance = nullptr;
}

BLLManager::BLLManager() {
	this->dalMnger = DALManager::GetInstance();
}

BLLManager::~BLLManager() {
	for (int i = 0; i < int(this->openEditingQuiz.size()); i++) {
		delete this->openEditingQuiz[i];
	}
}

bool BLLManager::isContainQuiz(string id) {
	return this->dalMnger->hasQuiz(id);
}

err_t BLLManager::loadExamQuiz(IExamQuizSI*& examPtr, string id, u16string examineeName, string examineeID) {
	if (!isContainQuiz(id)) return 1;

	// check examinee information
	if (examineeName.find(',') != string::npos || examineeID.find(',') != string::npos) return 2;

	// Find in openRunningQuiz vector first
	for (auto iter = this->openRunningQuiz.begin(); iter != this->openRunningQuiz.end(); ++iter) {
		if ((*iter)->getExamineeID().compare(examineeID) == 0
			&& (*iter)->getID().compare(id) == 0) {
			examPtr = (*iter);
			return 0;
		}
	}

	Quiz quiz;
	if (!dalMnger->loadQuiz(id, quiz)) return 1;
	if (quiz.getQuizHeader()->getStatus() == 0) return 3;

	RunningQuiz* rQuiz = new RunningQuiz(quiz, examineeID, examineeName);
	openRunningQuiz.push_back(rQuiz);
	examPtr = rQuiz;
	return 0;
}

bool BLLManager::closeExamQuiz(IExamQuizSI* examQuiz) {
	RunningQuiz* rQuiz = nullptr;

	for (auto iter = this->openRunningQuiz.begin(); iter != this->openRunningQuiz.end(); ++iter) {
		if ((*iter) == examQuiz) {
			rQuiz = (*iter);
			this->openRunningQuiz.erase(iter);
			break;
		}
	}

	if (rQuiz) {
		bool closingState = true;
		if (rQuiz->isSubmited()) {// save record
			closingState = rQuiz->saveQuizRecord();
		}
		delete rQuiz;
		return closingState;
	}

	return false;
}

IEditingQuizSI* BLLManager::createNewQuiz() {
	string id;

	// generate new id
	int32_t rdInt;
	do {
		rdInt = Random::GetInstance()->Next() + 1;
		id = Formatter::toString(rdInt);
	} while (this->dalMnger->hasQuiz(id));

	// Create new quiz with generated id
	EditingQuiz* editingQuiz = new EditingQuiz(id, true);
	this->openEditingQuiz.push_back(editingQuiz);
	return editingQuiz;
}

IEditingQuizSI* BLLManager::loadEditingQuiz(string id) {
	if (!isContainQuiz(id)) return nullptr;

	// Find in openEditingQuiz vector first
	for (int i = 0; i < int(this->openEditingQuiz.size()); i++) {
		if (this->openEditingQuiz[i]->getQuizHeader()->getID().compare(id) == 0) {
			return this->openEditingQuiz[i];
		}
	}

	EditingQuiz* editingQuiz = new EditingQuiz(id);
	this->openEditingQuiz.push_back(editingQuiz);
	return editingQuiz;
}

err_t BLLManager::closeEditingQuiz(IEditingQuizSI* editingQuiz, bool isSave) {
	if (!editingQuiz) return 1;

	EditingQuiz* quiz = nullptr;
	int eraseIdx;

	for (int i = 0; i < int(this->openEditingQuiz.size()); i++) {
		if (this->openEditingQuiz[i] == editingQuiz) {
			quiz = this->openEditingQuiz[i];
			eraseIdx = i;
			break;
		}
	}

	if (quiz) {
		this->openEditingQuiz.erase(this->openEditingQuiz.begin() + eraseIdx);// erase from vector

		if (isSave && (quiz->getQuestionAmount() > 0)) quiz->saveToFile();
		delete quiz;

		if (quiz->getQuestionAmount() <= 0) return 2;
		return 0;// doesnt have any error
	}
	return 1;
}

err_t BLLManager::loadQuizRecords(string id, string authorPass, QuizRecordsWrapper& wrapper) {
	if (!dalMnger->hasQuiz(id)) return 1;

	Quiz quiz;
	dalMnger->loadQuiz(id, quiz);

	// auth
	if (quiz.getQuizHeader()->getAuthorPass().compare(authorPass) != 0) return 2;

	if (dalMnger->hasQuizRecord(id)) {
		vector<QuizRecord> records;
		dalMnger->loadQuizRecord(id, records);
		wrapper = QuizRecordsWrapper(records);
	}
	return 0;
}
