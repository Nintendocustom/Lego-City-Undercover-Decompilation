#pragma once
#include "kestrel/NuMemoryPool.h"
#include "script/commands/ScriptCommand.h"

class ScriptScope;

class SCmdBeginState : public ScriptCommand {
public:
    void* operator new(size_t size) { return ScriptMemory::m_Pool->_PoolBlockAlloc(size, "SCmdBeginState"); }
    void operator delete(void* ptr, size_t size) { ScriptMemory::m_Pool->PoolBlockFree(ptr, size); }

    SCmdBeginState(ScriptFile* file, int line);

    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& ctx) override;

private:
    ScriptScope* m_StateScope;
    ScriptScope* m_ConditionScope;
};
