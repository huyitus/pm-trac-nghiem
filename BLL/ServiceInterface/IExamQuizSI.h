#ifndef _IExamQuizSI_H_
#define _IExamQuizSI_H_

#include <vector>
#include <string>
#include "IQuizHeaderSI.h"
#include "IExamQuestionSI.h"
#include "../CountDown/ICountDownValue.h"
#include "../../DAL/IQuizRecord.h"
#include "../QuizRecordsWrapper/QuizRecordsWrapper.h"

using namespace std;

class IExamQuizSI {
public:
	virtual bool authExamPass(string typeInPass) = 0;

	virtual bool isAuthenticated() = 0;

	virtual bool generateQuestions(vector<u16string> &tags, vector<IExamQuestionSI*>& examQuestionsSI) = 0;

	virtual void startQuiz() = 0;

	virtual ICountDownValue* getRemainingTime() = 0;

	virtual bool isHasTimeCountDown() = 0;

	virtual IQuizHeaderSI* getQuizHeader() = 0;

	virtual u16string getExamineeName() = 0;

	virtual string getExamineeID() = 0;

	virtual string getID() = 0;

	virtual IQuizRecord* submit() = 0;

	virtual bool isSubmited() = 0;

	virtual bool getRanking(QuizRecordsWrapper& wrapper, int& examineeRank) = 0;
};

#endif