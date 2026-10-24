#pragma once

#include "kestrel/NuMemoryPool.h"
#include "script/commands/ScriptCommand.h"

class SCmdAddText : public ScriptCommand {
public:
    void* operator new(size_t size) { return ScriptMemory::m_Pool->_PoolBlockAlloc(size, "SCmdAddText"); }
    void operator delete(void* ptr, size_t size) { ScriptMemory::m_Pool->PoolBlockFree(ptr, size); }

    SCmdAddText(ScriptFile* file, int line);

    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& context) override;
};
