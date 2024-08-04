#include "Formatter.h"

std::string Formatter::toString(int32_t x)
{
    return std::to_string(x);
}

std::string Formatter::toString(int8_t x)
{
    return std::to_string(x);
}

std::string Formatter::toString(double x)
{
    return std::to_string(x);
}

int32_t Formatter::toInt32(std::string x)
{
    return stoi(x);
}

int8_t Formatter::toInt8(std::string x)
{
    return stoi(x);
}

double Formatter::toDouble(std::string x)
{
    return stod(x);
}

std::u16string Formatter::toUTF16String(std::string x)
{
    std::wstring_convert<std::codecvt_utf8_utf16<char16_t>,char16_t> convert;
    std::u16string res = convert.from_bytes(x);
    
    return res;
}

std::u16string Formatter::toUTF16String(int32_t x)
{
    return Formatter::toUTF16String(Formatter::toString(x));
}

std::u16string Formatter::toUTF16String(int8_t x)
{
    return Formatter::toUTF16String(Formatter::toString(x));
}

std::u16string Formatter::toUTF16String(double x)
{
    return Formatter::toUTF16String(Formatter::toString(x));
}

std::u16string Formatter::toTwoDigitsFormat(int32_t x)
{
    if (x < 9)
        return u"0" + Formatter::toUTF16String(x);
    return Formatter::toUTF16String(x);
}

std::string Formatter::toString(std::u16string x)
{
    std::wstring_convert<std::codecvt_utf8_utf16<char16_t>,char16_t> convert;
    std::string res = convert.to_bytes(x);
    
    return res;
}

int32_t Formatter::toInt32(std::u16string x)
{
    return Formatter::toInt32(Formatter::toString(x));
}

int8_t Formatter::toInt8(std::u16string x)
{
    return Formatter::toInt8(Formatter::toString(x));
}

double Formatter::toDouble(std::u16string x)
{
    return Formatter::toDouble(Formatter::toString(x));
}

std::vector<std::u16string> Formatter::tokenize(std::u16string data, std::u16string delim)
{
    std::vector<std::u16string> res(0);

    if (data == u"") 
        return res;
        
    size_t start = 0;
    if (data.substr(start, delim.length()) == delim)
        res.push_back(u"");
    
    while (1)
    {
        while (start < data.length() - delim.length() && data.substr(start, delim.length()) == delim && data.substr(start + delim.length(), delim.length()) == delim) {
            res.push_back(u"");
            start++;
        }
        if (start > 0) start++;

        size_t end = data.find(delim, start + delim.length());
        if (end == std::u16string::npos) {
            res.push_back(data.substr(start, data.length() - start + 1));
            break;
        }

        res.push_back(data.substr(start, end - start));
        start = end;
    }

    return res;
}

std::u16string Formatter::changeForm(std::u16string x)
{
    for (auto &character : x) {
        character = (char16_t)(character ^ key);
    }
    return x;
}

std::u16string Formatter::changeForm(std::string x)
{
    return Formatter::changeForm(Formatter::toUTF16String(x));
}

std::u16string Formatter::changeForm(int32_t x)
{
    return Formatter::changeForm(Formatter::toUTF16String(x));
}

std::u16string Formatter::changeForm(int8_t x)
{
    return Formatter::changeForm(Formatter::toUTF16String(x));
}

std::u16string Formatter::changeForm(double x)
{
    return Formatter::changeForm(Formatter::toUTF16String(x));
}  