#define CALC_PLUGIN_BUILD
#include "plugin_helpers.h"
#include <cmath>

static double my_sin(double x, double) {
    return std::sin(x * 3.14159265358979323846 / 180.0);
}

DEFINE_PLUGIN("sin", 1, my_sin)