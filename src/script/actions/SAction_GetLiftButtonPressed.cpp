#include "script/actions/SAction_GetLiftButtonPressed.h"

const char* SAction_GetLiftButtonPressed::GetName() const {
    return "GetLiftButtonPressed";
}

void SAction_GetLiftButtonPressed::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_GetLiftButtonPressed::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
