#ifndef _TimeStamp_H
#define _TimeStamp_H

#include <string>
#include <cstdint>
#include <sstream>
#include "Formatter.h"
#include <ctime>

class TimeStamp
{
private: 
    int32_t _hour;
    int32_t _second;
    int32_t _minute;
    int32_t _day;
    int32_t _month;
    int32_t _year;
public:
    TimeStamp();
    TimeStamp(const TimeStamp& other);
    TimeStamp(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
    ~TimeStamp();
    TimeStamp& operator=(const TimeStamp& other);
    static int8_t parse(std::u16string data, TimeStamp& TimeStamp);
    friend std::basic_ostream<char16_t>& operator <<(std::basic_ostream<char16_t>& out, const TimeStamp& TimeStamp);

    std::string toString();

    //==Getter==//
    int32_t getHour();
    int32_t getMinute();
    int32_t getSecond();
    int32_t getDay();
    int32_t getMonth();
    int32_t getYear();
    

    //==Setter==//
    int8_t setHour(int32_t hour);
    int8_t setMinute(int32_t minute);
    int8_t setSecond(int32_t second);
    int8_t setDay(int32_t day);
    int8_t setMonth(int32_t month);
    int8_t setYear(int32_t year);

    bool equal(TimeStamp other);
};

#endif