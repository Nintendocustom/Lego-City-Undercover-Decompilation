#pragma once
#include <cstddef>

class NuMemoryPool {
public:
    void* _PoolBlockAlloc(size_t size, const char* tag);
    void PoolBlockFree(void* ptr, size_t size);
};

namespace ScriptMemory {
extern NuMemoryPool* m_Pool;
}