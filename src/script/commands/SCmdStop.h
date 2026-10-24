#pragma once

#include "kestrel/NuMemoryPool.h"
#include "script/commands/ScriptCommand.h"

class SCmdStop : public ScriptCommand {
public:
    void* operator new(size_t size) { return ScriptMemory::m_Pool->_PoolBlockAlloc(size, "SCmdStop"); }
    void operator delete(void* ptr, size_t size) { ScriptMemory::m_Pool->PoolBlockFree(ptr, size); }

    SCmdStop(ScriptFile* file, int line) : ScriptCommand(file, line) {}
    ~SCmdStop() override {}

    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& ctx) override;
};
