#pragma once
#include <cstddef>

class NuMemoryManager {
public:
    void* _BlockAlloc(size_t size, size_t alignment, unsigned int flags, const char* tag, unsigned short id);
    void BlockFree(void* ptr, unsigned int flags);
};

class NuMemory {
public:
    NuMemoryManager* GetThreadMem();
};

NuMemory* NuMemoryGet();