#ifndef _DALManager_H
#define _DALManager_H

#include "QuizRecord.h"
#include "PathResolver.h"
#include "Quiz.h"
#include <fstream>
#include <iostream>

class DALManager {
private:
    DALManager();
    ~DALManager();
    static DALManager* _DALManager;
public:
    DALManager(const DALManager &other) = delete;
    void operator=(const DALManager &other) = delete;

    //==Tra ve doi tuong DALManager==//
    static DALManager* GetInstance();

    static void DestroyInstance();

    //==Method==//

    //Quiz
    bool hasQuiz(std::string id);
    bool loadQuiz(std::string id, Quiz& quiz);
    bool saveQuiz(std::string id, const Quiz& quiz); 
    
    //QuizRecord
    bool hasQuizRecord(std::string id);
    bool loadQuizRecord(std::string id, std::vector<QuizRecord>& quizRecordList);
    bool saveQuizRecord(std::string id, const std::vector<QuizRecord>& quizRecordList);
};

#endif