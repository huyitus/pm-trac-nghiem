#include "Question.h"

Question::Question()
{
    this->_question = u"";
    this->_choiceList.resize(0);
    this->_answerIndex = -1;
    this->_tagList.resize(0);
    this->_mark = 0.0;
}

Question::Question(const Question& other)
{
    this->_question = other._question;
    this->_choiceList = other._choiceList;
    this->_answerIndex = other._answerIndex;
    this->_tagList = other._tagList;
    this->_mark = other._mark;
}

Question::Question(std::u16string question, std::vector<std::u16string> choiceList,  std::vector<std::u16string> tagList, int8_t answerIndex, double mark)
{
    this->_question = question;
    this->_choiceList = choiceList;
    this->_answerIndex = answerIndex;
    this->_tagList = tagList;
    this->_mark = mark;
}

Question::~Question()
{

}

Question& Question::operator=(const Question& other)
{
    this->_question = other._question;
    this->_choiceList = other._choiceList;
    this->_tagList = other._tagList;
    this->_answerIndex = other._answerIndex;
    this->_mark = other._mark;

    return (*this);
}

int8_t Question::operator==(const Question& other)
{
    return (this->_question == other._question &&
            this->_answerIndex == other._answerIndex &&
            this->_mark == other._mark &&
            this->_choiceList == other._choiceList &&
            this->_tagList == other._tagList);
}

int8_t Question::parse(std::u16string data, Question& question)
{
    std::vector<std::u16string> tokenList = Formatter::tokenize(data, delim1);

    if (tokenList.size() != 5)
        return 0;

    question._question = tokenList[0];

    std::vector<std::u16string> choiceList = Formatter::tokenize(tokenList[1], delim2);
    for (auto &choice : choiceList) {
        question._choiceList.push_back(choice);
    }

    std::vector<std::u16string> tagList = Formatter::tokenize(tokenList[2], delim2);
    for (auto &tag : tagList) {
        question._tagList.push_back(tag);
    }

    question._answerIndex = Formatter::toInt8(tokenList[3]);

    question._mark = Formatter::toDouble(tokenList[4]);
    return 1;
}

std::basic_ostream<char16_t>& operator <<(std::basic_ostream<char16_t>& out, const Question& question)
{
    out << Formatter::changeForm(question._question) << Formatter::changeForm(delim1);

    if (question._choiceList.empty()) out << Formatter::changeForm(delim1);
    else {
        for (auto &choice: question._choiceList) {
            out << Formatter::changeForm(choice);
            if (&choice != &question._choiceList.back()) 
                out << Formatter::changeForm(delim2); 
            else 
                out << Formatter::changeForm(delim1);
        }   
    }
    
    if (question._tagList.empty()) out << Formatter::changeForm(delim1);
    else {
        for (auto &tag: question._tagList) {
        out << Formatter::changeForm(tag);
        if (&tag != &question._tagList.back()) 
            out << Formatter::changeForm(delim2); 
        else 
            out << Formatter::changeForm(delim1);
        }  
    }

    out << Formatter::changeForm(question._answerIndex) << Formatter::changeForm(delim1)
        << Formatter::changeForm(question._mark) << endline;

    return out;
}

//==Getter==//
std::u16string Question::getQuestion()
{
    return this->_question;
}

std::vector<std::u16string> Question::getChoiceList()
{
    return this->_choiceList;
}

std::vector<std::u16string> Question::getTagList()
{
    return this->_tagList;
}

int8_t Question::getAnswerIndex()
{
    return this->_answerIndex;
}

double Question::getMark()
{
    return this->_mark;
}

int8_t Question::isHasTag(const std::u16string& tag) {
    for (auto iter = this->_tagList.begin(); iter != this->_tagList.end(); ++iter) {
        if (*iter == tag) {
            return 1;
        }
    }
    return 0;
}

//==Setter==//
int8_t Question::setQuestion(const std::u16string& question)
{
    this->_question = question;
    return 1;
}

int8_t Question::setAnswerIndex(int8_t index)
{
    this->_answerIndex = index;
    return 1;
}

int8_t Question::setMark(double mark)
{
    this->_mark = mark;
    return 1;
}

int8_t Question::addChoice(const std::u16string& choice)
{
    this->_choiceList.push_back(choice);
    return 1;
}

int8_t Question::addChoice(const std::u16string& choice, int8_t index)
{
    if (index < 0 || index > (int8_t)this->_choiceList.size())
        return 0;
    this->_choiceList.insert(this->_choiceList.begin() + index, choice);
    return 1;
}

int8_t Question::addTag(const std::u16string& tag)
{
    this->_tagList.push_back(tag);
    return 1;
}

int8_t Question::addTag(const std::u16string& tag, int8_t index)
{
    if (index < 0 || index > (int8_t)this->_tagList.size())
        return 0;
    this->_tagList.insert(this->_tagList.begin() + index, tag);
    return 1;
}

//==Remover==//
int8_t Question::removeTag(const std::u16string& tag)
{
    if (tag == u"") {
        this->_tagList.clear();
        return 1;
    }

    for (auto iter = this->_tagList.begin(); iter != this->_tagList.end(); ++iter) {
        if (*iter == tag) {
            this->_tagList.erase(iter);
            return 1;
        }
    }
    return 0;
}

int8_t Question::removeTag(int8_t index)
{
    if (index < 0 || index > (int8_t)this->_tagList.size())
        return 0;

    this->_tagList.erase(this->_tagList.begin() + index);
    return 1;
}

int8_t Question::removeChoice(const std::u16string& choice)
{
    for (auto iter = this->_choiceList.begin(); iter != this->_choiceList.end(); ++iter) {
        if (*iter == choice) {
            this->_choiceList.erase(iter);
            return 1;
        }
    }
    return 0;
}

int8_t Question::removeChoice(int8_t index)
{
    if (index < 0 || index > (int8_t)this->_choiceList.size())
        return 0;

    this->_choiceList.erase(this->_choiceList.begin() + index);
    return 1;
}