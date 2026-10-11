#pragma once

#include "kestrel/NuMemoryPool.h"
#include "script/commands/SCmdLogicOp.h"
#include "script/commands/ScriptCommand.h"

class SCmdOr : public SCmdLogicOp<SCmdOr> {
public:
    void* operator new(size_t size) { return ScriptMemory::m_Pool->_PoolBlockAlloc(size, "SCmdOr"); }
    void operator delete(void* ptr, size_t size) { ScriptMemory::m_Pool->PoolBlockFree(ptr, size); }

    SCmdOr(ScriptFile* file, int line);

    const char* GetName() const override;

    static bool Op(bool a, bool b);
};
