#include "script/actions/CharacterAction/CharacterAction_GetRidden.h"

const char* CharacterAction_GetRidden::GetName() const {
    return "GetRidden";
}

void CharacterAction_GetRidden::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_GetRidden::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}
