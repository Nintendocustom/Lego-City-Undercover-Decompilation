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

void _RLE_WriteRep(unsigned char* dest, unsigned int* destOffset, unsigned char markerByte,
                   unsigned char value, unsigned int count) {
    unsigned int pos = *destOffset;
    if (count <= 3) {
        if (value == markerByte) {
            unsigned int idx1 = pos + 1;
            dest[pos] = value;
            char lenByte = count + 0xff;
            dest[idx1] = lenByte;
            *destOffset = pos + 2;
            return;
        }
        for (int k = 0; k < count; k++) {
            dest[pos++] = value;
        }
        *destOffset = pos;
        return;
    }

    unsigned int idx = pos + 1;
    unsigned int len = count - 1;
    dest[pos] = markerByte;
    if (len > 0x7f) {
        dest[idx] = (len >> 8) | 0x80;
        idx = pos + 2;
    }
    unsigned int idx1 = idx + 1;
    pos = idx + 2;
    dest[idx] = len;
    dest[idx1] = value;
    *destOffset = pos;
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

unsigned int RLE_Encode(unsigned char* src, unsigned char* dest, unsigned int srcSize) {
    unsigned int histogram[256] = {};

    for (int i = 0; i < srcSize; i++) {
        histogram[src[i]]++;
    }

    int marker = 0;
    for (int i = 1; i < 256; i++) {
        if (histogram[i] < histogram[marker & 0xff]) {
            marker = i;
        }
    }
    char markerByte = static_cast<char>(marker);

    dest[0] = markerByte;
    int current = src[0];
    unsigned int outPos = 1;
    bool hasPending = true;

    if (srcSize > 1) {
        unsigned char* srcPtr = src + 1;
        unsigned int nextIdx = 2;

        goto loop_start;
        do {
            srcPtr = src + nextIdx;
            nextIdx++;
        loop_start:
            unsigned char next = *srcPtr;
            auto curByte = static_cast<unsigned char>(current);

            if (curByte != next) {
                _RLE_WriteNonRep(dest, &outPos, markerByte, current);
                current = next;
                hasPending = true;
            } else {
                int runLen = 2;
                int matchVal = current;

                if (nextIdx >= srcSize) {
                    hasPending = false;
                } else {
                    long j = 0;
                    while (true) {
                        if (curByte != static_cast<unsigned char>(matchVal)
                            || (static_cast<unsigned int>(j) + 2) >> 15 != 0) {
                            hasPending = true;
                            break;
                        }
                        matchVal = src[nextIdx + j];
                        j++;
                        if (nextIdx + j >= srcSize) {
                            hasPending = false;
                            break;
                        }
                    }
                    nextIdx += j;
                    runLen = j + 2;
                }

                if (curByte == static_cast<unsigned char>(matchVal)) {
                    _RLE_WriteRep(dest, &outPos, markerByte, current, runLen);
                    if (hasPending) {
                        current = src[nextIdx++];
                    }
                } else {
                    _RLE_WriteRep(dest, &outPos, markerByte, current, runLen - 1);
                    current = matchVal;
                    hasPending = true;
                }
            }
        } while (nextIdx < srcSize);
    }

    if (hasPending) {
        _RLE_WriteNonRep(dest, &outPos, markerByte, current);
    }

    return outPos;
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
