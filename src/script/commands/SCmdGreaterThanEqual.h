#pragma once

#include "script/commands/SCmdEqualityOp.h"

class SCmdGreaterThanEqual : public SCmdEqualityOp {
public:
    void* operator new(size_t size) {
        return ScriptMemory::m_Pool->_PoolBlockAlloc(size, "SCmdGreaterThanEqual");
    }
    void operator delete(void* ptr, size_t size) { ScriptMemory::m_Pool->PoolBlockFree(ptr, size); }

    SCmdGreaterThanEqual(ScriptFile* file, int line);

    const char* GetName() const override;
    bool Op(float a, float b) override;
};