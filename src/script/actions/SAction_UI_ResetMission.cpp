#include "script/actions/SAction_UI_ResetMission.h"

const char* SAction_UI_ResetMission::GetName() const {
    return "UI_ResetMission";
}

void SAction_UI_ResetMission::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_UI_ResetMission::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
