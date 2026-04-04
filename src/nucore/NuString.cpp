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
