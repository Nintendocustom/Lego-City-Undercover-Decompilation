#include "script/actions/SAction_UI_StartMission.h"

const char* SAction_UI_StartMission::GetName() const {
    return "UI_StartMission";
}

void SAction_UI_StartMission::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_UI_StartMission::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
