#include "script/actions/SAction_UI_ShowLevelSummaryScreen.h"

const char* SAction_UI_ShowLevelSummaryScreen::GetName() const {
    return "UI_ShowLevelSummaryScreen";
}

void SAction_UI_ShowLevelSummaryScreen::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_TEXT);
    params.AddParam(SV_ANY);
}

void SAction_UI_ShowLevelSummaryScreen::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
