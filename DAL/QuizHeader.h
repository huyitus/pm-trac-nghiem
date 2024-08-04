#ifndef _QuizHeader_H
#define _QuizHeader_H

#include <cstdint>
#include <string>
#include <sstream>
#include "Formatter.h"
#include "../BLL/ServiceInterface/IQuizHeaderSI.h"

class QuizHeader : public IQuizHeaderSI {
private:
    std::string _ID;
    std::string _examPass;
    std::string _authorPass;
    std::u16string _name;
    std::u16string _authorName;
    int32_t _duration;
    int8_t _status; // status = 1 : Done, status = 0 : Not done
    int32_t _examAmount; // -1: use all
    int8_t _optionList; // Position from right to left: |0: showAnswerOption|1: showRankingOption|2-7: unused|
public:
    QuizHeader();
    QuizHeader(std::string id);
    QuizHeader(const QuizHeader& other);
    QuizHeader(std::string, std::string, std::string, std::u16string, std::u16string, int32_t, int8_t, int32_t, int8_t);
    ~QuizHeader();
    QuizHeader& operator=(const QuizHeader& other);
    static int8_t parse(std::u16string data, QuizHeader& quizHeader);
    friend std::basic_ostream<char16_t>& operator <<(std::basic_ostream<char16_t>& out, const QuizHeader& quizHeader);

    //==Getter==//
    std::string getID();
    std::string getExamPass();
    std::string getAuthorPass();
    std::u16string getName();
    std::u16string getAuthorName();
    int32_t getDuration();
    int8_t getStatus();
    int32_t getExamAmount();
    int8_t getShowAnswerOption();
    int8_t getShowRankingOption();

    //==Setter==//
    // int8_t setID(const std::string& ID);
    int8_t setExamPass(const std::string& examPass);
    int8_t setAuthorPass(const std::string& editingPass);
    int8_t setName(const std::u16string& name);
    int8_t setAuthorName(const std::u16string& authorName);
    int8_t setDuration(int32_t duration);
    int8_t setStatus(int8_t status);
    int8_t setExamAmount(int32_t examAmount);
    int8_t setShowAnswerOption(int8_t value);
    int8_t setShowRankingOption(int8_t value);
};


#endif