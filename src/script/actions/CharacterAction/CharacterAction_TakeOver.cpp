#include "script/actions/CharacterAction/CharacterAction_TakeOver.h"

const char* CharacterAction_TakeOver::GetName() const {
    return "CharacterAction_TakeOver";
}

void CharacterAction_TakeOver::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_TakeOver::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
