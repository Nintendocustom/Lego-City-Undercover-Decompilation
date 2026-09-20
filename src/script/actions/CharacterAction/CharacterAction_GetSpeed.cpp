#include "script/actions/CharacterAction/CharacterAction_GetSpeed.h"

const char* CharacterAction_GetSpeed::GetName() const {
    return "CharacterAction_GetSpeed";
}

void CharacterAction_GetSpeed::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_GetSpeed::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
