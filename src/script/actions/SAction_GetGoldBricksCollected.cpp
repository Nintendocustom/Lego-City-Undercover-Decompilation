#include "script/actions/SAction_GetGoldBricksCollected.h"

const char* SAction_GetGoldBricksCollected::GetName() const {
    return "GetGoldBricksCollected";
}

void SAction_GetGoldBricksCollected::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_GetGoldBricksCollected::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
