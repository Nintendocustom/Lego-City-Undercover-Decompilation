#include "script/actions/CharacterAction/CharacterAction_CutDownCharacter.h"

const char* CharacterAction_CutDownCharacter::GetName() const {
    return "Character_CutDownCharacter";
}

void CharacterAction_CutDownCharacter::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void CharacterAction_CutDownCharacter::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
