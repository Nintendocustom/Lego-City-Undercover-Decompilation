#pragma once

#include "script/actions/SAction.h"

class SAction_SuperCounterUI_NoGoldBrickAndAnim_Text : public SAction {
public:
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& context) override;

private:
    uint32_t m_InputVariant;
};
