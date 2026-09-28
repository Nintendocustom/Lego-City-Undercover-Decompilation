#pragma once
#include "kestrel/NuMemory.h"
#include <cstddef>

struct ScriptContext;

class ActionInstanceData {
public:
    virtual ~ActionInstanceData() = default;

    void* operator new(size_t size) {
        NuMemory* mem = NuMemoryGet();
        NuMemoryManager* mgr = mem->GetThreadMem();
        return mgr->_BlockAlloc(size, 8, 1, "", 0);
    }
    void operator delete(void* ptr) {
        NuMemory* mem = NuMemoryGet();
        NuMemoryManager* mgr = mem->GetThreadMem();
        mgr->BlockFree(ptr, 0);
    }
};
