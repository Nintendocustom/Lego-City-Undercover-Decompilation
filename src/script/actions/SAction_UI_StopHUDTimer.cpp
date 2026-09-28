#include "script/actions/SAction_UI_StopHUDTimer.h"

const char* SAction_UI_StopHUDTimer::GetName() const {
    return "UI_StopHUDTimer";
}

void SAction_UI_StopHUDTimer::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_UI_StopHUDTimer::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
