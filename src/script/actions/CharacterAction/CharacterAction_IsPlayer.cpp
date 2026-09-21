#include "script/actions/CharacterAction/CharacterAction_IsPlayer.h"

const char* CharacterAction_IsPlayer::GetName() const {
    return "IsPlayer";
}

void CharacterAction_IsPlayer::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_IsPlayer::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
