#include "tmc_global_1to1_algos.h"

template <class T>
T rotateBitsLeft(T in, u8 bitsToRotate)
{
    static_assert(std::is_integral<T>::value, "Not an integer!!!");
    if (in == 0) return in;
    if (std::is_unsigned<T>::value)
    {
        if (in == std::numeric_limits<T>::max()) return in;
    }
    else
    {
        if (in == -1) return in;
    }
    u8 bits = sizeof(T) * 8 - bitsToRotate;
    T mask = (static_cast<T>(pow(2, bitsToRotate)) - 1) << bits;
    T restore = (in & mask) >> bits;
    in <<= bitsToRotate;
    in |= restore;
    return in;
}

template <class T>
T rotateBitsRight(T in, u8 bitsToRotate)
{
    static_assert(std::is_integral<T>::value, "Not an integer!!!");
    if (in == 0) return in;
    if (std::is_unsigned<T>::value)
    {
        if (in == std::numeric_limits<T>::max()) return in;
    }
    else
    {
        if (in == -1) return in;
    }
    u8 bits = sizeof(T) * 8 - bitsToRotate;
    T mask = (static_cast<T>(pow(2, bitsToRotate)) - 1);
    T restore = (in & mask) << bits;
    in >>= bitsToRotate;
    in |= restore;
    return in;
}

tmc::u8Vec base64Enc(const tmc::u8Vec& in)
{
    const std::string BASE64_INDICES = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    tmc::u8Vec ret = {};
    for (u32 i = 0; i < in.size(); i += 3)
    {
        u32 u24 = in[i];
        u24 <<= 8;
        if ((i + 1) < in.size())
        {
            u24 |= in[i + 1];
        }
        u24 <<= 8;
        if ((i + 2) < in.size())
        {
            u24 |= in[i +2];
        }
        u8 c1 = (u24 >> 18) & 0x3f;
        u8 c2 = (u24 >> 12) & 0x3f;
        u8 c3 = (u24 >> 6) & 0x3f;
        u8 c4 = u24 & 0x3f;
        ret.push_back(BASE64_INDICES[c1]);
        ret.push_back(BASE64_INDICES[c2]);
        ret.push_back(((i + 1) < in.size()) ? BASE64_INDICES[c3] : '=');
        ret.push_back(((i + 2) < in.size()) ? BASE64_INDICES[c4] : '=');
    }
    return ret;
}

tmc::s8Vec base64Enc(const tmc::s8Vec& in)
{
    const std::string BASE64_INDICES = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    tmc::s8Vec ret = {};
    for (u32 i = 0; i < in.size(); i += 3)
    {
        u32 u24 = in[i];
        u24 <<= 8;
        if ((i + 1) < in.size())
        {
            u24 |= in[i + 1];
        }
        u24 <<= 8;
        if ((i + 2) < in.size())
        {
            u24 |= in[i +2];
        }
        u8 c1 = (u24 >> 18) & 0x3f;
        u8 c2 = (u24 >> 12) & 0x3f;
        u8 c3 = (u24 >> 6) & 0x3f;
        u8 c4 = u24 & 0x3f;
        ret.push_back(BASE64_INDICES[c1]);
        ret.push_back(BASE64_INDICES[c2]);
        ret.push_back(((i + 1) < in.size()) ? BASE64_INDICES[c3] : '=');
        ret.push_back(((i + 2) < in.size()) ? BASE64_INDICES[c4] : '=');
    }
    return ret;
}

std::string base64Enc(const std::string& in)
{
    const std::string BASE64_INDICES = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    std::string ret = "";
    for (u32 i = 0; i < in.size(); i += 3)
    {
        u32 u24 = in[i];
        u24 <<= 8;
        if ((i + 1) < in.size())
        {
            u24 |= in[i + 1];
        }
        u24 <<= 8;
        if ((i + 2) < in.size())
        {
            u24 |= in[i +2];
        }
        u8 c1 = (u24 >> 18) & 0x3f;
        u8 c2 = (u24 >> 12) & 0x3f;
        u8 c3 = (u24 >> 6) & 0x3f;
        u8 c4 = u24 & 0x3f;
        ret += BASE64_INDICES[c1];
        ret += BASE64_INDICES[c2];
        ret += ((i + 1) < in.size()) ? BASE64_INDICES[c3] : '=';
        ret += ((i + 2) < in.size()) ? BASE64_INDICES[c4] : '=';
    }
    return ret;
}

