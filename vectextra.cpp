#include "vectextra.h"

namespace tmc
{
template <class T>
bool vecEquals(std::vector<T>& v1, std::vector<T>& v2)
{
    if (v1.size() != v2.size()) return false;
    for (u64 i = 0; i < v1.size(); i++)
    {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

template <class T>
void appendVecs(std::vector<T>& v1, std::vector<T>& v2)
{
    for (u64 i = 0; i < v2.size(); i++)
    {
        v1.push_back(v2[i]);
    }
}
};
