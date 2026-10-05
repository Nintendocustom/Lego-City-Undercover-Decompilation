#pragma once

#include "script/actions/CharacterAction/CharacterAction.h"

class SAction_ApiCharacter2Position : public CharacterAction {
public:
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState CharacterExec(ApiCharacter*, ScriptContext&) override;
};