tmc::s8Vec base64Dec(const tmc::s8Vec& in)
{
    const std::map<u8, u8> BASE64_INDICES = {{'A', 0}, {'B', 1}, {'C', 2}, {'D', 3}, {'E', 4},
                                             {'F', 5}, {'G', 6}, {'H', 7}, {'I', 8}, {'J', 9},
                                             {'K', 10}, {'L', 11}, {'M', 12}, {'N', 13}, {'O', 14},
                                             {'P', 15}, {'Q', 16}, {'R', 17}, {'S', 18}, {'T', 19},
                                             {'U', 20}, {'V', 21}, {'W', 22}, {'X', 23}, {'Y', 24},
                                             {'Z', 25}, {'a', 26}, {'b', 27}, {'c', 28}, {'d', 29},
                                             {'e', 30}, {'f', 31}, {'g', 32}, {'h', 33}, {'i', 34},
                                             {'j', 35}, {'k', 36}, {'l', 37}, {'m', 38}, {'n', 39},
                                             {'o', 40}, {'p', 41}, {'q', 42}, {'r', 43}, {'s', 44},
                                             {'t', 45}, {'u', 46}, {'v', 47}, {'w', 48}, {'x', 49},
                                             {'y', 50}, {'z', 51}, {'0', 52}, {'1', 53}, {'2', 54},
                                             {'3', 55}, {'4', 56}, {'5', 57}, {'6', 58}, {'7', 59},
                                             {'8', 60}, {'9', 61}, {'+', 62}, {'/', 63}}; // I wrote an autogen program just for this lol
    tmc::s8Vec ret = {};
    bool endNotThree = (in.back() == '=' && (in[in.size() - 2] == '=' || !(BASE64_INDICES.at(in[in.size() - 2] & 3))));
    bool endIsOne = (endNotThree && in[in.size() - 2] == '0' && !(in[in.size() - 3] & 15));
    for (u32 i = 0; i < in.size(); i += 4)
    {
        u8 c1 = BASE64_INDICES.at(in[i]);
        u8 c2 = BASE64_INDICES.at(in[i + 1]);
        u8 c3 = (in[i + 2] != '=') ? BASE64_INDICES.at(in[i + 2]) : 0;
        u8 c4 = (in[i + 3] != '=') ? BASE64_INDICES.at(in[i + 3]) : 0;
        u32 u24 = c1;
        u24 <<= 6;
        u24 |= c2;
        u24 <<= 6;
        u24 |= c3;
        u24 <<= 6;
        u24 |= c4;
        char x = (u24 >> 16) & 0xff;
        char y = (u24 >> 8) & 0xff;
        char z = u24 & 0xff;
        ret.push_back(x);
        if ((i != in.size() - 4) || (!endIsOne)) ret.push_back(y);
        if ((i != in.size() - 4) || (!endNotThree)) ret.push_back(z);
    }
    return ret;
}

tmc::u8Vec base64Dec(const tmc::u8Vec& in)
{
    const std::map<u8, u8> BASE64_INDICES = {{'A', 0}, {'B', 1}, {'C', 2}, {'D', 3}, {'E', 4},
                                             {'F', 5}, {'G', 6}, {'H', 7}, {'I', 8}, {'J', 9},
                                             {'K', 10}, {'L', 11}, {'M', 12}, {'N', 13}, {'O', 14},
                                             {'P', 15}, {'Q', 16}, {'R', 17}, {'S', 18}, {'T', 19},
                                             {'U', 20}, {'V', 21}, {'W', 22}, {'X', 23}, {'Y', 24},
                                             {'Z', 25}, {'a', 26}, {'b', 27}, {'c', 28}, {'d', 29},
                                             {'e', 30}, {'f', 31}, {'g', 32}, {'h', 33}, {'i', 34},
                                             {'j', 35}, {'k', 36}, {'l', 37}, {'m', 38}, {'n', 39},
                                             {'o', 40}, {'p', 41}, {'q', 42}, {'r', 43}, {'s', 44},
                                             {'t', 45}, {'u', 46}, {'v', 47}, {'w', 48}, {'x', 49},
                                             {'y', 50}, {'z', 51}, {'0', 52}, {'1', 53}, {'2', 54},
                                             {'3', 55}, {'4', 56}, {'5', 57}, {'6', 58}, {'7', 59},
                                             {'8', 60}, {'9', 61}, {'+', 62}, {'/', 63}}; // I wrote an autogen program just for this lol
    tmc::u8Vec ret = {};
    bool endNotThree = (in.back() == '=' && (in[in.size() - 2] == '=' || !(BASE64_INDICES.at(in[in.size() - 2] & 3))));
    bool endIsOne = (endNotThree && in[in.size() - 2] == '0' && !(in[in.size() - 3] & 15));
    for (u32 i = 0; i < in.size(); i += 4)
    {
        u8 c1 = BASE64_INDICES.at(in[i]);
        u8 c2 = BASE64_INDICES.at(in[i + 1]);
        u8 c3 = (in[i + 2] != '=') ? BASE64_INDICES.at(in[i + 2]) : 0;
        u8 c4 = (in[i + 3] != '=') ? BASE64_INDICES.at(in[i + 3]) : 0;
        u32 u24 = c1;
        u24 <<= 6;
        u24 |= c2;
        u24 <<= 6;
        u24 |= c3;
        u24 <<= 6;
        u24 |= c4;
        char x = (u24 >> 16) & 0xff;
        char y = (u24 >> 8) & 0xff;
        char z = u24 & 0xff;
        ret.push_back(x);
        if ((i != in.size() - 4) || (!endIsOne)) ret.push_back(y);
        if ((i != in.size() - 4) || (!endNotThree)) ret.push_back(z);
    }
    return ret;
}

