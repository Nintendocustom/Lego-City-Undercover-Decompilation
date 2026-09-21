#include "script/actions/CharacterAction/CharacterAction_SetNoCollision.h"

const char* CharacterAction_SetNoCollision::GetName() const {
    return "SetNoCollision";
}

void CharacterAction_SetNoCollision::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void CharacterAction_SetNoCollision::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
