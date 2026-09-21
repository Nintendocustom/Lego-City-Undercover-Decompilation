#include "script/actions/CharacterAction/CharacterAction_SetTargetable.h"

const char* CharacterAction_SetTargetable::GetName() const {
    return "SetTargetable";
}

void CharacterAction_SetTargetable::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void CharacterAction_SetTargetable::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
