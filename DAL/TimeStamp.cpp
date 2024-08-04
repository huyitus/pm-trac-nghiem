#include "TimeStamp.h"

TimeStamp::TimeStamp()
{
    time_t t = time(0);
	tm* now = localtime(&t);

    this->_hour = now->tm_hour;
	this->_minute = now->tm_min;
	this->_second = now->tm_sec;
	this->_day = now->tm_mday;
	this->_month = now->tm_mon + 1;
	this->_year = now->tm_year + 1900;
}

TimeStamp::TimeStamp(const TimeStamp& other)
{
    this->_hour = other._hour;
	this->_minute = other._minute;
	this->_second = other._second;
	this->_day = other._day;
	this->_month = other._month;
	this->_year = other._year;
}

TimeStamp::TimeStamp(int32_t hour, int32_t minute, int32_t second, int32_t day, int32_t month, int32_t year)
{
    this->_hour = hour;
	this->_minute = minute;
	this->_second = second;
	this->_day = day;
	this->_month = month;
	this->_year = year;
}

TimeStamp::~TimeStamp()
{

}

TimeStamp& TimeStamp::operator=(const TimeStamp& other)
{
    this->_hour = other._hour;
	this->_minute = other._minute;
	this->_second = other._second;
	this->_day = other._day;
	this->_month = other._month;
	this->_year = other._year;

    return (*this);
}

int8_t TimeStamp::parse(std::u16string data, TimeStamp& timeStamp)
{
    std::vector<std::u16string> tokenList = Formatter::tokenize(data, space);

    if (tokenList.size() != 2)
        return 0;

    std::vector<std::u16string> timeTokenList = Formatter::tokenize(tokenList[0], delimTime);
    std::vector<std::u16string> dateTokenList = Formatter::tokenize(tokenList[1], delimDate);

    if (timeTokenList.size() != 3 || dateTokenList.size() != 3)
        return 0;

    timeStamp._hour = Formatter::toInt32(timeTokenList[0]);
	timeStamp._minute = Formatter::toInt32(timeTokenList[1]);
	timeStamp._second = Formatter::toInt32(timeTokenList[2]);
	timeStamp._day = Formatter::toInt32(dateTokenList[0]);
	timeStamp._month = Formatter::toInt32(dateTokenList[1]);
	timeStamp._year = Formatter::toInt32(dateTokenList[2]);

    return 1;
}

std::basic_ostream<char16_t>& operator <<(std::basic_ostream<char16_t>& out, const TimeStamp& timeStamp)
{
    out << Formatter::toTwoDigitsFormat(timeStamp._hour) << delimTime
        << Formatter::toTwoDigitsFormat(timeStamp._minute) << delimTime
        << Formatter::toTwoDigitsFormat(timeStamp._second) << space
        << Formatter::toTwoDigitsFormat(timeStamp._day) << delimDate
        << Formatter::toTwoDigitsFormat(timeStamp._month) << delimDate
        << Formatter::toUTF16String(timeStamp._year);
    return out;
}

std::string TimeStamp::toString() {
    std::stringstream writer;
    writer << Formatter::toString(Formatter::toTwoDigitsFormat(this->_hour)) << Formatter::toString(delimTime)
        << Formatter::toString(Formatter::toTwoDigitsFormat(this->_minute)) << Formatter::toString(delimTime)
        << Formatter::toString(Formatter::toTwoDigitsFormat(this->_second)) << Formatter::toString(space)
        << Formatter::toString(Formatter::toTwoDigitsFormat(this->_day)) << Formatter::toString(delimDate)
        << Formatter::toString(Formatter::toTwoDigitsFormat(this->_month)) << Formatter::toString(delimDate)
        << Formatter::toString(Formatter::toUTF16String(this->_year));
    return writer.str();
}

 //==Getter==//
int32_t TimeStamp::getHour()
{
    return this->_hour;
}

int32_t TimeStamp::getMinute()
{
    return this->_minute;
}

int32_t TimeStamp::getSecond()
{
    return this->_second;
}

int32_t TimeStamp::getDay()
{
    return this->_day;
}

int32_t TimeStamp::getMonth()
{
    return this->_month;
}

int32_t TimeStamp::getYear()
{
    return this->_year;
}

//==Setter==//
int8_t TimeStamp::setHour(int32_t hour)
{
    this->_hour = hour;
    return 1;
}

int8_t TimeStamp::setMinute(int32_t minute)
{
    this->_minute = minute;
    return 1;
}

int8_t TimeStamp::setSecond(int32_t second)
{
    this->_second = second;
    return 1;
}

int8_t TimeStamp::setDay(int32_t day)
{
    this->_day = day;
    return 1;
}

int8_t TimeStamp::setMonth(int32_t month)
{
    this->_month = month;
    return 1;
}

int8_t TimeStamp::setYear(int32_t year)
{
    this->_year = year;
    return 1;
}

bool TimeStamp::equal(TimeStamp other) {
    return (this->_hour == other._hour && this->_minute == other._minute && this->_second == other._second &&
            this->_day == other._day && this->_month == other._month && this->_year == other._year);
}
