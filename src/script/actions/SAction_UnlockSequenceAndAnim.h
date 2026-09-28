#pragma once

#include "script/actions/SAction.h"

class SAction_UnlockSequenceAndAnim : public SAction {
public:
    ~SAction_UnlockSequenceAndAnim() override;
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& context) override;
};