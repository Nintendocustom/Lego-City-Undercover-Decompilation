#include "script/actions/CharacterAction/CharacterAction_SetAvoidance.h"

const char* CharacterAction_SetAvoidance::GetName() const {
    return "CharacterAction_SetAvoidance";
}

void CharacterAction_SetAvoidance::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void CharacterAction_SetAvoidance::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
