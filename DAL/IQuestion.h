#ifndef _IQuestion_H_
#define _IQuestion_H_

#include <vector>
#include <string>
#include <cstdint>
#include "../BLL/ServiceInterface/IQuestionContentSI.h"

class IQuestion : virtual public IQuestionContentSI {
public:
	//==Getter==//
	//virtual std::u16string getQuestion() = 0;
	//virtual std::vector<std::u16string> getChoiceList() = 0;
	virtual int8_t getAnswerIndex() = 0;
	virtual std::vector<std::u16string> getTagList() = 0;
	virtual double getMark() = 0;
	virtual int8_t isHasTag(const std::u16string& tag) = 0;

	//==Setter==//
	virtual int8_t setQuestion(const std::u16string& question) = 0;
	virtual int8_t setAnswerIndex(int8_t index) = 0;
	virtual int8_t setMark(double mark) = 0;
	virtual int8_t addChoice(const std::u16string& choice) = 0;
	virtual int8_t addChoice(const std::u16string& choice, int8_t index) = 0;
	virtual int8_t addTag(const std::u16string& tag) = 0;
	virtual int8_t addTag(const std::u16string& tag, int8_t index) = 0;

	//==Remover==//
	virtual int8_t removeTag(const std::u16string& tag) = 0;
	virtual int8_t removeTag(int8_t index) = 0;
	virtual int8_t removeChoice(const std::u16string& choice) = 0;
	virtual int8_t removeChoice(int8_t index) = 0;
};

#endif