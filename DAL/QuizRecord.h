#ifndef _QuizRecord_H
#define _QuizRecord_H

#include <string>
#include <cstdint>
#include <sstream>
#include "Formatter.h"
#include "IQuizRecord.h"
#include "TimeStamp.h"

class QuizRecord : public IQuizRecord {
private: 
    TimeStamp _startStamp;
    std::string _examineeID;
    std::u16string _examineeName;
    double _mark;
    int32_t _examTime;
public:
    QuizRecord();
    QuizRecord(const QuizRecord& other);
    QuizRecord(TimeStamp, std::string, std::u16string, double, int32_t);
    ~QuizRecord();
    QuizRecord& operator=(const QuizRecord& other);
    static int8_t parse(std::u16string data, QuizRecord& quizRecord);
    friend std::basic_ostream<char16_t>& operator <<(std::basic_ostream<char16_t>& out, const QuizRecord& quizRecord);

    //==Getter==//
    TimeStamp getStartStamp();
    std::string getExamineeID();
    std::u16string getExamineeName();
    double getMark();
    int32_t getExamTime();

    //==Setter==//
    int8_t setStartStamp(const TimeStamp& startStamp);
    int8_t setExamineeID(const std::string& examineeID);
    int8_t setExamineeName(const std::u16string& examineeName);
    int8_t setMark(double mark);
    int8_t setExamTime(int32_t examTime);

    bool equal(QuizRecord other);
};

#endif