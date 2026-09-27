#include "script/actions/MechGadgetAction/MechGadgetAction_BlowUp.h"

const char* MechGadgetAction_BlowUp::GetName() const {
    return "BlowUp";
}

void MechGadgetAction_BlowUp::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GADGET);
}

void MechGadgetAction_BlowUp::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
