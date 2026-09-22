#include "script/actions/CharacterAction/CharacterAction_SetScript.h"

const char* CharacterAction_SetScript::GetName() const {
    return "SetScript";
}

void CharacterAction_SetScript::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_TEXT);
}

void CharacterAction_SetScript::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
