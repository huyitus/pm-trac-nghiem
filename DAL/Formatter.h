#ifndef _Formatter_H
#define _Formatter_H

#include <codecvt>
#include <string>
#include <cstdint>
#include <locale>
#include <vector>

const std::u16string delim1 = u"\u2588"; 
const std::u16string delim2 = u"\u2395";
const std::u16string delim3 = u",";
const std::u16string delimTime = u":";
const std::u16string delimDate = u"/";
const std::u16string endline = u"\n";
const std::u16string space = u" ";
const uint16_t key = 15380;

class Formatter {
public:
    static std::string toString(int32_t x);
    static std::string toString(int8_t x);
    static std::string toString(double x);

    static int32_t toInt32(std::string x);
    static int8_t toInt8(std::string x);
    static double toDouble(std::string x);

    static std::u16string toUTF16String(std::string x);
    static std::u16string toUTF16String(int32_t x);
    static std::u16string toUTF16String(int8_t x);
    static std::u16string toUTF16String(double x);
    static std::u16string toTwoDigitsFormat(int32_t x);

    static std::string toString(std::u16string x);
    static int32_t toInt32(std::u16string x);
    static int8_t toInt8(std::u16string x);
    static double toDouble(std::u16string x);

    static std::vector<std::u16string> tokenize(std::u16string data, std::u16string delim);

    static std::u16string changeForm(std::u16string x);
    static std::u16string changeForm(std::string x);
    static std::u16string changeForm(int32_t x);
    static std::u16string changeForm(int8_t x);
    static std::u16string changeForm(double x);   
};

#endif
