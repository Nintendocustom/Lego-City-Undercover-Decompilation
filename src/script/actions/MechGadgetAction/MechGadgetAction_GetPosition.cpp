#include "script/actions/MechGadgetAction/MechGadgetAction_GetPosition.h"

const char* MechGadgetAction_GetPosition::GetName() const {
    return "GetPosition";
}

void MechGadgetAction_GetPosition::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GADGET);
}

void MechGadgetAction_GetPosition::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_POSITION);
}
