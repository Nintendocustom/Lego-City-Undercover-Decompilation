#include "script/actions/SAction_UI_EndMission.h"

const char* SAction_UI_EndMission::GetName() const {
    return "UI_EndMission";
}

void SAction_UI_EndMission::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_BOOL);
}

void SAction_UI_EndMission::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
