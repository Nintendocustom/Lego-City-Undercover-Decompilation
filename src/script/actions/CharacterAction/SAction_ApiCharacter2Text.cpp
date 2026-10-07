#include "script/actions/CharacterAction/SAction_ApiCharacter2Text.h"

const char* SAction_ApiCharacter2Text::GetName() const {
    return "Text";
}

void SAction_ApiCharacter2Text::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void SAction_ApiCharacter2Text::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}
