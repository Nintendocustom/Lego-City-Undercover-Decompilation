#pragma once

#include "kestrel/NuMemoryPool.h"
#include "script/actions/SAction.h"

class SActionDebugMsg : public SAction {
public:
    void* operator new(size_t size) { return ScriptMemory::m_Pool->_PoolBlockAlloc(size, "SActionDebugMsg"); }
    void operator delete(void* ptr, size_t size) { ScriptMemory::m_Pool->PoolBlockFree(ptr, size); }

    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& context) override;
};
