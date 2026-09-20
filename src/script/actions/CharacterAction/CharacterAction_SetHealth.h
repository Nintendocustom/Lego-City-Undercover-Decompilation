#pragma once
#include "script/actions/CharacterAction/CharacterAction.h"

class CharacterAction_SetHealth : public CharacterAction {
public:
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState CharacterExec(ApiCharacter* pChar, ScriptContext& context) override;

private:
    uint32_t m_InputVariant;
};
