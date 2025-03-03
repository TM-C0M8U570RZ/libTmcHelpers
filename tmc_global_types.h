#pragma once
#include <cstdint>
#include <vector>
#include <string>
#include <fstream>

#ifndef TMC_USING // define the macro to include something else that makes these aliases (This file comes second in that case)
#define TMC_USING
using s8 = int8_t;
using s16 = int16_t;
using s32 = int32_t;
using s64 = int64_t;
using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;
using f32 = float;
using f64 = double;
using ptr = void*;
using uchr = wchar_t;
#endif

namespace std {
template <>
struct char_traits<u8>
{
    using char_type = u8;
    using int_type = s32;
    using pos_type = std::streampos;
    using off_type = std::streamoff;
    using state_type = std::mbstate_t;
    static void assign(char_type& c1, const char_type& c2)
    {
        c1 = c2;
    }
    static bool eq(const char_type& c1, const char_type& c2)
    {
        return c1 == c2;
    }
    static bool lt(const char_type& c1, const char_type& c2)
    {
        return c1 < c2;
    }
    static size_t length(const char_type* s)
    {
        size_t n = 0;
        while(*s)
        {
            ++s;
            ++n;
        }
        return n;
    }
    static int compare(const char_type* s1, const char_type* s2, size_t n)
    {
        for (size_t i = 0; i < n; ++i)
        {
            if (!eq(s1[i], s2[i]))
            {
                return lt(s1[i], s2[i]) ? -1 : 1;
            }
        }
        return 0;
    }
    static const char_type* find(const char_type* s, size_t n, const char_type& a)
    {
        for (size_t i = 0; i < n; ++i)
        {
            if (eq(s[i], a))
            {
                return s + i;
            }
        }
        return nullptr;
    }
    static char_type* copy(char_type* dest, const char_type* src, size_t n)
    {
        for (size_t i = 0; i < n; ++i)
        {
            dest[i] = src[i];
        }
        return dest;
    }
    static char_type* move(char_type* dest, const char_type* src, size_t n)
    {
        if (dest <= src || dest >= src + n)
        {
            copy(dest, src, n);
        }
        else
        {
            for (size_t i = n; i > 0; --i)
            {
                dest[i - 1] = src[i - 1];
            }
        }
        return dest;
    }
    static char_type to_char_type(const int_type& c)
    {
        return static_cast<char_type>(c);
    }
    static int_type to_int_type(const char_type& c)
    {
        return static_cast<int_type>(c);
    }
    static const char_type* assign(char_type* b, size_t n, char_type a)
    {
        for (size_t i = 0; i < n; ++i)
        {
            b[i] = a;
        }
        return b;
    }
    static bool eq_int_type(const int_type& c1, const int_type& c2)
    {
        return c1 == c2;
    }
    static int_type eof()
    {
        return static_cast<int_type>(-1);
    }
    static int_type not_eof(const int_type& c)
    {
        return eq_int_type(c, eof()) ? 0 : c;
    }
};
}

namespace tmc {
using u8Vec = std::vector<u8>;
using s8Vec = std::vector<s8>;
using ufstream = std::basic_fstream<u8>;
using uifstream = std::basic_ifstream<u8>;
using uofstream = std::basic_ofstream<u8>;
namespace Asset
{
struct rgbaCol {u8 r; u8 g; u8 b; u8 a;};
}
namespace Bidoof
{
struct criterion {bool positive; std::vector<std::string> group;};
}
}
