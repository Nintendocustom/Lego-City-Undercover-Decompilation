#include "script/actions/SAction_UI_HideLevelSummaryScreen.h"

const char* SAction_UI_HideLevelSummaryScreen::GetName() const {
    return "UI_HideLevelSummaryScreen";
}

void SAction_UI_HideLevelSummaryScreen::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_UI_HideLevelSummaryScreen::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
