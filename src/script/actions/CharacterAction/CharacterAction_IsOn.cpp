#include "script/actions/CharacterAction/CharacterAction_IsOn.h"

const char* CharacterAction_IsOn::GetName() const {
    return "CharacterAction_IsOn";
}

void CharacterAction_IsOn::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_IsOn::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
