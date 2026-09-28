#include "script/actions/MechGadgetAction/MechGadgetAction_SetActive.h"

const char* MechGadgetAction_SetActive::GetName() const {
    return "SetActive";
}

void MechGadgetAction_SetActive::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GADGET);
    params.AddParam(SV_BOOL);
}

void MechGadgetAction_SetActive::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
