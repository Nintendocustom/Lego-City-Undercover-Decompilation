#include "script/actions/SAction_UI_ShowScreen.h"

const char* SAction_UI_ShowScreen::GetName() const {
    return "UI_ShowScreen";
}

void SAction_UI_ShowScreen::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_BOOL);
}

void SAction_UI_ShowScreen::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
