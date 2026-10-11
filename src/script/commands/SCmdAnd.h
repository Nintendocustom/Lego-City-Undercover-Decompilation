#pragma once

#include "kestrel/NuMemoryPool.h"
#include "script/commands/SCmdLogicOp.h"
#include "script/commands/ScriptCommand.h"

class SCmdAnd : public SCmdLogicOp<SCmdAnd> {
public:
    void* operator new(size_t size) { return ScriptMemory::m_Pool->_PoolBlockAlloc(size, "SCmdAnd"); }
    void operator delete(void* ptr, size_t size) { ScriptMemory::m_Pool->PoolBlockFree(ptr, size); }

    SCmdAnd(ScriptFile* file, int line);

    const char* GetName() const override;

    static bool Op(bool a, bool b);
};
