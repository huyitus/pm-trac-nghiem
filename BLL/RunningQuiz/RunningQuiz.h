#ifndef _RunningQuiz_H_
#define _RunningQuiz_H_

#include "../ServiceInterface/IExamQuizSI.h"
#include "../../DAL/Quiz.h"
#include "../RunningQuestion/RunningQuestion.h"
#include "../../DAL/QuizRecord.h"
#include <vector>
#include <algorithm>
#include "../CountDown/CountDown.h"
#include "../../DAL/DALManager.h"
#include "../QuizRecordsWrapper/QuizRecordsWrapper.h"

using namespace std;

#define NOT_STARTED 0
#define STARTED 1
#define SUBMITED 2

class RunningQuiz : public IExamQuizSI {
public:
	RunningQuiz(const RunningQuiz& quiz) = delete;
	RunningQuiz& operator=(const RunningQuiz& quiz) = delete;

	RunningQuiz(Quiz& quiz, string examineeID, u16string examineeName);

	~RunningQuiz();

	bool saveQuizRecord();

	// Implement IExamQuizSI
	bool authExamPass(string typeInPass);

	bool isAuthenticated();

	bool generateQuestions(vector<u16string> &tags, vector<IExamQuestionSI*>& examQuestionsSI);

	void startQuiz();

	ICountDownValue* getRemainingTime();

	bool isHasTimeCountDown();

	IQuizHeaderSI* getQuizHeader();

	u16string getExamineeName();

	string getExamineeID();

	string getID();

	IQuizRecord* submit();

	bool isSubmited();

	bool getRanking(QuizRecordsWrapper& wrapper, int& examineeRank);
	///////////

protected:
	bool isQuestionHasTag(Question* ques, vector<u16string>& tags);

private:
	int8_t status;
	bool isAuth;
	QuizHeader header;
	vector<RunningQuestion*> questions;
	QuizRecord record;
	CountDown* timeCount;
};

#endif