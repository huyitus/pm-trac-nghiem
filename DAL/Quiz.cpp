#include "Quiz.h"

Quiz::Quiz() {
    this->_quizHeader = QuizHeader();
    this->_questionList.resize(0);
}

Quiz::Quiz(std::string id) {
    this->_quizHeader = QuizHeader(id);
    this->_questionList.resize(0);
}

Quiz::Quiz(const Quiz& other) {
    this->_quizHeader = other._quizHeader;
    this->_questionList = other._questionList;
}

Quiz::Quiz(QuizHeader quizheader, std::vector<Question> questionList) {
    this->_quizHeader = quizheader;
    this->_questionList = questionList;
}

Quiz::~Quiz()
{

}

Quiz& Quiz::operator=(const Quiz& other)
{
    this->_quizHeader = other._quizHeader;
    this->_questionList = other._questionList;

    return (*this);
}

std::basic_ostream<char16_t>& operator <<(std::basic_ostream<char16_t>& out, const Quiz& quiz)
{
    out << quiz._quizHeader;
    for (auto& question: quiz._questionList)
        out << question;
    return out;
}

//==Getter==//
std::string Quiz::getID()
{
    return this->_quizHeader.getID();
}

QuizHeader* Quiz::getQuizHeader()
{
    return &this->_quizHeader;
}
std::vector <Question> Quiz::getQuestionList()
{
    return this->_questionList;
}

Question* Quiz::getQuestion(int8_t index) {
    if (index < 0 || index > (int8_t)this->_questionList.size())
        return nullptr;
    return &this->_questionList[index];
}

int Quiz::getQuestionAmount() {
    return this->_questionList.size();
}

//==Setter==//
int8_t Quiz::setQuizHeader(const QuizHeader& quizHeader)
{
    this->_quizHeader = quizHeader;
    return 1;
}

int8_t Quiz::addQuestion(const Question& question)
{
    this->_questionList.push_back(question);
    return this->_questionList.size()-1;
}

int8_t Quiz::addQuesiton(const Question& question, int8_t index)
{
    if (index < 0 || index > (int8_t)this->_questionList.size())
        return 0;
    this->_questionList.insert(this->_questionList.begin() + index, question);
    return index;
}

//==Remover==//
int8_t Quiz::removeQuestion(const Question& question)
{
    for (auto iter = this->_questionList.begin(); iter != this->_questionList.end(); ++iter) {
        if (*iter == question) {
            this->_questionList.erase(iter);
            return 1;
        }
    }
    return 0;
}

int8_t Quiz::removeQuesiton(int8_t index)
{
    if (index < 0 || index > (int8_t)this->_questionList.size())
        return 0;

    this->_questionList.erase(this->_questionList.begin() + index);
    return 1;
}