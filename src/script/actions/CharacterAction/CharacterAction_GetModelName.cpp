#include "script/actions/CharacterAction/CharacterAction_GetModelName.h"

const char* CharacterAction_GetModelName::GetName() const {
    return "CharacterAction_GetModelName";
}

void CharacterAction_GetModelName::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_GetModelName::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}
