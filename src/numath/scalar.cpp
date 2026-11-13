#include "scalar.h"

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