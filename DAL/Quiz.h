#ifndef _Quiz_H
#define _Quiz_H

#include <cstdint>
#include "QuizHeader.h"
#include "Question.h"

class Quiz {
private:
    QuizHeader _quizHeader;
    std::vector<Question> _questionList;
public:
    Quiz();
    Quiz(std::string id);
    Quiz(const Quiz& other);
    Quiz(QuizHeader, std::vector<Question>);
    ~Quiz();
    Quiz& operator=(const Quiz& other);
    friend std::basic_ostream<char16_t>& operator <<(std::basic_ostream<char16_t>& out, const Quiz& quiz);

    //==Getter==//
    std::string getID();
    QuizHeader* getQuizHeader();
    std::vector<Question> getQuestionList();
    Question* getQuestion(int8_t index);
    int getQuestionAmount();

    //==Setter==//
    int8_t setQuizHeader(const QuizHeader& quizHeader);
    int8_t addQuestion(const Question& question);
    int8_t addQuesiton(const Question& question, int8_t index);

    //==Remover==//
    int8_t removeQuestion(const Question& question);
    int8_t removeQuesiton(int8_t index);
};


#endif