#pragma once

#include "kestrel/NuMemoryPool.h"
#include "script/commands/ScriptCommand.h"

class SCmdEqualityOp : public ScriptCommand {
public:
    void* operator new(size_t size) { return ScriptMemory::m_Pool->_PoolBlockAlloc(size, "SCmdEqualityOp"); }
    void operator delete(void* ptr, size_t size) { ScriptMemory::m_Pool->PoolBlockFree(ptr, size); }

    SCmdEqualityOp(ScriptFile* file, int line);

    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& context) override;
    virtual bool Op(float a, float b) = 0;
};