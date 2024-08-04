#ifndef _IQuizHeaderSI_H_
#define _IQuizHeaderSI_H_

#include <cstdint>
#include <string>

using namespace std;

class IQuizHeaderSI {
public:
    virtual std::string getID() = 0;
    
    virtual std::string getExamPass() = 0;

    virtual std::string getAuthorPass() = 0;

    virtual std::u16string getName() = 0;

    virtual std::u16string getAuthorName() = 0;

    virtual int32_t getDuration() = 0;

    virtual int8_t getStatus() = 0;

    virtual int32_t getExamAmount() = 0;

    virtual int8_t getShowAnswerOption() = 0;

    virtual int8_t getShowRankingOption() = 0;

    // virtual int8_t setID(const std::string& ID) = 0;

    virtual int8_t setExamPass(const std::string& examPass) = 0;

    virtual int8_t setAuthorPass(const std::string& editingPass) = 0;

    virtual int8_t setName(const std::u16string& name) = 0;

    virtual int8_t setAuthorName(const std::u16string& authorName) = 0;

    virtual int8_t setDuration(int32_t duration) = 0;

    virtual int8_t setStatus(int8_t status) = 0;

    virtual int8_t setExamAmount(int32_t examAmount) = 0;

    virtual int8_t setShowAnswerOption(int8_t value) = 0;

    virtual int8_t setShowRankingOption(int8_t value) = 0;
};

#endif