#pragma once
#include <cmath>
#include "tmc_global_types.h"

namespace tmc{
f64 pi();

bool isLimit(f64 lhs, f64 rhs, f64 epsilon = 1e-7);
}
