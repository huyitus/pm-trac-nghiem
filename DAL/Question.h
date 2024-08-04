#ifndef _Question_H
#define _Question_H

#include <string>
#include <vector>
#include <cstdint>
#include <sstream>
#include "Formatter.h"
#include "IQuestion.h"

class Question : public IQuestion {
private:
    std::u16string _question;
    std::vector<std::u16string> _choiceList;
    std::vector<std::u16string> _tagList;
    int8_t _answerIndex; 
    double _mark;
public:
    Question();
    Question(const Question& other);
    Question(std::u16string, std::vector<std::u16string>,  std::vector<std::u16string>, int8_t, double);
    ~Question();
    Question& operator=(const Question& other);
    int8_t operator==(const Question& other);
    static int8_t parse(std::u16string data, Question& question);
    friend std::basic_ostream<char16_t>& operator <<(std::basic_ostream<char16_t>& out, const Question& question);

    //==Getter==//
    std::u16string getQuestion();
	std::vector<std::u16string> getChoiceList();
	std::vector<std::u16string> getTagList();
	int8_t getAnswerIndex();
	double getMark();
    int8_t isHasTag(const std::u16string& tag);

    //==Setter==//
	int8_t setQuestion(const std::u16string& question);
	int8_t setAnswerIndex(int8_t index);
	int8_t setMark(double mark);
	int8_t addChoice(const std::u16string& choice);
	int8_t addChoice(const std::u16string& choice, int8_t index);
	int8_t addTag(const std::u16string& tag);
	int8_t addTag(const std::u16string& tag, int8_t index);

    //==Remover==//
	int8_t removeTag(const std::u16string& tag = u"");
	int8_t removeTag(int8_t index);
	int8_t removeChoice(const std::u16string& choice);
	int8_t removeChoice(int8_t index);
};


#endif