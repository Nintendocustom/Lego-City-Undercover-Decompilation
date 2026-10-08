#pragma once

#include "script/actions/SAction_SVarSoundListener_Base.h"

class SAction_SVarSoundListener_Constructor_Character : public SAction_SVarSoundListener_Base {
public:
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& context) override;
};
