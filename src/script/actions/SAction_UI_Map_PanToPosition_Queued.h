#pragma once

#include "kestrel/NuMemory.h"
#include "script/actions/SAction.h"

class SAction_UI_Map_PanToPosition_Queued : public SAction {
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
    void PerPlayerExec(ScriptContext& context, int unknown);

    uint8_t m_field_0xc;
    uint8_t m_field_0xd;
};