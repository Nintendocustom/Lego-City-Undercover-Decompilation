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

float NuLog2(float value) {
    float result;
    result = logf(value);
    return result * 1.4426954f;
}

float NuLog10(float value) {
    return log10f(value);
}

bool NuEquiv(float a, float b) {
    float difference = a - b;
    return (difference >= 0.0f ? difference : -difference) < NuEquivTollerance_v;
}

void NuEquivTollerance(float tolerance) {
    NuEquivTollerance_v = tolerance;
}

int NuMiscNextPow2(int value) {
    int result;
    unsigned int step = 0;

    do {
        result = 1 << step;
        step++;

    } while (result < value);

    return result;
}

unsigned int NuMiscPow2Exp(int value) {
    int step = 0;

    if (value >= 1) {
        while (value > 1) {
            value = value >> 1;
            step++;
        }

        return step;
    }

    return 0;
}

float NuFsign(float value) {
    return (value >= 0.0) ? 1.0f : -1.0f;
}

int NuMiscNextPow2Exp(int value) {
    int step = -1;
    int result = 0;

    do {
        step++;
        result = 1 << step;
    } while (result < value);

    return step;
}