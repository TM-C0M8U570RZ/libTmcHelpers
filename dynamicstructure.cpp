#include "dynamicstructure.h"

namespace tmc {

DynamicStructure::DynamicStructure(const std::string& filepath)
{
    strings = std::vector<std::string>(0);
    stringIds = std::vector<u64>(0);
    stringKeys = std::vector<std::string>(0);
    stringArrays = std::vector<std::vector<std::string>>(0);
    stringArrayIds = std::vector<u64>(0);
    stringArrayKeys = std::vector<std::string>(0);
    bools = std::vector<bool>(0);
    boolIds = std::vector<u64>(0);
    boolKeys = std::vector<std::string>(0);
    boolArrays = std::vector<std::vector<bool>>(0);
    boolArrayIds = std::vector<u64>(0);
    boolArrayKeys = std::vector<std::string>(0);
    chars = std::vector<char>(0);
    charIds = std::vector<u64>(0);
    charKeys = std::vector<std::string>(0);
    charArrays = std::vector<std::vector<char>>(0);
    charArrayIds = std::vector<u64>(0);
    charArrayKeys = std::vector<std::string>(0);
    s8s = std::vector<s8>(0);
    s8Ids = std::vector<u64>(0);
    s8Keys = std::vector<std::string>(0);
    s8Arrays = std::vector<std::vector<s8>>(0);
    s8ArrayIds = std::vector<u64>(0);
    s8ArrayKeys = std::vector<std::string>(0);
    u8s = std::vector<u8>(0);
    u8Ids = std::vector<u64>(0);
    u8Keys = std::vector<std::string>(0);
    u8Arrays = std::vector<std::vector<u8>>(0);
    u8ArrayIds = std::vector<u64>(0);
    u8ArrayKeys = std::vector<std::string>(0);
    s16s = std::vector<s16>(0);
    s16Ids = std::vector<u64>(0);
    s16Keys = std::vector<std::string>(0);
    s16Arrays = std::vector<std::vector<s16>>(0);
    s16ArrayIds = std::vector<u64>(0);
    s16ArrayKeys = std::vector<std::string>(0);
    u16s = std::vector<u16>(0);
    u16Ids = std::vector<u64>(0);
    u16Keys = std::vector<std::string>(0);
    u16Arrays = std::vector<std::vector<u16>>(0);
    u16ArrayIds = std::vector<u64>(0);
    u16ArrayKeys = std::vector<std::string>(0);
    s32s = std::vector<s32>(0);
    s32Ids = std::vector<u64>(0);
    s32Keys = std::vector<std::string>(0);
    s32Arrays = std::vector<std::vector<s32>>(0);
    s32ArrayIds = std::vector<u64>(0);
    s32ArrayKeys = std::vector<std::string>(0);
    u32s = std::vector<u32>(0);
    u32Ids = std::vector<u64>(0);
    u32Keys = std::vector<std::string>(0);
    u32Arrays = std::vector<std::vector<u32>>(0);
    u32ArrayIds = std::vector<u64>(0);
    u32ArrayKeys = std::vector<std::string>(0);
    s64s = std::vector<s64>(0);
    s64Ids = std::vector<u64>(0);
    s64Keys = std::vector<std::string>(0);
    s64Arrays = std::vector<std::vector<s64>>(0);
    s64ArrayIds = std::vector<u64>(0);
    s64ArrayKeys = std::vector<std::string>(0);
    u64s = std::vector<u64>(0);
    u64Ids = std::vector<u64>(0);
    u64Keys = std::vector<std::string>(0);
    u64Arrays = std::vector<std::vector<u64>>(0);
    u64ArrayIds = std::vector<u64>(0);
    u64ArrayKeys = std::vector<std::string>(0);
    f32s = std::vector<f32>(0);
    f32Ids = std::vector<u64>(0);
    f32Keys = std::vector<std::string>(0);
    f32Arrays = std::vector<std::vector<f32>>(0);
    f32ArrayIds = std::vector<u64>(0);
    f32ArrayKeys = std::vector<std::string>(0);
    f64s = std::vector<f64>(0);
    f64Ids = std::vector<u64>(0);
    f64Keys = std::vector<std::string>(0);
    f64Arrays = std::vector<std::vector<f64>>(0);
    f64ArrayIds = std::vector<u64>(0);
    f64ArrayKeys = std::vector<std::string>(0);
    this->filepath = filepath;
}

u64 DynamicStructure::getKeyCount()
{
    u64 result = std::numeric_limits<u64>::max();
    for (u64 i = 0; i < stringIds.size(); i++)
    {
        if (stringIds[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = stringIds[i];
        }
    }
    for (u64 i = 0; i < stringArrayIds.size(); i++)
    {
        if (stringArrayIds[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = stringArrayIds[i];
        }
    }
    for (u64 i = 0; i < boolIds.size(); i++)
    {
        if (boolIds[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = boolIds[i];
        }
    }
    for (u64 i = 0; i < boolArrayIds.size(); i++)
    {
        if (boolArrayIds[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = boolArrayIds[i];
        }
    }
    for (u64 i = 0; i < charIds.size(); i++)
    {
        if (charIds[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = charIds[i];
        }
    }
    for (u64 i = 0; i < charArrayIds.size(); i++)
    {
        if (charArrayIds[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = charArrayIds[i];
        }
    }
    for (u64 i = 0; i < s8Ids.size(); i++)
    {
        if (s8Ids[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = s8Ids[i];
        }
    }
    for (u64 i = 0; i < s8ArrayIds.size(); i++)
    {
        if (s8ArrayIds[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = s8ArrayIds[i];
        }
    }
    for (u64 i = 0; i < u8Ids.size(); i++)
    {
        if (u8Ids[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = u8Ids[i];
        }
    }
    for (u64 i = 0; i < u8ArrayIds.size(); i++)
    {
        if (u8ArrayIds[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = u8ArrayIds[i];
        }
    }
    for (u64 i = 0; i < s16Ids.size(); i++)
    {
        if (s16Ids[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = s16Ids[i];
        }
    }
    for (u64 i = 0; i < s16ArrayIds.size(); i++)
    {
        if (s16ArrayIds[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = s16ArrayIds[i];
        }
    }
    for (u64 i = 0; i < u16Ids.size(); i++)
    {
        if (u16Ids[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = u16Ids[i];
        }
    }
    for (u64 i = 0; i < u16ArrayIds.size(); i++)
    {
        if (u16ArrayIds[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = u16ArrayIds[i];
        }
    }
    for (u64 i = 0; i < s32Ids.size(); i++)
    {
        if (s32Ids[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = s32Ids[i];
        }
    }
    for (u64 i = 0; i < s32ArrayIds.size(); i++)
    {
        if (s32ArrayIds[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = s32ArrayIds[i];
        }
    }
    for (u64 i = 0; i < u32Ids.size(); i++)
    {
        if (u32Ids[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = u32Ids[i];
        }
    }
    for (u64 i = 0; i < u32ArrayIds.size(); i++)
    {
        if (u32ArrayIds[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = u32ArrayIds[i];
        }
    }
    for (u64 i = 0; i < s64Ids.size(); i++)
    {
        if (s64Ids[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = s64Ids[i];
        }
    }
    for (u64 i = 0; i < s64ArrayIds.size(); i++)
    {
        if (s64ArrayIds[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = s64ArrayIds[i];
        }
    }
    for (u64 i = 0; i < u64Ids.size(); i++)
    {
        if (u64Ids[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = u64Ids[i];
        }
    }
    for (u64 i = 0; i < u64ArrayIds.size(); i++)
    {
        if (u64ArrayIds[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = u64ArrayIds[i];
        }
    }
    for (u64 i = 0; i < f32Ids.size(); i++)
    {
        if (f32Ids[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = f32Ids[i];
        }
    }
    for (u64 i = 0; i < f32ArrayIds.size(); i++)
    {
        if (f32ArrayIds[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = f32ArrayIds[i];
        }
    }
    for (u64 i = 0; i < f64Ids.size(); i++)
    {
        if (f64Ids[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = f64Ids[i];
        }
    }
    for (u64 i = 0; i < f64ArrayIds.size(); i++)
    {
        if (f64ArrayIds[i] > result || result == std::numeric_limits<u64>::max())
        {
            result = f64ArrayIds[i];
        }
    }
    if (result == std::numeric_limits<u64>::max()) return 0;
    result++;
    return result;
}

bool DynamicStructure::hasKey(const std::string& key)
{
    return (isString(key) ||
            isStringArray(key) ||
            isBool(key) ||
            isBoolArray(key) ||
            isChar(key) ||
            isCharArray(key) ||
            isS8(key) ||
            isS8Array(key) ||
            isU8(key) ||
            isU8Array(key) ||
            isS16(key) ||
            isS16Array(key) ||
            isU16(key) ||
            isU16Array(key) ||
            isS32(key) ||
            isS32Array(key) ||
            isU32(key) ||
            isU32Array(key) ||
            isS64(key) ||
            isS64Array(key) ||
            isU64(key) ||
            isU64Array(key) ||
            isF32(key) ||
            isF32Array(key) ||
            isF64(key) ||
            isF64Array(key));
}

bool DynamicStructure::isString(const std::string& key)
{
    for (const auto& s: stringKeys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isStringArray(const std::string& key)
{
    for (const auto& s: stringArrayKeys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isBool(const std::string& key)
{
    for (const auto& s: boolKeys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isBoolArray(const std::string& key)
{
    for (const auto& s: boolArrayKeys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isChar(const std::string& key)
{
    for (const auto& s: charKeys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isCharArray(const std::string& key)
{
    for (const auto& s: charArrayKeys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isS8(const std::string& key)
{
    for (const auto& s: s8Keys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isS8Array(const std::string& key)
{
    for (const auto& s: s8ArrayKeys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isU8(const std::string& key)
{
    for (const auto& s: u8Keys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isU8Array(const std::string& key)
{
    for (const auto& s: u8ArrayKeys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isS16(const std::string& key)
{
    for (const auto& s: s16Keys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isS16Array(const std::string& key)
{
    for (const auto& s: s16ArrayKeys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isU16(const std::string& key)
{
    for (const auto& s: u16Keys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isU16Array(const std::string& key)
{
    for (const auto& s: u16ArrayKeys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isS32(const std::string& key)
{
    for (const auto& s: s32Keys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isS32Array(const std::string& key)
{
    for (const auto& s: s32ArrayKeys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isU32(const std::string& key)
{
    for (const auto& s: u32Keys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isU32Array(const std::string& key)
{
    for (const auto& s: u32ArrayKeys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isS64(const std::string& key)
{
    for (const auto& s: s64Keys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isS64Array(const std::string& key)
{
    for (const auto& s: s64ArrayKeys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isU64(const std::string& key)
{
    for (const auto& s: u64Keys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isU64Array(const std::string& key)
{
    for (const auto& s: u64ArrayKeys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isF32(const std::string& key)
{
    for (const auto& s: f32Keys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isF32Array(const std::string& key)
{
    for (const auto& s: f32ArrayKeys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isF64(const std::string& key)
{
    for (const auto& s: f64Keys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isF64Array(const std::string& key)
{
    for (const auto& s: f64ArrayKeys)
    {
        if (key == s) return true;
    }
    return false;
}

bool DynamicStructure::isString(u64 index)
{
    for (const auto& u: stringIds)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isStringArray(u64 index)
{
    for (const auto& u: stringArrayIds)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isBool(u64 index)
{
    for (const auto& u: boolIds)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isBoolArray(u64 index)
{
    for (const auto& u: boolArrayIds)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isChar(u64 index)
{
    for (const auto& u: charIds)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isCharArray(u64 index)
{
    for (const auto& u: charArrayIds)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isS8(u64 index)
{
    for (const auto& u: s8Ids)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isS8Array(u64 index)
{
    for (const auto& u: s8ArrayIds)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isU8(u64 index)
{
    for (const auto& u: u8Ids)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isU8Array(u64 index)
{
    for (const auto& u: u8ArrayIds)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isS16(u64 index)
{
    for (const auto& u: s16Ids)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isS16Array(u64 index)
{
    for (const auto& u: s16ArrayIds)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isU16(u64 index)
{
    for (const auto& u: u16Ids)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isU16Array(u64 index)
{
    for (const auto& u: u16ArrayIds)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isS32(u64 index)
{
    for (const auto& u: s32Ids)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isS32Array(u64 index)
{
    for (const auto& u: s32ArrayIds)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isU32(u64 index)
{
    for (const auto& u: u32Ids)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isU32Array(u64 index)
{
    for (const auto& u: u32ArrayIds)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isS64(u64 index)
{
    for (const auto& u: s64Ids)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isS64Array(u64 index)
{
    for (const auto& u: s64ArrayIds)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isU64(u64 index)
{
    for (const auto& u: u64Ids)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isU64Array(u64 index)
{
    for (const auto& u: u64ArrayIds)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isF32(u64 index)
{
    for (const auto& u: f32Ids)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isF32Array(u64 index)
{
    for (const auto& u: f32ArrayIds)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isF64(u64 index)
{
    for (const auto& u: f64Ids)
    {
        if (u == index) return true;
    }
    return false;
}

bool DynamicStructure::isF64Array(u64 index)
{
    for (const auto& u: f64ArrayIds)
    {
        if (u == index) return true;
    }
    return false;
}

template <>
std::string DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < strings.size(); i++)
    {
        if (stringKeys[i] == key) return strings[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
std::vector<std::string> DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < stringArrays.size(); i++)
    {
        if (stringArrayKeys[i] == key) return stringArrays[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
bool DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < bools.size(); i++)
    {
        if (boolKeys[i] == key) return bools[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
std::vector<bool> DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < boolArrays.size(); i++)
    {
        if (boolArrayKeys[i] == key) return boolArrays[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
char DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < chars.size(); i++)
    {
        if (charKeys[i] == key) return chars[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
std::vector<char> DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < charArrays.size(); i++)
    {
        if (charArrayKeys[i] == key) return charArrays[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
s8 DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < s8s.size(); i++)
    {
        if (s8Keys[i] == key) return s8s[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
std::vector<s8> DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < s8Arrays.size(); i++)
    {
        if (s8ArrayKeys[i] == key) return s8Arrays[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
u8 DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < u8s.size(); i++)
    {
        if (u8Keys[i] == key) return u8s[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
std::vector<u8> DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < u8Arrays.size(); i++)
    {
        if (u8ArrayKeys[i] == key) return u8Arrays[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
s16 DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < s16s.size(); i++)
    {
        if (s16Keys[i] == key) return s16s[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
std::vector<s16> DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < s16Arrays.size(); i++)
    {
        if (s16ArrayKeys[i] == key) return s16Arrays[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
u16 DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < u16s.size(); i++)
    {
        if (u16Keys[i] == key) return u16s[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
std::vector<u16> DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < u16Arrays.size(); i++)
    {
        if (u16ArrayKeys[i] == key) return u16Arrays[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
s32 DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < s32s.size(); i++)
    {
        if (s32Keys[i] == key) return s32s[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
std::vector<s32> DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < s32Arrays.size(); i++)
    {
        if (s32ArrayKeys[i] == key) return s32Arrays[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
u32 DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < u32s.size(); i++)
    {
        if (u32Keys[i] == key) return u32s[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
std::vector<u32> DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < u32Arrays.size(); i++)
    {
        if (u32ArrayKeys[i] == key) return u32Arrays[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
s64 DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < s64s.size(); i++)
    {
        if (s64Keys[i] == key) return s64s[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
std::vector<s64> DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < s64Arrays.size(); i++)
    {
        if (s64ArrayKeys[i] == key) return s64Arrays[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
u64 DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < u64s.size(); i++)
    {
        if (u64Keys[i] == key) return u64s[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
std::vector<u64> DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < u64Arrays.size(); i++)
    {
        if (u64ArrayKeys[i] == key) return u64Arrays[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
f32 DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < f32s.size(); i++)
    {
        if (f32Keys[i] == key) return f32s[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
std::vector<f32> DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < f32Arrays.size(); i++)
    {
        if (f32ArrayKeys[i] == key) return f32Arrays[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
f64 DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < f64s.size(); i++)
    {
        if (f64Keys[i] == key) return f64s[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
std::vector<f64> DynamicStructure::getAs(const std::string& key)
{
    for (u64 i = 0; i < f64Arrays.size(); i++)
    {
        if (f64ArrayKeys[i] == key) return f64Arrays[i];
    }
    throw (std::out_of_range("Key not found or wrong type"));
}

template <>
std::string DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < strings.size(); i++)
    {
        if(stringIds[i] == index) return strings[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
std::vector<std::string> DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < stringArrays.size(); i++)
    {
        if(stringArrayIds[i] == index) return stringArrays[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
bool DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < bools.size(); i++)
    {
        if(boolIds[i] == index) return bools[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
std::vector<bool> DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < boolArrays.size(); i++)
    {
        if(boolArrayIds[i] == index) return boolArrays[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
char DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < chars.size(); i++)
    {
        if(charIds[i] == index) return chars[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
std::vector<char> DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < charArrays.size(); i++)
    {
        if(charArrayIds[i] == index) return charArrays[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
s8 DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < s8s.size(); i++)
    {
        if(s8Ids[i] == index) return s8s[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
std::vector<s8> DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < s8Arrays.size(); i++)
    {
        if(s8ArrayIds[i] == index) return s8Arrays[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
u8 DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < u8s.size(); i++)
    {
        if(u8Ids[i] == index) return u8s[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
std::vector<u8> DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < u8Arrays.size(); i++)
    {
        if(u8ArrayIds[i] == index) return u8Arrays[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
s16 DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < s16s.size(); i++)
    {
        if(s16Ids[i] == index) return s16s[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
std::vector<s16> DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < s16Arrays.size(); i++)
    {
        if(s16ArrayIds[i] == index) return s16Arrays[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
u16 DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < u16s.size(); i++)
    {
        if(u16Ids[i] == index) return u16s[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
std::vector<u16> DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < u16Arrays.size(); i++)
    {
        if(u16ArrayIds[i] == index) return u16Arrays[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
s32 DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < s32s.size(); i++)
    {
        if(s32Ids[i] == index) return s32s[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
std::vector<s32> DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < s32Arrays.size(); i++)
    {
        if(s32ArrayIds[i] == index) return s32Arrays[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
u32 DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < u32s.size(); i++)
    {
        if(u32Ids[i] == index) return u32s[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
std::vector<u32> DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < u32Arrays.size(); i++)
    {
        if(u32ArrayIds[i] == index) return u32Arrays[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
s64 DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < s64s.size(); i++)
    {
        if(s64Ids[i] == index) return s64s[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
std::vector<s64> DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < s64Arrays.size(); i++)
    {
        if(s64ArrayIds[i] == index) return s64Arrays[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
u64 DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < u64s.size(); i++)
    {
        if(u64Ids[i] == index) return u64s[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
std::vector<u64> DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < u64Arrays.size(); i++)
    {
        if(u64ArrayIds[i] == index) return u64Arrays[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
f32 DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < f32s.size(); i++)
    {
        if(f32Ids[i] == index) return f32s[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
std::vector<f32> DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < f32Arrays.size(); i++)
    {
        if(f32ArrayIds[i] == index) return f32Arrays[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
f64 DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < f64s.size(); i++)
    {
        if(f64Ids[i] == index) return f64s[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

template <>
std::vector<f64> DynamicStructure::getAs(u64 index)
{
    for (u64 i = 0; i < f64Arrays.size(); i++)
    {
        if(f64ArrayIds[i] == index) return f64Arrays[i];
    }
    throw (std::out_of_range("Index out of range or wrong type"));
}

std::string DynamicStructure::indexToKey(u64 index)
{
    if (isString(index))
    {
        for (u64 i = 0; i < strings.size(); i++)
        {
            if (index == stringIds[i]) return stringKeys[i];
        }
    }
    else if (isStringArray(index))
    {
        for (u64 i = 0; i < stringArrays.size(); i++)
        {
            if (index == stringArrayIds[i]) return stringArrayKeys[i];
        }
    }
    else if (isBool(index))
    {
        for (u64 i = 0; i < bools.size(); i++)
        {
            if (index == boolIds[i]) return boolKeys[i];
        }
    }
    else if (isBoolArray(index))
    {
        for (u64 i = 0; i < boolArrays.size(); i++)
        {
            if (index == boolArrayIds[i]) return boolArrayKeys[i];
        }
    }
    else if (isChar(index))
    {
        for (u64 i = 0; i < chars.size(); i++)
        {
            if (index == charIds[i]) return charKeys[i];
        }
    }
    else if (isCharArray(index))
    {
        for (u64 i = 0; i < charArrays.size(); i++)
        {
            if (index == charArrayIds[i]) return charArrayKeys[i];
        }
    }
    else if (isS8(index))
    {
        for (u64 i = 0; i < s8s.size(); i++)
        {
            if (index == s8Ids[i]) return s8Keys[i];
        }
    }
    else if (isS8Array(index))
    {
        for (u64 i = 0; i < s8Arrays.size(); i++)
        {
            if (index == s8ArrayIds[i]) return s8ArrayKeys[i];
        }
    }
    else if (isU8(index))
    {
        for (u64 i = 0; i < u8s.size(); i++)
        {
            if (index == u8Ids[i]) return u8Keys[i];
        }
    }
    else if (isU8Array(index))
    {
        for (u64 i = 0; i < u8Arrays.size(); i++)
        {
            if (index == u8ArrayIds[i]) return u8ArrayKeys[i];
        }
    }
    else if (isS16(index))
    {
        for (u64 i = 0; i < s16s.size(); i++)
        {
            if (index == s16Ids[i]) return s16Keys[i];
        }
    }
    else if (isS16Array(index))
    {
        for (u64 i = 0; i < s16Arrays.size(); i++)
        {
            if (index == s16ArrayIds[i]) return s16ArrayKeys[i];
        }
    }
    else if (isU16(index))
    {
        for (u64 i = 0; i < u16s.size(); i++)
        {
            if (index == u16Ids[i]) return u16Keys[i];
        }
    }
    else if (isU16Array(index))
    {
        for (u64 i = 0; i < u16Arrays.size(); i++)
        {
            if (index == u16ArrayIds[i]) return u16ArrayKeys[i];
        }
    }
    else if (isS32(index))
    {
        for (u64 i = 0; i < s32s.size(); i++)
        {
            if (index == s32Ids[i]) return s32Keys[i];
        }
    }
    else if (isS32Array(index))
    {
        for (u64 i = 0; i < s32Arrays.size(); i++)
        {
            if (index == s32ArrayIds[i]) return s32ArrayKeys[i];
        }
    }
    else if (isU32(index))
    {
        for (u64 i = 0; i < u32s.size(); i++)
        {
            if (index == u32Ids[i]) return u32Keys[i];
        }
    }
    else if (isU32Array(index))
    {
        for (u64 i = 0; i < u32Arrays.size(); i++)
        {
            if (index == u32ArrayIds[i]) return u32ArrayKeys[i];
        }
    }
    else if (isS64(index))
    {
        for (u64 i = 0; i < s64s.size(); i++)
        {
            if (index == s64Ids[i]) return s64Keys[i];
        }
    }
    else if (isS64Array(index))
    {
        for (u64 i = 0; i < s64Arrays.size(); i++)
        {
            if (index == s64ArrayIds[i]) return s64ArrayKeys[i];
        }
    }
    else if (isU64(index))
    {
        for (u64 i = 0; i < u64s.size(); i++)
        {
            if (index == u64Ids[i]) return u64Keys[i];
        }
    }
    else if (isU64Array(index))
    {
        for (u64 i = 0; i < u64Arrays.size(); i++)
        {
            if (index == u64ArrayIds[i]) return u64ArrayKeys[i];
        }
    }
    else if (isF32(index))
    {
        for (u64 i = 0; i < f32s.size(); i++)
        {
            if (index == f32Ids[i]) return f32Keys[i];
        }
    }
    else if (isF32Array(index))
    {
        for (u64 i = 0; i < f32Arrays.size(); i++)
        {
            if (index == f32ArrayIds[i]) return f32ArrayKeys[i];
        }
    }
    else if (isF64(index))
    {
        for (u64 i = 0; i < f64s.size(); i++)
        {
            if (index == f64Ids[i]) return f64Keys[i];
        }
    }
    else if (isF64Array(index))
    {
        for (u64 i = 0; i < f64Arrays.size(); i++)
        {
            if (index == f64ArrayIds[i]) return f64ArrayKeys[i];
        }
    }
    throw (std::out_of_range("Index doesn't exist"));
}

u64 DynamicStructure::keyToIndex(const std::string& key)
{
    if (isString(key))
    {
        for (u64 i = 0; i < strings.size(); i++)
        {
            if (key == stringKeys[i]) return stringIds[i];
        }
    }
    else if (isStringArray(key))
    {
        for (u64 i = 0; i < stringArrays.size(); i++)
        {
            if (key == stringArrayKeys[i]) return stringArrayIds[i];
        }
    }
    else if (isBool(key))
    {
        for (u64 i = 0; i < bools.size(); i++)
        {
            if (key == boolKeys[i]) return boolIds[i];
        }
    }
    else if (isBoolArray(key))
    {
        for (u64 i = 0; i < boolArrays.size(); i++)
        {
            if (key == boolArrayKeys[i]) return boolArrayIds[i];
        }
    }
    else if (isChar(key))
    {
        for (u64 i = 0; i < chars.size(); i++)
        {
            if (key == charKeys[i]) return charIds[i];
        }
    }
    else if (isCharArray(key))
    {
        for (u64 i = 0; i < charArrays.size(); i++)
        {
            if (key == charArrayKeys[i]) return charArrayIds[i];
        }
    }
    else if (isS8(key))
    {
        for (u64 i = 0; i < s8s.size(); i++)
        {
            if (key == s8Keys[i]) return s8Ids[i];
        }
    }
    else if (isS8Array(key))
    {
        for (u64 i = 0; i < s8Arrays.size(); i++)
        {
            if (key == s8ArrayKeys[i]) return s8ArrayIds[i];
        }
    }
    else if (isU8(key))
    {
        for (u64 i = 0; i < u8s.size(); i++)
        {
            if (key == u8Keys[i]) return u8Ids[i];
        }
    }
    else if (isU8Array(key))
    {
        for (u64 i = 0; i < u8Arrays.size(); i++)
        {
            if (key == u8ArrayKeys[i]) return u8ArrayIds[i];
        }
    }
    else if (isS16(key))
    {
        for (u64 i = 0; i < s16s.size(); i++)
        {
            if (key == s16Keys[i]) return s16Ids[i];
        }
    }
    else if (isS16Array(key))
    {
        for (u64 i = 0; i < s16Arrays.size(); i++)
        {
            if (key == s16ArrayKeys[i]) return s16ArrayIds[i];
        }
    }
    else if (isU16(key))
    {
        for (u64 i = 0; i < u16s.size(); i++)
        {
            if (key == u16Keys[i]) return u16Ids[i];
        }
    }
    else if (isU16Array(key))
    {
        for (u64 i = 0; i < u16Arrays.size(); i++)
        {
            if (key == u16ArrayKeys[i]) return u16ArrayIds[i];
        }
    }
    else if (isS32(key))
    {
        for (u64 i = 0; i < s32s.size(); i++)
        {
            if (key == s32Keys[i]) return s32Ids[i];
        }
    }
    else if (isS32Array(key))
    {
        for (u64 i = 0; i < s32Arrays.size(); i++)
        {
            if (key == s32ArrayKeys[i]) return s32ArrayIds[i];
        }
    }
    else if (isU32(key))
    {
        for (u64 i = 0; i < u32s.size(); i++)
        {
            if (key == u32Keys[i]) return u32Ids[i];
        }
    }
    else if (isU32Array(key))
    {
        for (u64 i = 0; i < u32Arrays.size(); i++)
        {
            if (key == u32ArrayKeys[i]) return u32ArrayIds[i];
        }
    }
    else if (isS64(key))
    {
        for (u64 i = 0; i < s64s.size(); i++)
        {
            if (key == s64Keys[i]) return s64Ids[i];
        }
    }
    else if (isS64Array(key))
    {
        for (u64 i = 0; i < s64Arrays.size(); i++)
        {
            if (key == s64ArrayKeys[i]) return s64ArrayIds[i];
        }
    }
    else if (isU64(key))
    {
        for (u64 i = 0; i < u64s.size(); i++)
        {
            if (key == u64Keys[i]) return u64Ids[i];
        }
    }
    else if (isU64Array(key))
    {
        for (u64 i = 0; i < u64Arrays.size(); i++)
        {
            if (key == u64ArrayKeys[i]) return u64ArrayIds[i];
        }
    }
    else if (isF32(key))
    {
        for (u64 i = 0; i < f32s.size(); i++)
        {
            if (key == f32Keys[i]) return f32Ids[i];
        }
    }
    else if (isF32Array(key))
    {
        for (u64 i = 0; i < f32Arrays.size(); i++)
        {
            if (key == f32ArrayKeys[i]) return f32ArrayIds[i];
        }
    }
    else if (isF64(key))
    {
        for (u64 i = 0; i < f64s.size(); i++)
        {
            if (key == f64Keys[i]) return f64Ids[i];
        }
    }
    else if (isF64Array(key))
    {
        for (u64 i = 0; i < f64Arrays.size(); i++)
        {
            if (key == f64ArrayKeys[i]) return f64ArrayIds[i];
        }
    }
    throw (std::out_of_range("Key doesn't exist"));
}

void DynamicStructure::swap(u64 i1, u64 i2)
{
    if (i1 >= getKeyCount() || i2 >= getKeyCount()) return;
    std::string type;
    u64 index = std::numeric_limits<u64>::max();
    for (u64 i = 0; i < stringIds.size(); i++)
    {
        if (stringIds[i] == i1) stringIds[i] = i2;
        index = i;
        type = "string";
    }
    for (u64 i = 0; i < stringArrayIds.size(); i++)
    {
        if (stringArrayIds[i] == i1) stringArrayIds[i] = i2;
        index = i;
        type = "stringArray";
    }
    for (u64 i = 0; i < boolIds.size(); i++)
    {
        if (boolIds[i] == i1) boolIds[i] = i2;
        index = i;
        type = "bool";
    }
    for (u64 i = 0; i < boolArrayIds.size(); i++)
    {
        if (boolArrayIds[i] == i1) boolArrayIds[i] = i2;
        index = i;
        type = "boolArray";
    }
    for (u64 i = 0; i < charIds.size(); i++)
    {
        if (charIds[i] == i1) charIds[i] = i2;
        index = i;
        type = "char";
    }
    for (u64 i = 0; i < charArrayIds.size(); i++)
    {
        if (charArrayIds[i] == i1) charArrayIds[i] = i2;
        index = i;
        type = "charArray";
    }
    for (u64 i = 0; i < s8Ids.size(); i++)
    {
        if (s8Ids[i] == i1) s8Ids[i] = i2;
        index = i;
        type = "s8";
    }
    for (u64 i = 0; i < s8ArrayIds.size(); i++)
    {
        if (s8ArrayIds[i] == i1) s8ArrayIds[i] = i2;
        index = i;
        type = "s8Array";
    }
    for (u64 i = 0; i < u8Ids.size(); i++)
    {
        if (u8Ids[i] == i1) u8Ids[i] = i2;
        index = i;
        type = "u8";
    }
    for (u64 i = 0; i < u8ArrayIds.size(); i++)
    {
        if (u8ArrayIds[i] == i1) u8ArrayIds[i] = i2;
        index = i;
        type = "u8Array";
    }
    for (u64 i = 0; i < s16Ids.size(); i++)
    {
        if (s16Ids[i] == i1) s16Ids[i] = i2;
        index = i;
        type = "s16";
    }
    for (u64 i = 0; i < s16ArrayIds.size(); i++)
    {
        if (s16ArrayIds[i] == i1) s16ArrayIds[i] = i2;
        index = i;
        type = "s16Array";
    }
    for (u64 i = 0; i < u16Ids.size(); i++)
    {
        if (u16Ids[i] == i1) u16Ids[i] = i2;
        index = i;
        type = "u16";
    }
    for (u64 i = 0; i < u16ArrayIds.size(); i++)
    {
        if (u16ArrayIds[i] == i1) u16ArrayIds[i] = i2;
        index = i;
        type = "u16Array";
    }
    for (u64 i = 0; i < s32Ids.size(); i++)
    {
        if (s32Ids[i] == i1) s32Ids[i] = i2;
        index = i;
        type = "s32";
    }
    for (u64 i = 0; i < s32ArrayIds.size(); i++)
    {
        if (s32ArrayIds[i] == i1) s32ArrayIds[i] = i2;
        index = i;
        type = "s32Array";
    }
    for (u64 i = 0; i < u32Ids.size(); i++)
    {
        if (u32Ids[i] == i1) u32Ids[i] = i2;
        index = i;
        type = "u32";
    }
    for (u64 i = 0; i < u32ArrayIds.size(); i++)
    {
        if (u32ArrayIds[i] == i1) u32ArrayIds[i] = i2;
        index = i;
        type = "u32Array";
    }
    for (u64 i = 0; i < s64Ids.size(); i++)
    {
        if (s64Ids[i] == i1) s64Ids[i] = i2;
        index = i;
        type = "s64";
    }
    for (u64 i = 0; i < s64ArrayIds.size(); i++)
    {
        if (s64ArrayIds[i] == i1) s64ArrayIds[i] = i2;
        index = i;
        type = "s64Array";
    }
    for (u64 i = 0; i < u64Ids.size(); i++)
    {
        if (u64Ids[i] == i1) u64Ids[i] = i2;
        index = i;
        type = "u64";
    }
    for (u64 i = 0; i < u64ArrayIds.size(); i++)
    {
        if (u64ArrayIds[i] == i1) u64ArrayIds[i] = i2;
        index = i;
        type = "u64Array";
    }
    for (u64 i = 0; i < f32Ids.size(); i++)
    {
        if (f32Ids[i] == i1) f32Ids[i] = i2;
        index = i;
        type = "f32";
    }
    for (u64 i = 0; i < f32ArrayIds.size(); i++)
    {
        if (f32ArrayIds[i] == i1) f32ArrayIds[i] = i2;
        index = i;
        type = "f32Array";
    }
    for (u64 i = 0; i < f64Ids.size(); i++)
    {
        if (f64Ids[i] == i1) f64Ids[i] = i2;
        index = i;
        type = "f64";
    }
    for (u64 i = 0; i < f64ArrayIds.size(); i++)
    {
        if (f64ArrayIds[i] == i1) f64ArrayIds[i] = i2;
        index = i;
        type = "f64Array";
    }
    for (u64 i = 0; i < stringIds.size(); i++)
    {
        if (stringIds[i] == i2 &&
            !(i == index && type == "string"))
        {
            stringIds[i] = i1;
        }
    }
    for (u64 i = 0; i < stringArrayIds.size(); i++)
    {
        if (stringArrayIds[i] == i2 &&
            !(i == index && type == "stringArray"))
        {
            stringArrayIds[i] = i1;
        }
    }
    for (u64 i = 0; i < boolIds.size(); i++)
    {
        if (boolIds[i] == i2 &&
            !(i == index && type == "bool"))
        {
            boolIds[i] = i1;
        }
    }
    for (u64 i = 0; i < boolArrayIds.size(); i++)
    {
        if (boolArrayIds[i] == i2 &&
            !(i == index && type == "boolArray"))
        {
            boolArrayIds[i] = i1;
        }
    }
    for (u64 i = 0; i < charIds.size(); i++)
    {
        if (charIds[i] == i2 &&
            !(i == index && type == "char"))
        {
            charIds[i] = i1;
        }
    }
    for (u64 i = 0; i < charArrayIds.size(); i++)
    {
        if (charArrayIds[i] == i2 &&
            !(i == index && type == "charArray"))
        {
            charArrayIds[i] = i1;
        }
    }
    for (u64 i = 0; i < s8Ids.size(); i++)
    {
        if (s8Ids[i] == i2 &&
            !(i == index && type == "s8"))
        {
            s8Ids[i] = i1;
        }
    }
    for (u64 i = 0; i < s8ArrayIds.size(); i++)
    {
        if (s8ArrayIds[i] == i2 &&
            !(i == index && type == "s8Array"))
        {
            s8ArrayIds[i] = i1;
        }
    }
    for (u64 i = 0; i < u8Ids.size(); i++)
    {
        if (u8Ids[i] == i2 &&
            !(i == index && type == "u8"))
        {
            u8Ids[i] = i1;
        }
    }
    for (u64 i = 0; i < u8ArrayIds.size(); i++)
    {
        if (u8ArrayIds[i] == i2 &&
            !(i == index && type == "u8Array"))
        {
            u8ArrayIds[i] = i1;
        }
    }
    for (u64 i = 0; i < s16Ids.size(); i++)
    {
        if (s16Ids[i] == i2 &&
            !(i == index && type == "s16"))
        {
            s16Ids[i] = i1;
        }
    }
    for (u64 i = 0; i < s16ArrayIds.size(); i++)
    {
        if (s16ArrayIds[i] == i2 &&
            !(i == index && type == "s16Array"))
        {
            s16ArrayIds[i] = i1;
        }
    }
    for (u64 i = 0; i < u16Ids.size(); i++)
    {
        if (u16Ids[i] == i2 &&
            !(i == index && type == "u16"))
        {
            u16Ids[i] = i1;
        }
    }
    for (u64 i = 0; i < u16ArrayIds.size(); i++)
    {
        if (u16ArrayIds[i] == i2 &&
            !(i == index && type == "u16Array"))
        {
            u16ArrayIds[i] = i1;
        }
    }
    for (u64 i = 0; i < s32Ids.size(); i++)
    {
        if (s32Ids[i] == i2 &&
            !(i == index && type == "s32"))
        {
            s32Ids[i] = i1;
        }
    }
    for (u64 i = 0; i < s32ArrayIds.size(); i++)
    {
        if (s32ArrayIds[i] == i2 &&
            !(i == index && type == "s32Array"))
        {
            s32ArrayIds[i] = i1;
        }
    }
    for (u64 i = 0; i < u32Ids.size(); i++)
    {
        if (u32Ids[i] == i2 &&
            !(i == index && type == "u32"))
        {
            u32Ids[i] = i1;
        }
    }
    for (u64 i = 0; i < u32ArrayIds.size(); i++)
    {
        if (u32ArrayIds[i] == i2 &&
            !(i == index && type == "u32Array"))
        {
            u32ArrayIds[i] = i1;
        }
    }
    for (u64 i = 0; i < s64Ids.size(); i++)
    {
        if (s64Ids[i] == i2 &&
            !(i == index && type == "s64"))
        {
            s64Ids[i] = i1;
        }
    }
    for (u64 i = 0; i < s64ArrayIds.size(); i++)
    {
        if (s64ArrayIds[i] == i2 &&
            !(i == index && type == "s64Array"))
        {
            s64ArrayIds[i] = i1;
        }
    }
    for (u64 i = 0; i < u64Ids.size(); i++)
    {
        if (u64Ids[i] == i2 &&
            !(i == index && type == "u64"))
        {
            u64Ids[i] = i1;
        }
    }
    for (u64 i = 0; i < u64ArrayIds.size(); i++)
    {
        if (u64ArrayIds[i] == i2 &&
            !(i == index && type == "u64Array"))
        {
            u64ArrayIds[i] = i1;
        }
    }
    for (u64 i = 0; i < f32Ids.size(); i++)
    {
        if (f32Ids[i] == i2 &&
            !(i == index && type == "f32"))
        {
            f32Ids[i] = i1;
        }
    }
    for (u64 i = 0; i < f32ArrayIds.size(); i++)
    {
        if (f32ArrayIds[i] == i2 &&
            !(i == index && type == "f32Array"))
        {
            f32ArrayIds[i] = i1;
        }
    }
    for (u64 i = 0; i < f64Ids.size(); i++)
    {
        if (f64Ids[i] == i2 &&
            !(i == index && type == "f64"))
        {
            f64Ids[i] = i1;
        }
    }
    for (u64 i = 0; i < f64ArrayIds.size(); i++)
    {
        if (f64ArrayIds[i] == i2 &&
            !(i == index && type == "f64Array"))
        {
            f64ArrayIds[i] = i1;
        }
    }
}

template<>
void DynamicStructure::insert(const std::string& key, std::string elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    stringKeys.push_back(key);
    strings.push_back(elm);
    stringIds.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, std::vector<std::string> elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    stringArrayKeys.push_back(key);
    stringArrays.push_back(elm);
    stringArrayIds.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, bool elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    boolKeys.push_back(key);
    bools.push_back(elm);
    boolIds.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, std::vector<bool> elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    boolArrayKeys.push_back(key);
    boolArrays.push_back(elm);
    boolArrayIds.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, char elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    charKeys.push_back(key);
    chars.push_back(elm);
    charIds.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, std::vector<char> elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    charArrayKeys.push_back(key);
    charArrays.push_back(elm);
    charArrayIds.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, s8 elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    s8Keys.push_back(key);
    s8s.push_back(elm);
    s8Ids.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, std::vector<s8> elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    s8ArrayKeys.push_back(key);
    s8Arrays.push_back(elm);
    s8ArrayIds.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, u8 elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    u8Keys.push_back(key);
    u8s.push_back(elm);
    u8Ids.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, std::vector<u8> elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    u8ArrayKeys.push_back(key);
    u8Arrays.push_back(elm);
    u8ArrayIds.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, s16 elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    s16Keys.push_back(key);
    s16s.push_back(elm);
    s16Ids.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, std::vector<s16> elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    s16ArrayKeys.push_back(key);
    s16Arrays.push_back(elm);
    s16ArrayIds.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, u16 elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    u16Keys.push_back(key);
    u16s.push_back(elm);
    u16Ids.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, std::vector<u16> elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    u16ArrayKeys.push_back(key);
    u16Arrays.push_back(elm);
    u16ArrayIds.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, s32 elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    s32Keys.push_back(key);
    s32s.push_back(elm);
    s32Ids.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, std::vector<s32> elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    s32ArrayKeys.push_back(key);
    s32Arrays.push_back(elm);
    s32ArrayIds.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, u32 elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    u32Keys.push_back(key);
    u32s.push_back(elm);
    u32Ids.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, std::vector<u32> elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    u32ArrayKeys.push_back(key);
    u32Arrays.push_back(elm);
    u32ArrayIds.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, s64 elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    s64Keys.push_back(key);
    s64s.push_back(elm);
    s64Ids.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, std::vector<s64> elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    s64ArrayKeys.push_back(key);
    s64Arrays.push_back(elm);
    s64ArrayIds.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, u64 elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    u64Keys.push_back(key);
    u64s.push_back(elm);
    u64Ids.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, std::vector<u64> elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    u64ArrayKeys.push_back(key);
    u64Arrays.push_back(elm);
    u64ArrayIds.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, f32 elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    f32Keys.push_back(key);
    f32s.push_back(elm);
    f32Ids.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, std::vector<f32> elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    f32ArrayKeys.push_back(key);
    f32Arrays.push_back(elm);
    f32ArrayIds.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, f64 elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    f64Keys.push_back(key);
    f64s.push_back(elm);
    f64Ids.push_back(index);
}

template<>
void DynamicStructure::insert(const std::string& key, std::vector<f64> elm, u64 index)
{
    if (hasKey(key)) return;
    if (index >= getKeyCount())
    {
        index = getKeyCount();
    }
    else
    {
        for (auto& u: stringIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: stringArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: boolArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: charArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u8ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u16ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: s64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: u64ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f32ArrayIds)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64Ids)
        {
            if (u >= index) u++;
        }
        for (auto& u: f64ArrayIds)
        {
            if (u >= index) u++;
        }
    }
    f64ArrayKeys.push_back(key);
    f64Arrays.push_back(elm);
    f64ArrayIds.push_back(index);
}

void DynamicStructure::remove(u64 index)
{
    if (index >= getKeyCount()) return;
    if (isString(index))
    {
        for (u64 i = 0; i < stringIds.size(); i++)
        {
            if (stringIds[i] == index)
            {
                stringIds.erase(stringIds.begin() + i);
                stringKeys.erase(stringKeys.begin() + i);
                strings.erase(strings.begin() + i);
            }
        }
    }
    else if (isStringArray(index))
    {
        for (u64 i = 0; i < stringArrayIds.size(); i++)
        {
            if (stringArrayIds[i] == index)
            {
                stringArrayIds.erase(stringArrayIds.begin() + i);
                stringArrayKeys.erase(stringArrayKeys.begin() + i);
                stringArrays.erase(stringArrays.begin() + i);
            }
        }
    }
    else if (isBool(index))
    {
        for (u64 i = 0; i < boolIds.size(); i++)
        {
            if (boolIds[i] == index)
            {
                boolIds.erase(boolIds.begin() + i);
                boolKeys.erase(boolKeys.begin() + i);
                bools.erase(bools.begin() + i);
            }
        }
    }
    else if (isBoolArray(index))
    {
        for (u64 i = 0; i < boolArrayIds.size(); i++)
        {
            if (boolArrayIds[i] == index)
            {
                boolArrayIds.erase(boolArrayIds.begin() + i);
                boolArrayKeys.erase(boolArrayKeys.begin() + i);
                boolArrays.erase(boolArrays.begin() + i);
            }
        }
    }
    else if (isChar(index))
    {
        for (u64 i = 0; i < charIds.size(); i++)
        {
            if (charIds[i] == index)
            {
                charIds.erase(charIds.begin() + i);
                charKeys.erase(charKeys.begin() + i);
                chars.erase(chars.begin() + i);
            }
        }
    }
    else if (isCharArray(index))
    {
        for (u64 i = 0; i < charArrayIds.size(); i++)
        {
            if (charArrayIds[i] == index)
            {
                charArrayIds.erase(charArrayIds.begin() + i);
                charArrayKeys.erase(charArrayKeys.begin() + i);
                charArrays.erase(charArrays.begin() + i);
            }
        }
    }
    else if (isS8(index))
    {
        for (u64 i = 0; i < s8Ids.size(); i++)
        {
            if (s8Ids[i] == index)
            {
                s8Ids.erase(s8Ids.begin() + i);
                s8Keys.erase(s8Keys.begin() + i);
                s8s.erase(s8s.begin() + i);
            }
        }
    }
    else if (isS8Array(index))
    {
        for (u64 i = 0; i < s8ArrayIds.size(); i++)
        {
            if (s8ArrayIds[i] == index)
            {
                s8ArrayIds.erase(s8ArrayIds.begin() + i);
                s8ArrayKeys.erase(s8ArrayKeys.begin() + i);
                s8Arrays.erase(s8Arrays.begin() + i);
            }
        }
    }
    else if (isU8(index))
    {
        for (u64 i = 0; i < u8Ids.size(); i++)
        {
            if (u8Ids[i] == index)
            {
                u8Ids.erase(u8Ids.begin() + i);
                u8Keys.erase(u8Keys.begin() + i);
                u8s.erase(u8s.begin() + i);
            }
        }
    }
    else if (isU8Array(index))
    {
        for (u64 i = 0; i < u8ArrayIds.size(); i++)
        {
            if (u8ArrayIds[i] == index)
            {
                u8ArrayIds.erase(u8ArrayIds.begin() + i);
                u8ArrayKeys.erase(u8ArrayKeys.begin() + i);
                u8Arrays.erase(u8Arrays.begin() + i);
            }
        }
    }
    else if (isS16(index))
    {
        for (u64 i = 0; i < s16Ids.size(); i++)
        {
            if (s16Ids[i] == index)
            {
                s16Ids.erase(s16Ids.begin() + i);
                s16Keys.erase(s16Keys.begin() + i);
                s16s.erase(s16s.begin() + i);
            }
        }
    }
    else if (isS16Array(index))
    {
        for (u64 i = 0; i < s16ArrayIds.size(); i++)
        {
            if (s16ArrayIds[i] == index)
            {
                s16ArrayIds.erase(s16ArrayIds.begin() + i);
                s16ArrayKeys.erase(s16ArrayKeys.begin() + i);
                s16Arrays.erase(s16Arrays.begin() + i);
            }
        }
    }
    else if (isU16(index))
    {
        for (u64 i = 0; i < u16Ids.size(); i++)
        {
            if (u16Ids[i] == index)
            {
                u16Ids.erase(u16Ids.begin() + i);
                u16Keys.erase(u16Keys.begin() + i);
                u16s.erase(u16s.begin() + i);
            }
        }
    }
    else if (isU16Array(index))
    {
        for (u64 i = 0; i < u16ArrayIds.size(); i++)
        {
            if (u16ArrayIds[i] == index)
            {
                u16ArrayIds.erase(u16ArrayIds.begin() + i);
                u16ArrayKeys.erase(u16ArrayKeys.begin() + i);
                u16Arrays.erase(u16Arrays.begin() + i);
            }
        }
    }
    else if (isS32(index))
    {
        for (u64 i = 0; i < s32Ids.size(); i++)
        {
            if (s32Ids[i] == index)
            {
                s32Ids.erase(s32Ids.begin() + i);
                s32Keys.erase(s32Keys.begin() + i);
                s32s.erase(s32s.begin() + i);
            }
        }
    }
    else if (isS32Array(index))
    {
        for (u64 i = 0; i < s32ArrayIds.size(); i++)
        {
            if (s32ArrayIds[i] == index)
            {
                s32ArrayIds.erase(s32ArrayIds.begin() + i);
                s32ArrayKeys.erase(s32ArrayKeys.begin() + i);
                s32Arrays.erase(s32Arrays.begin() + i);
            }
        }
    }
    else if (isU32(index))
    {
        for (u64 i = 0; i < u32Ids.size(); i++)
        {
            if (u32Ids[i] == index)
            {
                u32Ids.erase(u32Ids.begin() + i);
                u32Keys.erase(u32Keys.begin() + i);
                u32s.erase(u32s.begin() + i);
            }
        }
    }
    else if (isU32Array(index))
    {
        for (u64 i = 0; i < u32ArrayIds.size(); i++)
        {
            if (u32ArrayIds[i] == index)
            {
                u32ArrayIds.erase(u32ArrayIds.begin() + i);
                u32ArrayKeys.erase(u32ArrayKeys.begin() + i);
                u32Arrays.erase(u32Arrays.begin() + i);
            }
        }
    }
    else if (isS64(index))
    {
        for (u64 i = 0; i < s64Ids.size(); i++)
        {
            if (s64Ids[i] == index)
            {
                s64Ids.erase(s64Ids.begin() + i);
                s64Keys.erase(s64Keys.begin() + i);
                s64s.erase(s64s.begin() + i);
            }
        }
    }
    else if (isS64Array(index))
    {
        for (u64 i = 0; i < s64ArrayIds.size(); i++)
        {
            if (s64ArrayIds[i] == index)
            {
                s64ArrayIds.erase(s64ArrayIds.begin() + i);
                s64ArrayKeys.erase(s64ArrayKeys.begin() + i);
                s64Arrays.erase(s64Arrays.begin() + i);
            }
        }
    }
    else if (isU64(index))
    {
        for (u64 i = 0; i < u64Ids.size(); i++)
        {
            if (u64Ids[i] == index)
            {
                u64Ids.erase(u64Ids.begin() + i);
                u64Keys.erase(u64Keys.begin() + i);
                u64s.erase(u64s.begin() + i);
            }
        }
    }
    else if (isU64Array(index))
    {
        for (u64 i = 0; i < u64ArrayIds.size(); i++)
        {
            if (u64ArrayIds[i] == index)
            {
                u64ArrayIds.erase(u64ArrayIds.begin() + i);
                u64ArrayKeys.erase(u64ArrayKeys.begin() + i);
                u64Arrays.erase(u64Arrays.begin() + i);
            }
        }
    }
    else if (isF32(index))
    {
        for (u64 i = 0; i < f32Ids.size(); i++)
        {
            if (f32Ids[i] == index)
            {
                f32Ids.erase(f32Ids.begin() + i);
                f32Keys.erase(f32Keys.begin() + i);
                f32s.erase(f32s.begin() + i);
            }
        }
    }
    else if (isF32Array(index))
    {
        for (u64 i = 0; i < f32ArrayIds.size(); i++)
        {
            if (f32ArrayIds[i] == index)
            {
                f32ArrayIds.erase(f32ArrayIds.begin() + i);
                f32ArrayKeys.erase(f32ArrayKeys.begin() + i);
                f32Arrays.erase(f32Arrays.begin() + i);
            }
        }
    }
    for (auto& u: stringIds)
    {
        if (u >= index) u--;
    }
    for (auto& u: stringArrayIds)
    {
        if (u >= index) u--;
    }
    for (auto& u: boolIds)
    {
        if (u >= index) u--;
    }
    for (auto& u: boolArrayIds)
    {
        if (u >= index) u--;
    }
    for (auto& u: charIds)
    {
        if (u >= index) u--;
    }
    for (auto& u: charArrayIds)
    {
        if (u >= index) u--;
    }
    for (auto& u: s8Ids)
    {
        if (u >= index) u--;
    }
    for (auto& u: s8ArrayIds)
    {
        if (u >= index) u--;
    }
    for (auto& u: u8Ids)
    {
        if (u >= index) u--;
    }
    for (auto& u: u8ArrayIds)
    {
        if (u >= index) u--;
    }
    for (auto& u: s16Ids)
    {
        if (u >= index) u--;
    }
    for (auto& u: s16ArrayIds)
    {
        if (u >= index) u--;
    }
    for (auto& u: u16Ids)
    {
        if (u >= index) u--;
    }
    for (auto& u: u16ArrayIds)
    {
        if (u >= index) u--;
    }
    for (auto& u: s32Ids)
    {
        if (u >= index) u--;
    }
    for (auto& u: s32ArrayIds)
    {
        if (u >= index) u--;
    }
    for (auto& u: u32Ids)
    {
        if (u >= index) u--;
    }
    for (auto& u: u32ArrayIds)
    {
        if (u >= index) u--;
    }
    for (auto& u: s64Ids)
    {
        if (u >= index) u--;
    }
    for (auto& u: s64ArrayIds)
    {
        if (u >= index) u--;
    }
    for (auto& u: u64Ids)
    {
        if (u >= index) u--;
    }
    for (auto& u: u64ArrayIds)
    {
        if (u >= index) u--;
    }
    for (auto& u: f32Ids)
    {
        if (u >= index) u--;
    }
    for (auto& u: f32ArrayIds)
    {
        if (u >= index) u--;
    }
    for (auto& u: f64Ids)
    {
        if (u >= index) u--;
    }
    for (auto& u: f64ArrayIds)
    {
        if (u >= index) u--;
    }
}

void DynamicStructure::remove(const std::string& key)
{
    if (!hasKey(key)) return;
    u64 index = keyToIndex(key);
    remove(index);
}

template<>
void DynamicStructure::set(std::string elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isString(index))
    {
        for (u64 i = 0; i < strings.size(); i++)
        {
            if (stringIds[i] == index) strings[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<std::string>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(std::vector<std::string> elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isStringArray(index))
    {
        for (u64 i = 0; i < stringArrays.size(); i++)
        {
            if (stringArrayIds[i] == index) stringArrays[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<std::vector<std::string>>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(bool elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isBool(index))
    {
        for (u64 i = 0; i < bools.size(); i++)
        {
            if (boolIds[i] == index) bools[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<bool>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(std::vector<bool> elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isBoolArray(index))
    {
        for (u64 i = 0; i < boolArrays.size(); i++)
        {
            if (boolArrayIds[i] == index) boolArrays[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<std::vector<bool>>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(char elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isChar(index))
    {
        for (u64 i = 0; i < chars.size(); i++)
        {
            if (charIds[i] == index) chars[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<char>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(std::vector<char> elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isCharArray(index))
    {
        for (u64 i = 0; i < charArrays.size(); i++)
        {
            if (charArrayIds[i] == index) charArrays[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<std::vector<char>>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(s8 elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isS8(index))
    {
        for (u64 i = 0; i < s8s.size(); i++)
        {
            if (s8Ids[i] == index) s8s[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<s8>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(std::vector<s8> elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isS8Array(index))
    {
        for (u64 i = 0; i < s8Arrays.size(); i++)
        {
            if (s8ArrayIds[i] == index) s8Arrays[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<std::vector<s8>>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(u8 elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isU8(index))
    {
        for (u64 i = 0; i < u8s.size(); i++)
        {
            if (u8Ids[i] == index) u8s[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<u8>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(std::vector<u8> elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isU8Array(index))
    {
        for (u64 i = 0; i < u8Arrays.size(); i++)
        {
            if (u8ArrayIds[i] == index) u8Arrays[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<std::vector<u8>>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(s16 elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isS16(index))
    {
        for (u64 i = 0; i < s16s.size(); i++)
        {
            if (s16Ids[i] == index) s16s[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<s16>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(std::vector<s16> elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isS16Array(index))
    {
        for (u64 i = 0; i < s16Arrays.size(); i++)
        {
            if (s16ArrayIds[i] == index) s16Arrays[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<std::vector<s16>>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(u16 elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isU16(index))
    {
        for (u64 i = 0; i < u16s.size(); i++)
        {
            if (u16Ids[i] == index) u16s[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<u16>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(std::vector<u16> elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isU16Array(index))
    {
        for (u64 i = 0; i < u16Arrays.size(); i++)
        {
            if (u16ArrayIds[i] == index) u16Arrays[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<std::vector<u16>>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(s32 elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isS32(index))
    {
        for (u64 i = 0; i < s32s.size(); i++)
        {
            if (s32Ids[i] == index) s32s[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<s32>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(std::vector<s32> elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isS32Array(index))
    {
        for (u64 i = 0; i < s32Arrays.size(); i++)
        {
            if (s32ArrayIds[i] == index) s32Arrays[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<std::vector<s32>>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(u32 elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isU32(index))
    {
        for (u64 i = 0; i < u32s.size(); i++)
        {
            if (u32Ids[i] == index) u32s[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<u32>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(std::vector<u32> elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isU32Array(index))
    {
        for (u64 i = 0; i < u32Arrays.size(); i++)
        {
            if (u32ArrayIds[i] == index) u32Arrays[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<std::vector<u32>>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(s64 elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isS64(index))
    {
        for (u64 i = 0; i < s64s.size(); i++)
        {
            if (s64Ids[i] == index) s64s[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<s64>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(std::vector<s64> elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isS64Array(index))
    {
        for (u64 i = 0; i < s64Arrays.size(); i++)
        {
            if (s64ArrayIds[i] == index) s64Arrays[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<std::vector<s64>>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(u64 elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isU64(index))
    {
        for (u64 i = 0; i < u64s.size(); i++)
        {
            if (u64Ids[i] == index) u64s[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<u64>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(std::vector<u64> elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isU64Array(index))
    {
        for (u64 i = 0; i < u64Arrays.size(); i++)
        {
            if (u64ArrayIds[i] == index) u64Arrays[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<std::vector<u64>>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(f32 elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isF32(index))
    {
        for (u64 i = 0; i < f32s.size(); i++)
        {
            if (f32Ids[i] == index) f32s[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<f32>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(std::vector<f32> elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isF32Array(index))
    {
        for (u64 i = 0; i < f32Arrays.size(); i++)
        {
            if (f32ArrayIds[i] == index) f32Arrays[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<std::vector<f32>>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(f64 elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isF64(index))
    {
        for (u64 i = 0; i < f64s.size(); i++)
        {
            if (f64Ids[i] == index) f64s[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<f64>(key, elm, index);
    }
}

template<>
void DynamicStructure::set(std::vector<f64> elm, u64 index)
{
    if (index >= getKeyCount()) return;
    if (isF64Array(index))
    {
        for (u64 i = 0; i < f64Arrays.size(); i++)
        {
            if (f64ArrayIds[i] == index) f64Arrays[i] = elm;
        }
    }
    else
    {
        std::string key = indexToKey(index);
        remove(index);
        insert<std::vector<f64>>(key, elm, index);
    }
}

template<class T>
void DynamicStructure::set(T elm, const std::string& key)
{
    if (!hasKey(key)) return;
    u64 index = keyToIndex(key);
    set<T>(elm, index);
}

std::vector<u8> DynamicStructure::varToU8(u64 index)
{
    if (index >= getKeyCount())
        throw (std::out_of_range("Out of range!"));
    std::vector<u8> result;
    if (isString(index))
    {
        for (u64 i = 0; i < strings.size(); i++)
        {
            if (stringIds[i] == index)
            {
                for (u64 j = 0; j < strings[i].size(); j++)
                {
                    result.push_back(static_cast<u8>(strings[i][j]));
                }
                result.push_back(0);
            }
        }
    }
    if (isStringArray(index))
    {
        for (u64 i = 0; i < stringArrays.size(); i++)
        {
            if (stringArrayIds[i] == index)
            {
                for (u64 j = 0; j < stringArrays[i].size(); j++)
                {
                    for (u64 k = 0; k < stringArrays[i][j].size(); k++)
                    {
                        result.push_back(static_cast<u8>(stringArrays[i][j][k]));
                    }
                    result.push_back(0);
                }
            }
        }
    }
    if (isBool(index))
    {
        for (u64 i = 0; i < bools.size(); i++)
        {
            if (boolIds[i] == index)
            {
                result.push_back(static_cast<u8>(bools[i]));
            }
        }
    }
    if (isBoolArray(index))
    {
        for (u64 i = 0; i < boolArrays.size(); i++)
        {
            if (boolArrayIds[i] == index)
            {
                for (u64 j = 0; j < boolArrays[i].size(); j++)
                {
                    result.push_back(static_cast<u8>(boolArrays[i][j]));
                }
            }
        }
    }
    if (isChar(index))
    {
        for (u64 i = 0; i < chars.size(); i++)
        {
            if (charIds[i] == index)
            {
                result.push_back(static_cast<u8>(chars[i]));
            }
        }
    }
    if (isCharArray(index))
    {
        for (u64 i = 0; i < charArrays.size(); i++)
        {
            if (charArrayIds[i] == index)
            {
                for (u64 j = 0; j < charArrays[i].size(); j++)
                {
                    result.push_back(static_cast<u8>(charArrays[i][j]));
                }
            }
        }
    }
    if (isS8(index))
    {
        for (u64 i = 0; i < s8s.size(); i++)
        {
            if (s8Ids[i] == index)
            {
                result.push_back(*(reinterpret_cast<u8*>(&(s8s[i]))));
            }
        }
    }
    if (isS8Array(index))
    {
        for (u64 i = 0; i < s8Arrays.size(); i++)
        {
            if (s8ArrayIds[i] == index)
            {
                for (u64 j = 0; j < s8Arrays[i].size(); j++)
                {
                    result.push_back(*(reinterpret_cast<u8*>(&(s8Arrays[i][j]))));
                }
            }
        }
    }
    if (isU8(index))
    {
        for (u64 i = 0; i < u8s.size(); i++)
        {
            if (u8Ids[i] == index)
            {
                result.push_back(*(reinterpret_cast<u8*>(&(u8s[i]))));
            }
        }
    }
    if (isU8Array(index))
    {
        for (u64 i = 0; i < u8Arrays.size(); i++)
        {
            if (u8ArrayIds[i] == index)
            {
                for (u64 j = 0; j < u8Arrays[i].size(); j++)
                {
                    result.push_back(*(reinterpret_cast<u8*>(&(u8Arrays[i][j]))));
                }
            }
        }
    }
    if (isS16(index))
    {
        for (u64 i = 0; i < s16s.size(); i++)
        {
            if (s16Ids[i] == index)
            {
                s16 temp = s16s[i];
                s16 byte = (temp >> ((sizeof(temp) - 1) * 8)) & 0xFF;
                result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                for (s16 j = sizeof(temp) - 2; j >= 0; j--)
                {
                    byte = (temp >> (j * 8)) & 0xFF;
                    result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                }
            }
        }
    }
    if (isS16Array(index))
    {
        for (u64 i = 0; i < s16Arrays.size(); i++)
        {
            if (s16ArrayIds[i] == index)
            {
                for (u64 j = 0; j < s16Arrays[i].size(); j++)
                {
                    s16 temp = s16Arrays[i][j];
                    s16 byte = (temp >> ((sizeof(temp) - 1) * 8)) & 0xFF;
                    result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                    for (s16 k = sizeof(temp) - 2; k >= 0; k--)
                    {
                        byte = (temp >> (k * 8)) & 0xFF;
                        result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                    }
                }
            }
        }
    }
    if (isU16(index))
    {
        for (u64 i = 0; i < u16s.size(); i++)
        {
            if (u16Ids[i] == index)
            {
                u16 temp = u16s[i];
                u16 byte = (temp >> ((sizeof(temp) - 1) * 8)) & 0xFF;
                result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                for (s16 j = sizeof(temp) - 2; j >= 0; j--)
                {
                    byte = (temp >> (j * 8)) & 0xFF;
                    result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                }
            }
        }
    }
    if (isU16Array(index))
    {
        for (u64 i = 0; i < u16Arrays.size(); i++)
        {
            if (u16ArrayIds[i] == index)
            {
                for (u64 j = 0; j < u16Arrays[i].size(); j++)
                {
                    u16 temp = u16Arrays[i][j];
                    u16 byte = (temp >> ((sizeof(temp) - 1) * 8)) & 0xFF;
                    result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                    for (s16 k = sizeof(temp) - 2; k >= 0; k--)
                    {
                        byte = (temp >> (k * 8)) & 0xFF;
                        result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                    }
                }
            }
        }
    }
    if (isS32(index))
    {
        for (u64 i = 0; i < s32s.size(); i++)
        {
            if (s32Ids[i] == index)
            {
                s32 temp = s32s[i];
                s32 byte = (temp >> ((sizeof(temp) - 1) * 8)) & 0xFF;
                result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                for (s16 j = sizeof(temp) - 2; j >= 0; j--)
                {
                    byte = (temp >> (j * 8)) & 0xFF;
                    result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                }
            }
        }
    }
    if (isS32Array(index))
    {
        for (u64 i = 0; i < s32Arrays.size(); i++)
        {
            if (s32ArrayIds[i] == index)
            {
                for (u64 j = 0; j < s32Arrays[i].size(); j++)
                {
                    s32 temp = s32Arrays[i][j];
                    s32 byte = (temp >> ((sizeof(temp) - 1) * 8)) & 0xFF;
                    result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                    for (s16 k = sizeof(temp) - 2; k >= 0; k--)
                    {
                        byte = (temp >> (k * 8)) & 0xFF;
                        result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                    }
                }
            }
        }
    }
    if (isU32(index))
    {
        for (u64 i = 0; i < u32s.size(); i++)
        {
            if (u32Ids[i] == index)
            {
                u32 temp = u32s[i];
                u32 byte = (temp >> ((sizeof(temp) - 1) * 8)) & 0xFF;
                result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                for (s16 j = sizeof(temp) - 2; j >= 0; j--)
                {
                    byte = (temp >> (j * 8)) & 0xFF;
                    result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                }
            }
        }
    }
    if (isU32Array(index))
    {
        for (u64 i = 0; i < u32Arrays.size(); i++)
        {
            if (u32ArrayIds[i] == index)
            {
                for (u64 j = 0; j < u32Arrays[i].size(); j++)
                {
                    u32 temp = u32Arrays[i][j];
                    u32 byte = (temp >> ((sizeof(temp) - 1) * 8)) & 0xFF;
                    result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                    for (s16 k = sizeof(temp) - 2; k >= 0; k--)
                    {
                        byte = (temp >> (k * 8)) & 0xFF;
                        result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                    }
                }
            }
        }
    }
    if (isS64(index))
    {
        for (u64 i = 0; i < s64s.size(); i++)
        {
            if (s64Ids[i] == index)
            {
                s64 temp = s64s[i];
                s64 byte = (temp >> ((sizeof(temp) - 1) * 8)) & 0xFF;
                result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                for (s16 j = sizeof(temp) - 2; j >= 0; j--)
                {
                    byte = (temp >> (j * 8)) & 0xFF;
                    result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                }
            }
        }
    }
    if (isS64Array(index))
    {
        for (u64 i = 0; i < s64Arrays.size(); i++)
        {
            if (s64ArrayIds[i] == index)
            {
                for (u64 j = 0; j < s64Arrays[i].size(); j++)
                {
                    s64 temp = s64Arrays[i][j];
                    s64 byte = (temp >> ((sizeof(temp) - 1) * 8)) & 0xFF;
                    result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                    for (s16 k = sizeof(temp) - 2; k >= 0; k--)
                    {
                        byte = (temp >> (k * 8)) & 0xFF;
                        result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                    }
                }
            }
        }
    }
    if (isU64(index))
    {
        for (u64 i = 0; i < u64s.size(); i++)
        {
            if (u64Ids[i] == index)
            {
                u64 temp = u64s[i];
                u64 byte = (temp >> ((sizeof(temp) - 1) * 8)) & 0xFF;
                result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                for (s16 j = sizeof(temp) - 2; j >= 0; j--)
                {
                    byte = (temp >> (j * 8)) & 0xFF;
                    result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                }
            }
        }
    }
    if (isU64Array(index))
    {
        for (u64 i = 0; i < u64Arrays.size(); i++)
        {
            if (u64ArrayIds[i] == index)
            {
                for (u64 j = 0; j < u64Arrays[i].size(); j++)
                {
                    u64 temp = u64Arrays[i][j];
                    u64 byte = (temp >> ((sizeof(temp) - 1) * 8)) & 0xFF;
                    result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                    for (s16 k = sizeof(temp) - 2; k >= 0; k--)
                    {
                        byte = (temp >> (k * 8)) & 0xFF;
                        result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                    }
                }
            }
        }
    }
    if (isF32(index))
    {
        for (u64 i = 0; i < f32s.size(); i++)
        {
            if (f32Ids[i] == index)
            {
                s32 temp = *(reinterpret_cast<s32*>(&f32s[i]));
                s32 byte = (temp >> ((sizeof(temp) - 1) * 8)) & 0xFF;
                result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                for (s16 j = sizeof(temp) - 2; j >= 0; j--)
                {
                    byte = (temp >> (j * 8)) & 0xFF;
                    result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                }
            }
        }
    }
    if (isF32Array(index))
    {
        for (u64 i = 0; i < f32Arrays.size(); i++)
        {
            if (f32ArrayIds[i] == index)
            {
                for (u64 j = 0; j < f32Arrays[i].size(); j++)
                {
                    s32 temp = *(reinterpret_cast<s32*>(&f32Arrays[i][j]));
                    s32 byte = (temp >> ((sizeof(temp) - 1) * 8)) & 0xFF;
                    result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                    for (s16 k = sizeof(temp) - 2; k >= 0; k--)
                    {
                        byte = (temp >> (k * 8)) & 0xFF;
                        result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                    }
                }
            }
        }
    }
    if (isF64(index))
    {
        for (u64 i = 0; i < f64s.size(); i++)
        {
            if (f64Ids[i] == index)
            {
                s64 temp = *(reinterpret_cast<s64*>(&f64s[i]));
                s64 byte = (temp >> ((sizeof(temp) - 1) * 8)) & 0xFF;
                result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                for (s16 j = sizeof(temp) - 2; j >= 0; j--)
                {
                    byte = (temp >> (j * 8)) & 0xFF;
                    result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                }
            }
        }
    }
    if (isF64Array(index))
    {
        for (u64 i = 0; i < f64Arrays.size(); i++)
        {
            if (f64ArrayIds[i] == index)
            {
                for (u64 j = 0; j < f64Arrays[i].size(); j++)
                {
                    s64 temp = *(reinterpret_cast<s64*>(&f64Arrays[i][j]));
                    s64 byte = (temp >> ((sizeof(temp) - 1) * 8)) & 0xFF;
                    result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                    for (s16 k = sizeof(temp) - 2; k >= 0; k--)
                    {
                        byte = (temp >> (k * 8)) & 0xFF;
                        result.push_back(*(reinterpret_cast<u8*>(&(byte))));
                    }
                }
            }
        }
    }
    return result;
}

std::vector<u8> DynamicStructure::toRaw()
{
    std::vector<u8> result;
    if (getKeyCount() == 0) return {};
    result = varToU8(0);
    for (u64 i = 1; i < getKeyCount(); i++)
    {
        std::vector<u8> temp = varToU8(i);
        appendVecs(result, temp);
    }
    return result;
}

std::string DynamicStructure::getFilepath()
{
    return filepath;
}

void DynamicStructure::setFilepath(const std::string& path)
{
    filepath = path;
}

void DynamicStructure::writeOut()
{
    tmc::uofstream out(filepath, std::ios::binary);
    if (out.is_open())
    {
        for (u64 i = 0; i < getKeyCount(); i++)
        {
            out.write(varToU8(i).data(), varToU8(i).size());
        }
        out.close();
    }
}

std::vector<u8> DynamicStructure::varToU8(const std::string& key)
{
    if (!hasKey(key)) throw(std::out_of_range("Key doesn't exist"));
    return varToU8(keyToIndex(key));
}

} // namespace tmc
