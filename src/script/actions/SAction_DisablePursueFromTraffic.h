#pragma once

#include "script/actions/SAction.h"

class SAction_DisablePursueFromTraffic : public SAction {
public:
    static uint32_t sm_ReleasePursuers;
    static uint32_t sm_DestroyPursuers;

    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& context) override;

private:
    int m_InputVariant;
};