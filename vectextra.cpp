#include "vectextra.h"

namespace tmc
{
std::vector<char> moveToCharVec(std::vector<u8>& vec)
{
    std::vector<char> result;
    while (vec.size() != 0)
    {
        result.push_back(*(reinterpret_cast<char*>(&(vec[0]))));
        vec.erase(vec.begin());
        vec.shrink_to_fit();
    }
    return result;
}
}
