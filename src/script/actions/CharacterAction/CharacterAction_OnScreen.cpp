#include "script/actions/CharacterAction/CharacterAction_OnScreen.h"

const char* CharacterAction_OnScreen::GetName() const {
    return "OnScreen";
}

void CharacterAction_OnScreen::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_OnScreen::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
