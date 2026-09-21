#include "script/actions/CharacterAction/CharacterAction_SetHealth.h"

const char* CharacterAction_SetHealth::GetName() const {
    return "SetHealth";
}

void CharacterAction_SetHealth::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_HASH);
    params.AddParam(SV_NUMBER);
}

void CharacterAction_SetHealth::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
