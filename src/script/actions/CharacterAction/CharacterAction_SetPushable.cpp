#include "script/actions/CharacterAction/CharacterAction_SetPushable.h"

const char* CharacterAction_SetPushable::GetName() const {
    return "SetPushable";
}

void CharacterAction_SetPushable::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void CharacterAction_SetPushable::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
