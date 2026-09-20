#include "script/actions/CharacterAction/CharacterAction_GetDirection.h"

const char* CharacterAction_GetDirection::GetName() const {
    return "CharacterAction_GetDirection";
}

void CharacterAction_GetDirection::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_GetDirection::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
