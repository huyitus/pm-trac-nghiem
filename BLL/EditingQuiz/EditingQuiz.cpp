#include "EditingQuiz.h"

EditingQuiz::EditingQuiz(std::string id, bool isAuth) {
	this->isAuth = isAuth;
	this->quiz = new Quiz(id);
	

	if (DALManager::GetInstance()->hasQuiz(id))
		DALManager::GetInstance()->loadQuiz(id, *this->quiz);
}

EditingQuiz::~EditingQuiz() {
	delete this->quiz;
}

bool EditingQuiz::authAuthorPass(string typeInPass) {
	this->isAuth = (this->quiz->getQuizHeader()->getAuthorPass().compare(typeInPass) == 0);
	return this->isAuth;
}

bool EditingQuiz::isAuthenticated() {
	return this->isAuth;
}

int EditingQuiz::createNewQuestion(IQuestion*& question) {
	if (!this->isAuth) return -1;

	Question ques;
	int newQuesIndex = this->quiz->addQuestion(ques);
	question = this->quiz->getQuestion(newQuesIndex);
	return newQuesIndex;
}

IQuestion* EditingQuiz::getEditingQuestion(int quesIndex) {
	if (!this->isAuth) return nullptr;
	return this->quiz->getQuestion((int8_t)quesIndex);
}

bool EditingQuiz::removeQuestion(int quesIndex) {
	if (!this->isAuth) return false;
	return quiz->removeQuesiton((int8_t)quesIndex);
}

int EditingQuiz::getQuestionAmount() {
	if (!this->isAuth) return -1;
	return this->quiz->getQuestionAmount();
}

IQuizHeaderSI* EditingQuiz::getQuizHeader() {
	if (!this->isAuth) return nullptr;
	return this->quiz->getQuizHeader();
}

bool EditingQuiz::saveToFile() {
	if (!this->isAuth) return false;
	return DALManager::GetInstance()->saveQuiz(quiz->getID(), *this->quiz);
}
