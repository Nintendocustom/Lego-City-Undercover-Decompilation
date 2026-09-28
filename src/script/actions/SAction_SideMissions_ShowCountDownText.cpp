#include "script/actions/SAction_SideMissions_ShowCountDownText.h"

const char* SAction_SideMissions_ShowCountDownText::GetName() const {
    return "SideMissions_ShowCountDownText";
}

void SAction_SideMissions_ShowCountDownText::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ANY);
}

void SAction_SideMissions_ShowCountDownText::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
