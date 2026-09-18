#pragma once
#include <cstddef>

class NuMemoryPool {
public:
    void* PoolBlockAlloc(size_t size);
    void PoolBlockFree(void* ptr, size_t size);
};

namespace ScriptMemory {
extern NuMemoryPool* m_Pool;
}