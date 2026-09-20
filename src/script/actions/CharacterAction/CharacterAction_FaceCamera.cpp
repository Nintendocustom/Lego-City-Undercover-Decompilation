#include "script/actions/CharacterAction/CharacterAction_FaceCamera.h"

const char* CharacterAction_FaceCamera::GetName() const {
    return "CharacterAction_FaceCamera";
}

void CharacterAction_FaceCamera::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_FaceCamera::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