std::string base64Dec(const std::string& in)
{
    const std::map<u8, u8> BASE64_INDICES = {{'A', 0}, {'B', 1}, {'C', 2}, {'D', 3}, {'E', 4},
                                             {'F', 5}, {'G', 6}, {'H', 7}, {'I', 8}, {'J', 9},
                                             {'K', 10}, {'L', 11}, {'M', 12}, {'N', 13}, {'O', 14},
                                             {'P', 15}, {'Q', 16}, {'R', 17}, {'S', 18}, {'T', 19},
                                             {'U', 20}, {'V', 21}, {'W', 22}, {'X', 23}, {'Y', 24},
                                             {'Z', 25}, {'a', 26}, {'b', 27}, {'c', 28}, {'d', 29},
                                             {'e', 30}, {'f', 31}, {'g', 32}, {'h', 33}, {'i', 34},
                                             {'j', 35}, {'k', 36}, {'l', 37}, {'m', 38}, {'n', 39},
                                             {'o', 40}, {'p', 41}, {'q', 42}, {'r', 43}, {'s', 44},
                                             {'t', 45}, {'u', 46}, {'v', 47}, {'w', 48}, {'x', 49},
                                             {'y', 50}, {'z', 51}, {'0', 52}, {'1', 53}, {'2', 54},
                                             {'3', 55}, {'4', 56}, {'5', 57}, {'6', 58}, {'7', 59},
                                             {'8', 60}, {'9', 61}, {'+', 62}, {'/', 63}}; // I wrote an autogen program just for this lol
    std::string ret = "";
    bool endNotThree = (in.back() == '=' && (in[in.size() - 2] == '=' || !(BASE64_INDICES.at(in[in.size() - 2] & 3))));
    bool endIsOne = (endNotThree && in[in.size() - 2] == '0' && !(in[in.size() - 3] & 15));
    for (u32 i = 0; i < in.size(); i += 4)
    {
        u8 c1 = BASE64_INDICES.at(in[i]);
        u8 c2 = BASE64_INDICES.at(in[i + 1]);
        u8 c3 = (in[i + 2] != '=') ? BASE64_INDICES.at(in[i + 2]) : 0;
        u8 c4 = (in[i + 3] != '=') ? BASE64_INDICES.at(in[i + 3]) : 0;
        u32 u24 = c1;
        u24 <<= 6;
        u24 |= c2;
        u24 <<= 6;
        u24 |= c3;
        u24 <<= 6;
        u24 |= c4;
        char x = (u24 >> 16) & 0xff;
        char y = (u24 >> 8) & 0xff;
        char z = u24 & 0xff;
        ret += x;
        if ((i != in.size() - 4) || (!endIsOne)) ret += y;
        if ((i != in.size() - 4) || (!endNotThree)) ret += z;
    }
    return ret;
}

std::string rot13(std::string in)
{
    for (u32 i = 0; i < in.size(); i++)
    {
        if ((islower(in[i]) && in[i] <= 'm') || (isupper(in[i]) && in[i] <= 'M'))
        {
            in[i] += 13;
        }
        else if ((islower(in[i]) && in[i] > 'm') || (isupper(in[i]) && in[i] > 'M'))
        {
            in[i] -= 13;
        }
    }
    return in;
}
