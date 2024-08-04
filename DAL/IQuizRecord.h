#ifndef _IQuizRecord_H_
#define _IQuizRecord_H_

#include "TimeStamp.h"

class IQuizRecord {
public:
    virtual int32_t getExamTime() = 0;

    virtual std::u16string getExamineeName() = 0;

    virtual std::string getExamineeID() = 0;

    virtual double getMark() = 0;

    virtual TimeStamp getStartStamp() = 0;
};

#endif