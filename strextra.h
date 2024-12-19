#pragma once

#include <string>
#include <cctype>
#include <cwctype>
#include <sstream>
#include "tmc_global_types.h"
#include <vector>

namespace tmc {

s16 ignCaseStrComp(const std::string& str1,
                     const std::string& str2,
                     std::string::size_type count = std::string::npos,
                     bool skipWs = false,
                     bool skipPunct = false);

s64 ignCaseStrComp(const std::wstring& str1,
                   const std::wstring& str2,
                   std::wstring::size_type count = std::wstring::npos,
                   bool skipWs = false,
                   bool skipPunct = false);

std::string toAllUpper(const std::string& str);

std::wstring toAllUpper(const std::wstring& str);

std::string toAllLower(const std::string& str);

std::wstring toAllLower(const std::wstring& str);

template <class charT>
std::vector<std::basic_string<charT>> parseArrayWithEscape(std::basic_string<charT> str, charT delim);

}
