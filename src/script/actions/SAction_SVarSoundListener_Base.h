#pragma once

#include "script/actions/SAction.h"

class SAction_SVarSoundListener_Base : public SAction {
public:
    ActionState Exec(ScriptContext& context) override;
};
