#pragma once
#include "tmc_global_types.h"

namespace tmc
{
template <class T>
bool vecEquals(std::vector<T>& v1, std::vector<T>& v2);

template <class T>
void appendVecs(std::vector<T>& v1, std::vector<T>& v2);
};
