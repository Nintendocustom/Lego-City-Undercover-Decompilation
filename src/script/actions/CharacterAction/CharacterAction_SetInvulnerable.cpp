#include "script/actions/CharacterAction/CharacterAction_SetInvulnerable.h"

const char* CharacterAction_SetInvulnerable::GetName() const {
    return "CharacterAction_SetInvulnerable";
}

void CharacterAction_SetInvulnerable::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
    params.AddParam(SV_ANY);
}

void CharacterAction_SetInvulnerable::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
