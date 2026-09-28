#include "script/actions/CharacterAction/CharacterAction_FollowCharacter.h"

const char* CharacterAction_FollowCharacter::GetName() const {
    return "Character_FollowCharacter";
}

void CharacterAction_FollowCharacter::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_ANY);
}

void CharacterAction_FollowCharacter::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
