#ifndef _IQuestionContentSI_H_
#define _IQuestionContentSI_H_

#include <string>
#include <vector>

using namespace std;

class IQuestionContentSI {
public:
	virtual u16string getQuestion() = 0;
	virtual vector<u16string> getChoiceList() = 0;
};

#endif