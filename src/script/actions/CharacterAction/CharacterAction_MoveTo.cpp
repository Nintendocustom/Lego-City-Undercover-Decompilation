#include "script/actions/CharacterAction/CharacterAction_MoveTo.h"

const char* CharacterAction_MoveTo::GetName() const {
    return "Character_MoveTo";
}

void CharacterAction_MoveTo::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_UNKNOWN_1);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_ANY);
}

void CharacterAction_MoveTo::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
