#include "nucore/NuString.h"

int NuStrCpy(char* dst, const char* src) {
    char* d = dst;
    if (src && *src) {
        const char* s = src + 1;
        char c = *src;
        do {
            *d++ = c;
            c = *s++;
        } while (c);
    }
    *d = 0;
    return (int)(d - dst);
}

char* NuStrChr(char* str, char c) {
    while (*str != '\0') {
        if (*str == c)
            return str;
        str++;
    }
    return 0;
}
