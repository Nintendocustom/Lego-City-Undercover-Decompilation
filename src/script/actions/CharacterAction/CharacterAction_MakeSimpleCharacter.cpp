#include "script/actions/CharacterAction/CharacterAction_MakeSimpleCharacter.h"

const char* CharacterAction_MakeSimpleCharacter::GetName() const {
    return "CharacterAction_MakeSimpleCharacter";
}

void CharacterAction_MakeSimpleCharacter::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void CharacterAction_MakeSimpleCharacter::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
