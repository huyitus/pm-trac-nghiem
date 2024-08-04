#ifndef _EditingQuiz_H_
#define _EditingQuiz_H_

#include "../ServiceInterface/IEditingQuizSI.h"
#include "../../DAL/Quiz.h"
#include "../../DAL/DALManager.h"
#include <string>

class EditingQuiz : public IEditingQuizSI {
public:
	EditingQuiz(std::string id, bool isAuth = false);

	~EditingQuiz();

	bool authAuthorPass(string typeInPass);

	bool isAuthenticated();

	int createNewQuestion(IQuestion*& question);

	bool removeQuestion(int quesIndex);

	IQuestion* getEditingQuestion(int quesIndex);

	IQuizHeaderSI* getQuizHeader();

	int getQuestionAmount();

	bool saveToFile();
private:
	Quiz* quiz = nullptr;
	bool isAuth = false;
};

#endif