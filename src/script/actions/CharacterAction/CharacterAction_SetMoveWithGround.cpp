#include "script/actions/CharacterAction/CharacterAction_SetMoveWithGround.h"

const char* CharacterAction_SetMoveWithGround::GetName() const {
    return "CharacterAction_SetMoveWithGround";
}

void CharacterAction_SetMoveWithGround::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void CharacterAction_SetMoveWithGround::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
