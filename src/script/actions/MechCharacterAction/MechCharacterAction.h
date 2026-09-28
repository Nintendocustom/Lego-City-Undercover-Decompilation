#pragma once

#include "script/actions/SAction.h"

class MechCharacter;

class MechCharacterAction : public SAction {
public:
    ActionState Exec(ScriptContext& context) override;
    virtual ActionState LegoAction_ActivateCharacter(ScriptContext& context, MechCharacter& character) = 0;
};
