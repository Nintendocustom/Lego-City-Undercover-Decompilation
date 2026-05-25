#include "chroma/chroma_mem.h"
#include "nn/types.h"

extern "C" {
void* malloc(size_t size);
void free(void* ptr);
}

void* Chroma_Alloc(unsigned int size) {
    return malloc(size);
}
void* Chroma_AllocAligned(unsigned int size, unsigned int alignment) {
    return malloc(size);
}
void Chroma_Free(void* ptr) {
    free(ptr);
}
void Chroma_FreeAligned(void* ptr) {
    free(ptr);
}
