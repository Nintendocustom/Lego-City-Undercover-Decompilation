#include "script/actions/SAction_UI_ShowJoinPlayerScreen.h"

const char* SAction_UI_ShowJoinPlayerScreen::GetName() const {
    return "UI_ShowJoinPlayerScreen";
}

void SAction_UI_ShowJoinPlayerScreen::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
    params.AddParam(SV_TEXT);
}

void SAction_UI_ShowJoinPlayerScreen::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
