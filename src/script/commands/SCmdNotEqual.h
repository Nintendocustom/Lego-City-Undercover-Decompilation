#pragma once
#include "kestrel/NuMemoryPool.h"
#include "script/commands/ScriptCommand.h"

class SCmdNotEqual : public ScriptCommand {
public:
    void* operator new(size_t size) { return ScriptMemory::m_Pool->_PoolBlockAlloc(size, "SCmdNotEqual"); }
    void operator delete(void* ptr, size_t size) { ScriptMemory::m_Pool->PoolBlockFree(ptr, size); }

    SCmdNotEqual(ScriptFile* file, int line);
    ~SCmdNotEqual() override {}

    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& ctx) override;
};
