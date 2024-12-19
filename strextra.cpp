#include "strextra.h"


namespace tmc {

s16 ignCaseStrComp(const std::string& str1,
                     const std::string& str2,
                     std::string::size_type count,
                     bool skipWs,
                     bool skipPunct)
{

    s16 result = 0;
    std::string::size_type c1 = 0;
    std::string::size_type c2 = 0;
    while (c1 < str1.size() && c2 < str2.size()
           && c1 < count && c2 < count
           && result == 0)
    {
        if (skipWs)
        {
            while (c1 < str1.size() && isspace(str1[c1]))
            {
                c1++;
            }
            while (c2 < str2.size() && isspace(str2[c2]))
            {
                c2++;
            }
        }
        if (skipPunct)
        {
            while (c1 < str1.size() && ispunct(str1[c1]))
            {
                c1++;
            }
            while (c2 < str2.size() && ispunct(str2[c2]))
            {
                c2++;
            }
        }
        s16 lhs = 0;
        s16 rhs = 0;
        while ((c1 < str1.size() || c2 < str2.size()) &&
               (isdigit(str1[c1]) || isdigit(str2[c2])))
        {
            if (c1 < str1.size() && isdigit(str1[c1]))
            {
                lhs += str1[c1] - 0x30;
                lhs *= 10;
            }
            if (c2 < str2.size() && isdigit(str2[c2]))
            {
                rhs += str2[c2] - 0x30;
                rhs *= 10;
            }
            c2++;
            c1++;
        }
        lhs /= 10;
        rhs /= 10;
        result = lhs - rhs;
        if (result == 0 && c1 < str1.size() && c2 < str2.size())
        {
            result = static_cast<short>(toupper(str1[c1]))
            - static_cast<short>(toupper(str2[c2]));
        }
        c1++;
        c2++;
    }
    return result;
}

s64 ignCaseStrComp(const std::wstring& str1,
                   const std::wstring& str2,
                   std::wstring::size_type count,
                   bool skipWs,
                   bool skipPunct)
{

    s64 result = 0;
    std::wstring::size_type c1 = 0;
    std::wstring::size_type c2 = 0;
    while (c1 < str1.size() && c2 < str2.size()
           && c1 < count && c2 < count
           && result == 0)
    {
        if (skipWs)
        {
            while (c1 < str1.size() && iswspace(str1[c1]))
            {
                c1++;
            }
            while (c2 < str2.size() && iswspace(str2[c2]))
            {
                c2++;
            }
        }
        if (skipPunct)
        {
            while (c1 < str1.size() && iswpunct(str1[c1]))
            {
                c1++;
            }
            while (c2 < str2.size() && iswpunct(str2[c2]))
            {
                c2++;
            }
        }
        s64 lhs = 0;
        s64 rhs = 0;
        while ((c1 < str1.size() || c2 < str2.size()) &&
               (iswdigit(str1[c1]) || iswdigit(str2[c2])))
        {
            if (c1 < str1.size() && iswdigit(str1[c1]))
            {
                lhs += str1[c1] - 0x30;
                lhs *= 10;
            }
            if (c2 < str2.size() && iswdigit(str2[c2]))
            {
                rhs += str2[c2] - 0x30;
                rhs *= 10;
            }
            c2++;
            c1++;
        }
        lhs /= 10;
        rhs /= 10;
        result = lhs - rhs;
        if (result == 0 && c1 < str1.size() && c2 < str2.size())
        {
            result = static_cast<short>(towupper(str1[c1]))
            - static_cast<short>(towupper(str2[c2]));
        }
        c1++;
        c2++;
    }
    return result;
}

std::string toAllUpper(const std::string& str)
{
    std::string result;
    for (char c : str)
    {
        result+= static_cast<char>(toupper(c));
    }
    return result;
}

std::wstring toAllUpper(const std::wstring& str)
{
    std::wstring result;
    for (uchr c : str)
    {
        result+= static_cast<uchr>(towupper(c));
    }
    return result;
}

std::string toAllLower(const std::string& str)
{
    std::string result;
    for (char c : str)
    {
        result+= static_cast<char>(tolower(c));
    }
    return result;
}

std::wstring toAllLower(const std::wstring& str)
{
    std::wstring result;
    for (uchr c : str)
    {
        result+= static_cast<uchr>(towlower(c));
    }
    return result;
}

template <class charT>
std::vector<std::basic_string<charT>> parseArrayWithEscape(std::basic_string<charT> str, charT delim)
{
    std::vector<std::basic_string<charT>> result;
    std::basic_stringstream<charT> sstr(str);
    while(!sstr.eof())
    {
        std::basic_stringstream<charT> temp;
        std::getline(sstr, temp, delim);
        result.push_back(temp);
    }
    for (u64 i = 0; i < result.size(); i++)
    {
        // remove singleton backslashes
        while ((result[i].size() >= 2 && result[i].back() == '\\' && result[i][result[i].size() - 2] != '\\')
            || (result[i].size() == 1 && result[i].back() == '\\'))
        {
            result[i].pop_back();
            result[i] += delim;
            if (result.size() > (i + 1))
            {
                result[i] += result[i + 1];
                result.erase(result.begin() + i + 1);
                i--;
            }
        }
        // turn paired backslashes into singleton backslashes
        for (u64 j = 0; j < result[i].size(); j++)
        {
            if ((result[i][j] == '\\' && result[i].size() > (j + 1) && result[j + 1] != '\\')
                || ((result[i].size() - 1) == j && result[i].size() != 1 && result[i][j - 1] == '\\' && result[i][j] == '\\'))
            {
                result[i].erase(result[i].begin() + j);
                j--;
            }
        }
    }
    return result;
}

}
