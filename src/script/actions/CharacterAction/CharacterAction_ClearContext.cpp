#include "script/actions/CharacterAction/CharacterAction_ClearContext.h"

const char* CharacterAction_ClearContext::GetName() const {
    return "Character_ClearContext";
}

void CharacterAction_ClearContext::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_ClearContext::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
