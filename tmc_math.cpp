#include "tmc_math.h"

namespace tmc{
f64 pi()
{
    return acos(-1);
}

bool isLimit(f64 lhs, f64 rhs, f64 epsilon)
{
    return (fabs(lhs - rhs) < epsilon);
}
}
