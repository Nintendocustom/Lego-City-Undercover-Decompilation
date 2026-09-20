#include "script/actions/CharacterAction/CharacterAction_GetClass.h"

const char* CharacterAction_GetClass::GetName() const {
    return "CharacterAction_GetClass";
}

void CharacterAction_GetClass::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_GetClass::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}
