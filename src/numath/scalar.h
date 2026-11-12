#pragma once
#include <cstdint>

float NuFsign(float value);
bool NuEquiv(float a, float b);
void NuEquivTollerance(float tolerance);
unsigned int NVConvertFloatToHalf(int intValue);
uint16_t NuFloatToHalf(float floatValue);
int NuPower2(int value);
float NuPow(float base, float exponent);
float NuLog2(float value);
void NuLog10(float value);
float NuExp10(float value);
int NuMiscNextPow2(int value);
unsigned int NuMiscPow2Exp(int value);
int NuMiscNextPow2Exp(int value);
float NuSinf(float angle);
float NuASinf(float value);
float NuCosf(float angle);
float NuACosf(float value);
void NuSinCos(float angle, float* outSin, float* outCos);
float NuTanf(float angle);
float NuATanf(float value);
float NuATan2f(float y, float x);
float NuSinOld(int angle);
int NuASinOld(float value);
float NuCubicInterpolation(float p0, float p1, float p2, float p3, float t);
float NuHermiteInterpolation(float y0, float y1, float y2, float y3, float t);
