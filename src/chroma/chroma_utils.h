#pragma once
#include "cstdint"

void Chroma_GenColorConversionPalettes();
uint64_t geti(void* ptr, int numBytes);
void puti(void* ptr, unsigned long value, int offset);
unsigned int _RLE_WriteRep(unsigned char* dest, unsigned int* destOffset, unsigned char value,
                           unsigned char count, unsigned int maxDestSize);
void _RLE_WriteNonRep(unsigned char* dest, unsigned int* destOffset, unsigned char value,
                      unsigned char count);
unsigned int RLE_Encode(unsigned char* dest, unsigned char* src, unsigned int srcSize);
unsigned int RLE_Decode(unsigned char* src, unsigned char* dst, unsigned int srcSize);
