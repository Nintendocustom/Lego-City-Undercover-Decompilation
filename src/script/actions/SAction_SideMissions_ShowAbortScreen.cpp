#include "script/actions/SAction_SideMissions_ShowAbortScreen.h"

const char* SAction_SideMissions_ShowAbortScreen::GetName() const {
    return "SideMissions_ShowAbortScreen";
}

void SAction_SideMissions_ShowAbortScreen::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
    params.AddParam(SV_ANY);
}

void SAction_SideMissions_ShowAbortScreen::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
