#pragma once

#include <cstddef>

class NuMemoryManager {
public:
    void* _BlockAlloc(size_t size, size_t alignment, int flag, const char* tag, int unknown);
    void BlockFree(void* ptr, unsigned int flags);
};

class NuMemory {
public:
    NuMemoryManager* GetThreadMem();
};

NuMemory* NuMemoryGet();