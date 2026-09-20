#include "script/actions/CharacterAction/CharacterAction_HasClassAbilities.h"

const char* CharacterAction_HasClassAbilities::GetName() const {
    return "CharacterAction_HasClassAbilities";
}

void CharacterAction_HasClassAbilities::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_HASH);
}

void CharacterAction_HasClassAbilities::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
