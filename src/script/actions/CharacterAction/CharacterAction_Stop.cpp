#include "script/actions/CharacterAction/CharacterAction_Stop.h"

const char* CharacterAction_Stop::GetName() const {
    return "CharacterAction_Stop";
}

void CharacterAction_Stop::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_Stop::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
