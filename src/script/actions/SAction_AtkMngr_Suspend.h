#pragma once

#include "script/actions/SAction_AtkMngr_Command.h"

class SAction_AtkMngr_Suspend : public SAction_AtkMngr_Command {
public:
    SAction_AtkMngr_Suspend();
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState DoExec(WeakPtr<cAttackManager>& manager, ScriptContext& context) override;
};