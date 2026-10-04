#pragma once

#include "script/actions/SAction.h"

class ApiCharacter;

class SAction_ApiCharacter2Position : public SAction {
public:
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState CharacterExec(ApiCharacter*, ScriptContext&);
};
