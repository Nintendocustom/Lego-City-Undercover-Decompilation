#include "scalar.h"
#include <cmath>

int NuPower2(int value) {
    int initial_value = 1;
    if (value >= 0x80) {
        initial_value = 0x80;
    }
    while (initial_value < value) {
        initial_value <<= 1;
    }
    return initial_value;
}

float NuPow(float base, float exponent) {
    float result;

    if (base == 0) {
        return 0.0;
    }

    result = logf(base);
    result = expf(result * exponent);

    return result;
}