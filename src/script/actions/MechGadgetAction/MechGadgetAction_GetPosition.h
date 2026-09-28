#pragma once
#include "script/actions/MechGadgetAction/MechGadgetAction.h"

class MechGadgetAction_GetPosition : public MechGadgetAction {
public:
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState MechGadgetExec(ScriptContext& context, MechGadgetBaseInstance* gadget) override;
};
