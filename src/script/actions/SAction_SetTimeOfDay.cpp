#include "script/actions/SAction_SetTimeOfDay.h"

const char* SAction_SetTimeOfDay::GetName() const {
    return "SetTimeOfDay";
}

void SAction_SetTimeOfDay::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_SetTimeOfDay::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
