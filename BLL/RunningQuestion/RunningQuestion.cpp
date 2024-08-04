#include "RunningQuestion.h"

RunningQuestion::RunningQuestion(const Question& ques) : Question(ques) {
	this->examineeChoice = -1;
}

int RunningQuestion::getExamineeChoice() {
	return this->examineeChoice;
}

bool RunningQuestion::setExamineeChoice(int examineeChoice) {
	if (examineeChoice < 0 || examineeChoice >= Question::getChoiceList().size()) return false;
	this->examineeChoice = examineeChoice;
	return true;
}

bool RunningQuestion::checkResult() {
	return this->examineeChoice == Question::getAnswerIndex();
}