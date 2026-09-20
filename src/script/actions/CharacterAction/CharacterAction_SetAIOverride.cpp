#include "script/actions/CharacterAction/CharacterAction_SetAIOverride.h"

const char* CharacterAction_SetAIOverride::GetName() const {
    return "CharacterAction_SetAIOverride";
}

void CharacterAction_SetAIOverride::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void CharacterAction_SetAIOverride::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
