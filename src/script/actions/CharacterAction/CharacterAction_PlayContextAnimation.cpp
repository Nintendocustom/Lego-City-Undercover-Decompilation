#include "script/actions/CharacterAction/CharacterAction_PlayContextAnimation.h"

const char* CharacterAction_PlayContextAnimation::GetName() const {
    return "CharacterAction_PlayContextAnimation";
}

void CharacterAction_PlayContextAnimation::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_TEXT);
    params.AddParam(SV_NUMBER);
}

void CharacterAction_PlayContextAnimation::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
