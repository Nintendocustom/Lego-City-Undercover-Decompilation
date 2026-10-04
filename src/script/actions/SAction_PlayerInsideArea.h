#pragma once

#include "script/actions/SAction.h"
#include "kestrel/NuMemory.h"

class SAction_PlayerInsideArea : public SAction {
public:
    void operator delete(void* ptr) {
        NuMemory* mem = NuMemoryGet();
        NuMemoryManager* mgr = mem->GetThreadMem();
        mgr->BlockFree(ptr, 0);
    }
    
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& context) override;
    
    int m_field_0xc;
};