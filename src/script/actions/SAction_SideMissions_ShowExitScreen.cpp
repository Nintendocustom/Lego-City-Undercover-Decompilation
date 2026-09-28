#include "script/actions/SAction_SideMissions_ShowExitScreen.h"

const char* SAction_SideMissions_ShowExitScreen::GetName() const {
    return "SideMissions_ShowExitScreen";
}

void SAction_SideMissions_ShowExitScreen::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
    params.AddParam(SV_ANY);
}

void SAction_SideMissions_ShowExitScreen::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
