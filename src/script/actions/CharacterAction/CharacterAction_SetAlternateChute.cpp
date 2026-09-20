#include "script/actions/CharacterAction/CharacterAction_SetAlternateChute.h"

const char* CharacterAction_SetAlternateChute::GetName() const {
    return "CharacterAction_SetAlternateChute";
}

void CharacterAction_SetAlternateChute::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void CharacterAction_SetAlternateChute::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
