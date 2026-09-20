#include "script/actions/CharacterAction/CharacterAction_SetRexStunned.h"

const char* CharacterAction_SetRexStunned::GetName() const {
    return "CharacterAction_SetRexStunned";
}

void CharacterAction_SetRexStunned::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_SetRexStunned::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
