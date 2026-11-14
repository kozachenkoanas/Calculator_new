#define CALC_PLUGIN_BUILD
#include "plugin_helpers.h"
#include <cmath>
#include <stdexcept>

static double my_ln(double x, double) {
    if (x <= 0) {
        throw std::runtime_error("Argument of ln must be greater than zero");
    }
    return std::log(x);
}

DEFINE_PLUGIN("ln", 1, my_ln)