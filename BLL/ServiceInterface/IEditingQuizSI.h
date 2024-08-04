#ifndef _IEditingQuizSI_H_
#define _IEditingQuizSI_H_

#include <string>
#include "IQuizHeaderSI.h"
#include "../../DAL/IQuestion.h"

using namespace std;

class IEditingQuizSI {
public:
	virtual bool authAuthorPass(string typeInPass) = 0;

	virtual bool isAuthenticated() = 0;

	virtual int createNewQuestion(IQuestion*& question) = 0;

	virtual bool removeQuestion(int quesIndex) = 0;

	virtual IQuestion* getEditingQuestion(int quesIndex) = 0;

	virtual IQuizHeaderSI* getQuizHeader() = 0;

	virtual int getQuestionAmount() = 0;
};

#endif