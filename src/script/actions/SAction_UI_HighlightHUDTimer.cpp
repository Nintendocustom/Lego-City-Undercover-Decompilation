#include "script/actions/SAction_UI_HighlightHUDTimer.h"

const char* SAction_UI_HighlightHUDTimer::GetName() const {
    return "UI_HighlightHUDTimer";
}

void SAction_UI_HighlightHUDTimer::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_UI_HighlightHUDTimer::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
