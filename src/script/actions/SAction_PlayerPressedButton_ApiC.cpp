#include "script/actions/SAction_PlayerPressedButton_ApiC.h"

const char* SAction_PlayerPressedButton_ApiC::GetName() const {
    return "PlayerPressedButton";
}

void SAction_PlayerPressedButton_ApiC::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_TEXT);
}

void SAction_PlayerPressedButton_ApiC::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
