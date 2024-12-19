#pragma once

#include <string>
#include <cmath>
#include <map>
#include <cctype>
#include <type_traits>
#include <limits>
#include "tmc_global_types.h"

template <class T>
T rotateBitsLeft(T in, u8 bitsToRotate);

template <class T>
T rotateBitsRight(T in, u8 bitsToRotate);

tmc::u8Vec base64Enc(const tmc::u8Vec& in);

tmc::s8Vec base64Enc(const tmc::s8Vec& in);

std::string base64Enc(const std::string& in);

tmc::u8Vec base64Dec(const tmc::u8Vec& in);

tmc::s8Vec base64Dec(const tmc::s8Vec& in);

std::string base64Dec(const std::string& in);

std::string rot13(std::string in);

