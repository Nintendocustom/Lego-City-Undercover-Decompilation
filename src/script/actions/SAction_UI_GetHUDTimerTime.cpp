#include "script/actions/SAction_UI_GetHUDTimerTime.h"

const char* SAction_UI_GetHUDTimerTime::GetName() const {
    return "UI_GetHUDTimerTime";
}

void SAction_UI_GetHUDTimerTime::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_UI_GetHUDTimerTime::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
