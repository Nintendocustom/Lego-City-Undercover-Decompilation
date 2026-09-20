#include "script/actions/CharacterAction/CharacterAction_GetPosition.h"

const char* CharacterAction_GetPosition::GetName() const {
    return "CharacterAction_GetPosition";
}

void CharacterAction_GetPosition::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_GetPosition::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_POSITION);
}
