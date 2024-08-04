#ifndef _IExamQuestionSI_H_
#define _IExamQuestionSI_H_

#include "IQuestionContentSI.h"

class IExamQuestionSI : virtual public IQuestionContentSI {
public:
	virtual int getExamineeChoice() = 0;

	virtual bool setExamineeChoice(int examineeChoice) = 0;

	virtual bool checkResult() = 0;
};

#endif