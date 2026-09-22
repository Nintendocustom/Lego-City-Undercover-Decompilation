#include "script/actions/CharacterAction/CharacterAction_FaceCharacter.h"

const char* CharacterAction_FaceCharacter::GetName() const {
    return "Character_FaceCharacter";
}

void CharacterAction_FaceCharacter::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_FaceCharacter::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
