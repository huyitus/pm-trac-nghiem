#ifndef _BLLManager_H_
#define _BLLManager_H_

#include <string>
#include "../ServiceInterface/IExamQuizSI.h"
#include "../ServiceInterface/IEditingQuizSI.h"
#include "../EditingQuiz/EditingQuiz.h"
#include "../../DAL/DALManager.h"
#include "../../DAL/Formatter.h"
#include "../RunningQuiz/RunningQuiz.h"
#include "../QuizRecordsWrapper/QuizRecordsWrapper.h"
#include "../Random/Random.h"

#include <iostream>

using namespace std;

typedef int8_t err_t;

class BLLManager {
private:
	BLLManager();

	~BLLManager();

public:
	BLLManager(const BLLManager& inst) = delete;
	void operator=(const BLLManager& inst) = delete;

	static BLLManager* GetInstance();

	static void DestroyInstance();

	bool isContainQuiz(string id);

	/*
	* Return <error>:
	* 0: Success, no error
	* 1: Unknown id
	* 2: Invalid examineeName, examineeID
	* 3: Uncomplete quiz
	*/
	err_t loadExamQuiz(IExamQuizSI* &examPtr, string id, u16string examineeName, string examineeID);

	bool closeExamQuiz(IExamQuizSI* examQuiz);

	IEditingQuizSI* createNewQuiz();

	IEditingQuizSI* loadEditingQuiz(string id);

	/*
	* Return <error>:
	* 0: Success, no error
	* 1: Unknown editingQuiz (maybe nullptr)
	* 2: Empty question list
	*/
	err_t closeEditingQuiz(IEditingQuizSI* editingQuiz, bool isSave = true);

	/*
	* Return <error>:
	* 0: Success, no error
	* 1: Unknown id
	* 2: Incorrect author pass
	*/ 
	err_t loadQuizRecords(string id, string authorpass, QuizRecordsWrapper& wrapper);

private:
	static BLLManager* instance;

	DALManager* dalMnger = nullptr;
	vector<EditingQuiz*> openEditingQuiz;
	vector<RunningQuiz*> openRunningQuiz;
};

#endif