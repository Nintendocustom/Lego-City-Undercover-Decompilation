#include "script/actions/CharacterAction/CharacterAction_BeenKilled.h"

const char* CharacterAction_BeenKilled::GetName() const {
    return "CharacterAction_BeenKilled";
}

void CharacterAction_BeenKilled::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_BeenKilled::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
