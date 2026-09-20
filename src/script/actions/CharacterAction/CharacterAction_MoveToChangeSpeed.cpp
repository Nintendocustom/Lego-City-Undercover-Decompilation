#include "script/actions/CharacterAction/CharacterAction_MoveToChangeSpeed.h"

const char* CharacterAction_MoveToChangeSpeed::GetName() const {
    return "CharacterAction_MoveToChangeSpeed";
}

void CharacterAction_MoveToChangeSpeed::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_ANY);
}

void CharacterAction_MoveToChangeSpeed::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
