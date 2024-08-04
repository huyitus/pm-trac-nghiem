#include "QuizRecord.h"

QuizRecord::QuizRecord()
{
    this->_startStamp = TimeStamp();
    this->_examineeID = "";
    this->_examineeName = u"";
    this->_mark = 0.0;
    this->_examTime = 0;
}

QuizRecord::QuizRecord(const QuizRecord& other)
{
    this->_startStamp = other._startStamp;
    this->_examineeID = other._examineeID;
    this->_examineeName = other._examineeName;
    this->_mark = other._mark;
    this->_examTime = other._examTime;
}

QuizRecord::QuizRecord(TimeStamp startStamp, std::string examineeID, std::u16string examineeName,  double mark, int32_t examTime)
{
    this->_startStamp = startStamp;
    this->_examineeID = examineeID;
    this->_examineeName = examineeName;
    this->_mark = mark;
    this->_examTime = examTime;
}

QuizRecord::~QuizRecord()
{

}

QuizRecord& QuizRecord::operator=(const QuizRecord& other)
{
    this->_startStamp = other._startStamp;
    this->_examineeID = other._examineeID;
    this->_examineeName = other._examineeName;
    this->_mark = other._mark;
    this->_examTime = other._examTime;

    return (*this);
}

int8_t QuizRecord::parse(std::u16string data, QuizRecord& quizRecord)
{
    std::vector<std::u16string> tokenList = Formatter::tokenize(data, delim3);

    if (tokenList.size() != 5)
        return 0;

    TimeStamp::parse(tokenList[0], quizRecord._startStamp);
    quizRecord._examineeID = Formatter::toString(tokenList[1]);
    quizRecord._examineeName = tokenList[2];
    quizRecord._mark = Formatter::toDouble(tokenList[3]);
    quizRecord._examTime = Formatter::toInt32(tokenList[4]);

    return 1;
}

std::basic_ostream<char16_t>& operator <<(std::basic_ostream<char16_t>& out, const QuizRecord& quizRecord)
{
    out << quizRecord._startStamp << delim3
        << Formatter::toUTF16String(quizRecord._examineeID) << delim3
        << quizRecord._examineeName << delim3 
        << Formatter::toUTF16String(quizRecord._mark) << delim3
        << Formatter::toUTF16String(quizRecord._examTime) << endline;
    return out;
}

//==Getter==//
TimeStamp QuizRecord::getStartStamp()
{
    return this->_startStamp;
}

int32_t QuizRecord::getExamTime()
{
    return this->_examTime;
}

std::u16string QuizRecord::getExamineeName()
{
    return this->_examineeName;
}

std::string QuizRecord::getExamineeID()
{
    return this->_examineeID;
}

double QuizRecord::getMark()
{
    return this->_mark;
}

//==Setter==//
int8_t QuizRecord::setStartStamp(const TimeStamp& startStamp)
{
    this->_startStamp = startStamp;
    return 1;
}

int8_t QuizRecord::setExamTime(int32_t examTime)
{
    this->_examTime = examTime;
    return 1;
}

int8_t QuizRecord::setExamineeName(const std::u16string& examineeName)
{
    this->_examineeName = examineeName;
    return 1;
}

int8_t QuizRecord::setExamineeID(const std::string& examineeID)
{
    this->_examineeID = examineeID;
    return 1;
}

int8_t QuizRecord::setMark(double mark)
{
    this->_mark = mark;   
    return 1;
}

bool QuizRecord::equal(QuizRecord other) {
    return (this->_startStamp.equal(other._startStamp) && this->_examineeID == other._examineeID &&
        this->_examineeName == other._examineeName && this->_mark == other._mark &&
        this->_examTime == other._examTime);
}