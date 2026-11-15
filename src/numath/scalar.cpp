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

float NuPowFast(float base, float exponent) {
    float result;
    if (base == 0) {
        return 0.0;
    }
    result = logf(base);
    result = expf(result * exponent);
    return result;
}

float NuCubicInterpolation(float p0, float p1, float p2, float p3, float t) {
    float temp1 = (-p0 / 6.0f) + (p1 * 0.5f) - (p2 * 0.5f) + (p3 / 6.0f);
    float temp2 = (p0 * 0.5f) - p1 + (p2 * 0.5f);
    float temp3 = (p0 / -3.0f) - (p1 * 0.5f) + p2 - (p3 / 6.0f);
    float t_sq = t * t;
    float t_cub = t_sq * t;
    return (temp1 * t_cub) + (temp2 * t_sq) + (temp3 * t) + p1;
}

float NuHermiteInterpolation(float y0, float y1, float y2, float y3, float t){
    float slope1 = (y2 - y0) * 0.5f;
    float slope2 = (y3 - y1) * 0.5f;
    float t_sq = t * t;
    float t_cub = t_sq * t;
    float w0 = (t_cub + t_cub) - (t_sq * 3.0f) + 1.0f;
    float h = (t_cub - (t_sq + t_sq)) + t;
    float w2 = (t_sq * 3.0f) - (t_cub + t_cub);
    float h2 = t_cub - t_sq;
    return (w0 * y1) + (slope1 * h) + (w2 * y2) + (slope2 * h2);
}