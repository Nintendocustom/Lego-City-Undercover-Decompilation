#include "script/actions/CharacterAction/CharacterAction_FadeIn.h"

const char* CharacterAction_FadeIn::GetName() const {
    return "CharacterAction_FadeIn";
}

void CharacterAction_FadeIn::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_NUMBER);
}

void CharacterAction_FadeIn::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
