#include "script/actions/MechGadgetAction/MechGadgetAction_Reset.h"

const char* MechGadgetAction_Reset::GetName() const {
    return "Reset";
}

void MechGadgetAction_Reset::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GADGET);
}

void MechGadgetAction_Reset::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
