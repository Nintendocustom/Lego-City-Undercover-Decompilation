#pragma once

#include "script/actions/SAction.h"

class SAction_CommitCollectables : public SAction {
public:
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& context) override;

    static unsigned int sm_AbilitiesHash;
    static unsigned int sm_AllHash;
    static unsigned int sm_StoryCharHash;
};
