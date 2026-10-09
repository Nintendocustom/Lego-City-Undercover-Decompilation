#pragma once

#include "script/actions/SAction.h"

struct NuSoundListener;

class SAction_SVarSoundListener_Base : public SAction {
public:
    ActionState Exec(ScriptContext& context) override;
    virtual ActionState SpeechExec(ScriptContext& context, NuSoundListener* soundListener) = 0;
};
