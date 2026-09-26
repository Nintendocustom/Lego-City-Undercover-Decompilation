#pragma once

#include "script/actions/SAction.h"

class MechGadgetBaseInstance;

class MechCharacterAction : public SAction {
public:
    ActionState Exec(ScriptContext& context) override;
    virtual ActionState MechGadgetExec(ScriptContext& context, MechGadgetBaseInstance* gadget) = 0;
};
