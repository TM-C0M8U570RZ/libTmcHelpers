#pragma once

#include "tmc_global_types.h"
#include "vectextra.h"
#include <string>
#include <limits>
#include <filesystem>
#include <stdexcept>

namespace tmc {

class DynamicStructure
{
public:
    DynamicStructure(const std::string& filepath = std::filesystem::current_path().string()
                                           + "/myfile.bin");

    u64 getKeyCount();

    bool hasKey(const std::string& key);
    bool isString(const std::string& key);
    bool isStringArray(const std::string& key);
    bool isBool(const std::string& key);
    bool isBoolArray(const std::string& key);
    bool isChar(const std::string& key);
    bool isCharArray(const std::string& key);
    bool isS8(const std::string& key);
    bool isS8Array(const std::string& key);
    bool isU8(const std::string& key);
    bool isU8Array(const std::string& key);
    bool isS16(const std::string& key);
    bool isS16Array(const std::string& key);
    bool isU16(const std::string& key);
    bool isU16Array(const std::string& key);
    bool isS32(const std::string& key);
    bool isS32Array(const std::string& key);
    bool isU32(const std::string& key);
    bool isU32Array(const std::string& key);
    bool isS64(const std::string& key);
    bool isS64Array(const std::string& key);
    bool isU64(const std::string& key);
    bool isU64Array(const std::string& key);
    bool isF32(const std::string& key);
    bool isF32Array(const std::string& key);
    bool isF64(const std::string& key);
    bool isF64Array(const std::string& key);

    bool isString(u64 index);
    bool isStringArray(u64 index);
    bool isBool(u64 index);
    bool isBoolArray(u64 index);
    bool isChar(u64 index);
    bool isCharArray(u64 index);
    bool isS8(u64 index);
    bool isS8Array(u64 index);
    bool isU8(u64 index);
    bool isU8Array(u64 index);
    bool isS16(u64 index);
    bool isS16Array(u64 index);
    bool isU16(u64 index);
    bool isU16Array(u64 index);
    bool isS32(u64 index);
    bool isS32Array(u64 index);
    bool isU32(u64 index);
    bool isU32Array(u64 index);
    bool isS64(u64 index);
    bool isS64Array(u64 index);
    bool isU64(u64 index);
    bool isU64Array(u64 index);
    bool isF32(u64 index);
    bool isF32Array(u64 index);
    bool isF64(u64 index);
    bool isF64Array(u64 index);

    template<class T>
    T getAs(const std::string& key);

    template<class T>
    T getAs(u64 index);

    std::string indexToKey(u64 index);

    u64 keyToIndex(const std::string& key);

    void swap(u64 i1, u64 i2);

    template<class T>
    void insert(const std::string& key, T elm, u64 index = std::numeric_limits<u64>::max());

    void remove(u64 index);

    void remove(const std::string& key);

    template<class T>
    void set(T elm, u64 index);

    template<class T>
    void set(T elm, const std::string& key)
    {
        if (!hasKey(key)) return;
        u64 index = keyToIndex(key);
        set<T>(elm, index);
    }

    std::vector<u8> varToU8(u64 index);

    std::vector<u8> varToU8(const std::string& key);

    std::vector<u8> toRaw();

    std::string getFilepath();

    void setFilepath(const std::string& path);

    void writeOut();
private:
    std::vector<std::string> strings;
    std::vector<u64> stringIds;
    std::vector<std::string> stringKeys;
    std::vector<std::vector<std::string>> stringArrays;
    std::vector<u64> stringArrayIds;
    std::vector<std::string> stringArrayKeys;
    std::vector<bool> bools;
    std::vector<u64> boolIds;
    std::vector<std::string> boolKeys;
    std::vector<std::vector<bool>> boolArrays;
    std::vector<u64> boolArrayIds;
    std::vector<std::string> boolArrayKeys;
    std::vector<char> chars;
    std::vector<u64> charIds;
    std::vector<std::string> charKeys;
    std::vector<std::vector<char>> charArrays;
    std::vector<u64> charArrayIds;
    std::vector<std::string> charArrayKeys;
    std::vector<s8> s8s;
    std::vector<u64> s8Ids;
    std::vector<std::string> s8Keys;
    std::vector<std::vector<s8>> s8Arrays;
    std::vector<u64> s8ArrayIds;
    std::vector<std::string> s8ArrayKeys;
    std::vector<u8> u8s;
    std::vector<u64> u8Ids;
    std::vector<std::string> u8Keys;
    std::vector<std::vector<u8>> u8Arrays;
    std::vector<u64> u8ArrayIds;
    std::vector<std::string> u8ArrayKeys;
    std::vector<s16> s16s;
    std::vector<u64> s16Ids;
    std::vector<std::string> s16Keys;
    std::vector<std::vector<s16>> s16Arrays;
    std::vector<u64> s16ArrayIds;
    std::vector<std::string> s16ArrayKeys;
    std::vector<u16> u16s;
    std::vector<u64> u16Ids;
    std::vector<std::string> u16Keys;
    std::vector<std::vector<u16>> u16Arrays;
    std::vector<u64> u16ArrayIds;
    std::vector<std::string> u16ArrayKeys;
    std::vector<s32> s32s;
    std::vector<u64> s32Ids;
    std::vector<std::string> s32Keys;
    std::vector<std::vector<s32>> s32Arrays;
    std::vector<u64> s32ArrayIds;
    std::vector<std::string> s32ArrayKeys;
    std::vector<u32> u32s;
    std::vector<u64> u32Ids;
    std::vector<std::string> u32Keys;
    std::vector<std::vector<u32>> u32Arrays;
    std::vector<u64> u32ArrayIds;
    std::vector<std::string> u32ArrayKeys;
    std::vector<s64> s64s;
    std::vector<u64> s64Ids;
    std::vector<std::string> s64Keys;
    std::vector<std::vector<s64>> s64Arrays;
    std::vector<u64> s64ArrayIds;
    std::vector<std::string> s64ArrayKeys;
    std::vector<u64> u64s;
    std::vector<u64> u64Ids;
    std::vector<std::string> u64Keys;
    std::vector<std::vector<u64>> u64Arrays;
    std::vector<u64> u64ArrayIds;
    std::vector<std::string> u64ArrayKeys;
    std::vector<f32> f32s;
    std::vector<u64> f32Ids;
    std::vector<std::string> f32Keys;
    std::vector<std::vector<f32>> f32Arrays;
    std::vector<u64> f32ArrayIds;
    std::vector<std::string> f32ArrayKeys;
    std::vector<f64> f64s;
    std::vector<u64> f64Ids;
    std::vector<std::string> f64Keys;
    std::vector<std::vector<f64>> f64Arrays;
    std::vector<u64> f64ArrayIds;
    std::vector<std::string> f64ArrayKeys;
    std::string filepath;
};

} // namespace tmc
