#include "script/actions/CharacterAction/CharacterAction_FadeOut.h"

const char* CharacterAction_FadeOut::GetName() const {
    return "Character_FadeOut";
}

void CharacterAction_FadeOut::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_NUMBER);
}

void CharacterAction_FadeOut::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
