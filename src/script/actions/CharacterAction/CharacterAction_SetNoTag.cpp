#include "script/actions/CharacterAction/CharacterAction_SetNoTag.h"

const char* CharacterAction_SetNoTag::GetName() const {
    return "CharacterAction_SetNoTag";
}

void CharacterAction_SetNoTag::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void CharacterAction_SetNoTag::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
