#include "script/actions/CharacterAction/CharacterAction_InContext.h"

const char* CharacterAction_InContext::GetName() const {
    return "CharacterAction_InContext";
}

void CharacterAction_InContext::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_TEXT);
}

void CharacterAction_InContext::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
