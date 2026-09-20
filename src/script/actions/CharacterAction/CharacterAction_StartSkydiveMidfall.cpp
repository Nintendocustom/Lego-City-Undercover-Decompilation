#include "script/actions/CharacterAction/CharacterAction_StartSkydiveMidfall.h"

const char* CharacterAction_StartSkydiveMidfall::GetName() const {
    return "CharacterAction_StartSkydiveMidfall";
}

void CharacterAction_StartSkydiveMidfall::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_StartSkydiveMidfall::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
