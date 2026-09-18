#pragma once

#include "script/actions/SAction.h"

class SAction_UseLiveReflections : public SAction {
public:
    ~SAction_UseLiveReflections() override;
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& context) override;
};
