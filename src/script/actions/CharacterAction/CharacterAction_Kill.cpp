#include "script/actions/CharacterAction/CharacterAction_Kill.h"

const char* CharacterAction_Kill::GetName() const {
    return "Kill";
}

void CharacterAction_Kill::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_Kill::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
