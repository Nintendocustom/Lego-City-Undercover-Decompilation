#include "script/actions/SAction_UI_IsEndMissionComplete.h"

const char* SAction_UI_IsEndMissionComplete::GetName() const {
    return "UI_IsEndMissionComplete";
}

void SAction_UI_IsEndMissionComplete::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_UI_IsEndMissionComplete::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
