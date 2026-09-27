#include "script/actions/MechGadgetAction/MechGadgetAction_GetOutput.h"

const char* MechGadgetAction_GetOutput::GetName() const {
    return "GetOutput";
}

void MechGadgetAction_GetOutput::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GADGET);
    params.AddParam(SV_NUMBER);
}

void MechGadgetAction_GetOutput::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
