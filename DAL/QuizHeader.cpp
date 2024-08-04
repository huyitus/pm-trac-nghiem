#include "QuizHeader.h"

QuizHeader::QuizHeader()
{
    this->_ID = "";
    this->_examPass = "";
    this->_authorPass = "";
    this->_name = u"";
    this->_authorName = u"";
    this->_duration = 0;
    this->_status = 0;
    this->_examAmount = -1;
    this->_optionList = 0;
}

QuizHeader::QuizHeader(std::string id)
{
    this->_ID = id;
    this->_examPass = "";
    this->_authorPass = "";
    this->_name = u"";
    this->_authorName = u"";
    this->_duration = 0;
    this->_status = 0;
    this->_examAmount = -1;
    this->_optionList = 0;
}

QuizHeader::QuizHeader(const QuizHeader& other)
{
    this->_ID = other._ID;
    this->_examPass = other._examPass;
    this->_authorPass = other._authorPass;
    this->_name = other._name;
    this->_authorName = other._authorName;
    this->_duration = other._duration;
    this->_status = other._status;
    this->_examAmount = other._examAmount;
    this->_optionList = other._optionList;
}


QuizHeader::QuizHeader(std::string ID, std::string examPass, std::string authorPass, std::u16string name, std::u16string authorName, int32_t duration, int8_t status, int32_t examAmount, int8_t optionList)
{
    this->_ID = ID;
    this->_examPass = examPass;
    this->_authorPass = authorPass;
    this->_name = name;
    this->_authorName = authorName;
    this->_duration = duration;
    this->_status = status;
    this->_examAmount = examAmount;
    this->_optionList = optionList;
}

QuizHeader::~QuizHeader()
{

}

QuizHeader& QuizHeader::operator=(const QuizHeader& other)
{
    this->_ID = other._ID;
    this->_examPass = other._examPass;
    this->_authorPass = other._authorPass;
    this->_name = other._name;
    this->_authorName = other._authorName;
    this->_duration = other._duration;
    this->_status = other._status;
    this->_examAmount = other._examAmount;
    this->_optionList = other._optionList;

    return (*this);
}

int8_t QuizHeader::parse(std::u16string data, QuizHeader& quizHeader)
{
    std::vector<std::u16string> tokenList = Formatter::tokenize(data, delim1);

    if (tokenList.size() != 9)
        return 0;

    quizHeader._ID = Formatter::toString(tokenList[0]);
    quizHeader._examPass = Formatter::toString(tokenList[1]);
    quizHeader._authorPass = Formatter::toString(tokenList[2]);
    quizHeader._name = tokenList[3];
    quizHeader._authorName = tokenList[4];
    quizHeader._duration = Formatter::toInt32(tokenList[5]);
    quizHeader._status = Formatter::toInt8(tokenList[6]);
    quizHeader._examAmount = Formatter::toInt32(tokenList[7]);
    quizHeader._optionList = Formatter::toInt8(tokenList[8]);
    return 1;
}

std::basic_ostream<char16_t>& operator <<(std::basic_ostream<char16_t>& out, const QuizHeader& quizHeader)
{
    out << Formatter::changeForm(quizHeader._ID) << Formatter::changeForm(delim1)
        << Formatter::changeForm(quizHeader._examPass) << Formatter::changeForm(delim1)
        << Formatter::changeForm(quizHeader._authorPass) << Formatter::changeForm(delim1)
        << Formatter::changeForm(quizHeader._name) << Formatter::changeForm(delim1)
        << Formatter::changeForm(quizHeader._authorName) << Formatter::changeForm(delim1)
        << Formatter::changeForm(quizHeader._duration) << Formatter::changeForm(delim1)
        << Formatter::changeForm(quizHeader._status) << Formatter::changeForm(delim1)
        << Formatter::changeForm(quizHeader._examAmount) << Formatter::changeForm(delim1)
        << Formatter::changeForm(quizHeader._optionList) << endline;
    return out;
}

//==Getter==//
std::string QuizHeader::getID()
{
    return this->_ID;
}

std::string QuizHeader::getExamPass()
{
    return this->_examPass;
}

std::string QuizHeader::getAuthorPass()
{
    return this->_authorPass;
}

std::u16string QuizHeader::getName()
{
    return this->_name;
}

std::u16string QuizHeader::getAuthorName()
{
    return this->_authorName;
}

int32_t QuizHeader::getDuration()
{
    return this->_duration;
}

int8_t QuizHeader::getStatus()
{
    return this->_status;
}

int32_t QuizHeader::getExamAmount()
{
    return this->_examAmount;
}

int8_t QuizHeader::getShowAnswerOption()
{
    return (this->_optionList & (1 << 0));
}

int8_t QuizHeader::getShowRankingOption()
{
    return (this->_optionList & (1 << 1));
}

//==Setter==//
//int8_t QuizHeader::setID(const std::string& ID)
//{
//    this->_ID = ID;
//    return 1;
//}

int8_t QuizHeader::setExamPass(const std::string& examPass)
{
    this->_examPass = examPass;
    return 1;
}

int8_t QuizHeader::setAuthorPass(const std::string& authorPass)
{
    this->_authorPass = authorPass;
    return 1;
}

int8_t QuizHeader::setName(const std::u16string& name)
{
    this->_name = name;
    return 1;
}

int8_t QuizHeader::setAuthorName(const std::u16string& authorName)
{
    this->_authorName = authorName;
    return 1;
}

int8_t QuizHeader::setDuration(int32_t duration)
{
    this->_duration = duration;
    return 1;
}

int8_t QuizHeader::setStatus(int8_t status)
{
    this->_status = status;
    return 1;
}

int8_t QuizHeader::setExamAmount(int32_t examAmount)
{
    this->_examAmount = examAmount;
    return 1;
}

int8_t QuizHeader::setShowAnswerOption(int8_t value)
{
    int8_t reset = (int8_t)(-2);
    this->_optionList &= reset;
    this->_optionList |= (value << 0);
    return 1;
}
int8_t QuizHeader::setShowRankingOption(int8_t value)
{
    int8_t reset = (int8_t)(-3);
    this->_optionList &= reset;
    this->_optionList |= (value << 1);
    return 1;
}