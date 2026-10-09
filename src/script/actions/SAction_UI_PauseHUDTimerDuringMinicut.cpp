#include "script/actions/SAction_UI_PauseHUDTimerDuringMinicut.h"

const char* SAction_UI_PauseHUDTimerDuringMinicut::GetName() const {
    return "UI_PauseHUDTimerDuringMinicut";
}

void SAction_UI_PauseHUDTimerDuringMinicut::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_UI_PauseHUDTimerDuringMinicut::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}