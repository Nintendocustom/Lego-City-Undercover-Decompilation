#include "script/actions/SAction_PlayerPressedButton.h"

const char* SAction_PlayerPressedButton::GetName() const {
    return "PlayerPressedButton";
}

void SAction_PlayerPressedButton::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_PlayerPressedButton::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
