#include "script/actions/CharacterAction/CharacterAction_GetItemOut.h"

const char* CharacterAction_GetItemOut::GetName() const {
    return "Character_GetItemOut";
}

void CharacterAction_GetItemOut::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_TEXT);
}

void CharacterAction_GetItemOut::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
