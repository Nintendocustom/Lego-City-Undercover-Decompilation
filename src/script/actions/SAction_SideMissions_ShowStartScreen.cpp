#include "script/actions/SAction_SideMissions_ShowStartScreen.h"

const char* SAction_SideMissions_ShowStartScreen::GetName() const {
    return "SideMissions_ShowStartScreen";
}

void SAction_SideMissions_ShowStartScreen::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
    params.AddParam(SV_ANY);
}

void SAction_SideMissions_ShowStartScreen::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
