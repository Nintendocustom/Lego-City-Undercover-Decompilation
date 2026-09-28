#include "script/actions/SAction_GetGoldBrickTotal.h"

const char* SAction_GetGoldBrickTotal::GetName() const {
    return "GetGoldBrickTotal";
}

void SAction_GetGoldBrickTotal::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_GetGoldBrickTotal::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
