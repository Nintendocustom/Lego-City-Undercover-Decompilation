#pragma once

#include "kestrel/NuMemoryPool.h"
#include "script/commands/ScriptCommand.h"

class SCmdYield : public ScriptCommand {
public:
    void* operator new(size_t size) { return ScriptMemory::m_Pool->_PoolBlockAlloc(size, "SCmdYield"); }
    void operator delete(void* ptr, size_t size) { ScriptMemory::m_Pool->PoolBlockFree(ptr, size); }

    SCmdYield(ScriptFile* file, int line) : ScriptCommand(file, line) {}
    ~SCmdYield() override {}

    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& ctx) override;
};
