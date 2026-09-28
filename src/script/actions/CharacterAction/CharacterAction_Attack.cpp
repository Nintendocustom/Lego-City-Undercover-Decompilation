#include "script/actions/CharacterAction/CharacterAction_Attack.h"

const char* CharacterAction_Attack::GetName() const {
    return "Character_Attack";
}

void CharacterAction_Attack::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_Attack::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
