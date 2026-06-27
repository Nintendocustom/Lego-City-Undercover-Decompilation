#include "chroma/chroma_utils.h"
#include "cstdint"

extern const uint64_t getmasktbl[] = {
    0x0000000000000000ULL, 0x00000000000000FFULL, 0x000000000000FFFFULL,
    0x0000000000FFFFFFULL, 0x00000000FFFFFFFFULL,
};

uint64_t geti(void* ptr, int numBytes) {
    auto* p = static_cast<uint8_t*>(ptr);
    return (static_cast<uint64_t>(p[0]) | static_cast<uint64_t>(p[1]) << 8 | static_cast<uint64_t>(p[2]) << 16
            | static_cast<uint64_t>(p[3]) << 24)
           & getmasktbl[numBytes];
}
void _RLE_WriteNonRep(unsigned char* dest, unsigned int* outPos, unsigned char escapedByte,
                      unsigned char value) {
    unsigned int pos = *outPos;

    if (value == escapedByte) {
        dest[pos++] = value;
        dest[pos] = '\0';
    } else {
        dest[pos] = value;
    }
    *outPos = ++pos;
}
unsigned int RLE_Decode(unsigned char* src, unsigned char* dst, unsigned int srcSize) {
    unsigned char marker = src[0];
    unsigned int dstOffset = 0;
    unsigned int srcOffset = 1;

    do {
        unsigned char value = src[srcOffset];
        unsigned int nextSrc = srcOffset + 1;

        if (value != marker) {
            dst[dstOffset++] = value;
            srcOffset = nextSrc;
            continue;
        }

        unsigned char descriptor = src[nextSrc];
        srcOffset = srcOffset + 2;

        if (descriptor <= 2) {
            unsigned int baseDst = dstOffset + 1;
            int writeCount = descriptor + 1 & 7;

            if (writeCount != 0) {
                int negCount = 0;
                negCount -= writeCount;

#pragma clang loop unroll(disable)
                do {
                    dst[dstOffset++] = marker;
                    negCount++;
                } while (negCount != 0);
            }
            dstOffset = baseDst + descriptor;
        } else {
            unsigned int count = descriptor;

            if (descriptor & 0x80) {
                unsigned int extByte = src[srcOffset];
                srcOffset = srcOffset + 1;
                count = extByte | (descriptor & 0x7F) << 8;
            }

            unsigned char runValue = src[srcOffset];
            unsigned int i = 0;
            do {
                dst[dstOffset + i] = runValue;
                i++;
            } while (i <= count);

            srcOffset = srcOffset + 1;
            dstOffset += i;
        }
    } while (srcOffset < srcSize);

    return dstOffset;
}
