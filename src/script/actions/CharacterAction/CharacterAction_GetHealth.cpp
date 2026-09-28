#include "script/actions/CharacterAction/CharacterAction_GetHealth.h"

const char* CharacterAction_GetHealth::GetName() const {
    return "GetHealth";
}

void CharacterAction_GetHealth::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_GetHealth::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
