#pragma once

#include "script/actions/SAction.h"

class SAction_UI_Map_PanToPosition_Queued : public SAction {
public:
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& context) override;
    void PerPlayerExec(ScriptContext& context, int playerIndex);

private:
    uint8_t m_InputVariant1;
    uint8_t m_InputVariant2;
};