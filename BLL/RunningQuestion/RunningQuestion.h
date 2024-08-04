#ifndef _RunningQuestion_H_
#define _RunningQuestion_H_

#include "../ServiceInterface/IExamQuestionSI.h"
#include "../../DAL/Question.h"

class RunningQuestion : public Question, public IExamQuestionSI {
public:
	RunningQuestion() = delete;
	RunningQuestion(const RunningQuestion& inst) = delete;
	RunningQuestion& operator=(const RunningQuestion& other) = delete;

	RunningQuestion(const Question& ques);

	// Implement IExamQuestionSI //
	int getExamineeChoice();

	bool setExamineeChoice(int examineeChoice);

	bool checkResult();
	////////////////////////

private:
	int examineeChoice = -1;
};

#endif