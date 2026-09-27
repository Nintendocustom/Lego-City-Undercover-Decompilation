#include "script/actions/MechGadgetAction/MechGadgetAction_GetDirection.h"

const char* MechGadgetAction_GetDirection::GetName() const {
    return "GetDirection";
}

void MechGadgetAction_GetDirection::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GADGET);
}

void MechGadgetAction_GetDirection::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
