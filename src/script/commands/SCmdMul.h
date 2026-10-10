#pragma once

#include "kestrel/NuMemoryPool.h"
#include "script/commands/SCmdArithmeticOp.h"
#include "script/commands/ScriptCommand.h"

class SCmdMul : public SCmdArithmeticOp<SCmdMul> {
public:
    void* operator new(size_t size) { return ScriptMemory::m_Pool->_PoolBlockAlloc(size, "SCmdMul"); }
    void operator delete(void* ptr, size_t size) { ScriptMemory::m_Pool->PoolBlockFree(ptr, size); }

    SCmdMul(ScriptFile* file, int line);

    const char* GetName() const override;

    static float Op(float a, float b);
};
