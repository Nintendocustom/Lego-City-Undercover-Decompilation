#include "script/actions/CharacterAction/CharacterAction_IsSkydiving.h"

const char* CharacterAction_IsSkydiving::GetName() const {
    return "CharacterAction_IsSkydiving";
}

void CharacterAction_IsSkydiving::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_IsSkydiving::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
