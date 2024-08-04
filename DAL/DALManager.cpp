#include "DALManager.h"

DALManager* DALManager::_DALManager = nullptr;

DALManager::DALManager() 
{
    PathResolver::GetInstance()->load();
}

DALManager::~DALManager()
{
    //
}

DALManager* DALManager::GetInstance()
{
    if (DALManager::_DALManager == nullptr) {
        _DALManager = new DALManager();
    }
    
    return _DALManager;
}

void DALManager::DestroyInstance() {
    delete DALManager::_DALManager;
    DALManager::_DALManager = nullptr;
}

bool DALManager::hasQuiz(std::string id)
{
    std::string path = PathResolver::GetInstance()->getLocalPath() + id + ".dat";
    std::basic_ifstream<char16_t> inp(path); 
    if (!inp) 
        return 0;

    inp.close();
    return 1;
}

bool DALManager::loadQuiz(std::string id, Quiz& quiz)
{
    std::string path = PathResolver::GetInstance()->getLocalPath() + id + ".dat";
    std::ifstream inp(path); 
    if (!inp) 
        return 0;

    quiz = Quiz();
    std::u16string data; 
    int flag = 0;
    std::string rawdata;
    QuizHeader quizHeader;

    std::getline(inp, rawdata);
    data = Formatter::toUTF16String(rawdata);
    data = Formatter::changeForm(data);
    flag = QuizHeader::parse(data, quizHeader);
    
    if (flag == 0)
        return 0;
    quiz.setQuizHeader(quizHeader);

    while(std::getline(inp, rawdata)) {
        data = Formatter::toUTF16String(rawdata);
        data = Formatter::changeForm(data);
        Question question;
        flag = Question::parse(data, question);
        if (flag == 0)
            return 0;
        quiz.addQuestion(question);
    }

    inp.close();
    return 1;
}

bool DALManager::saveQuiz(std::string id, const Quiz& quiz)
{
    std::string path = PathResolver::GetInstance()->getLocalPath() + id + ".dat";
    std::basic_ofstream<char16_t> out(path); 
    if (!out) 
        return 0;
    
    out << quiz;

    out.close();
    return 1;
}

bool DALManager::hasQuizRecord(std::string id)
{
    std::string path = PathResolver::GetInstance()->getServerPath() + id + "_record.csv";
    std::basic_ifstream<char16_t> inp(path); 
    if (!inp) 
        return 0;
        
    inp.close();
    return 1;
}

bool DALManager::loadQuizRecord(std::string id, std::vector<QuizRecord>& quizRecordList)
{
    std::string path = PathResolver::GetInstance()->getServerPath() + id + "_record.csv";
    std::ifstream inp(path); 
    if (!inp) 
        return 0;

    quizRecordList.resize(0);
    std::string rawdata;
    
    getline(inp, rawdata);
    while(getline(inp, rawdata)) {
        std::u16string data = Formatter::toUTF16String(rawdata);
        QuizRecord quizRecord;
        int flag = QuizRecord::parse(data, quizRecord);
        if (flag == 0)
            return 0;
        quizRecordList.push_back(quizRecord);
    }
        
    inp.close();
    return 1;
}

bool DALManager::saveQuizRecord(std::string id, const std::vector<QuizRecord>& quizRecordList)
{
    std::string path = PathResolver::GetInstance()->getServerPath() + id + "_record.csv";
    std::basic_ofstream<char16_t> out(path); 
    if (!out) 
        return 0;

    out << u"Start Time,Examinee ID,Examinee Name,Mark,Exam Time\n";
    for (const auto& quizRecord : quizRecordList) 
        out << quizRecord;

    out.close();
    return 1;
}