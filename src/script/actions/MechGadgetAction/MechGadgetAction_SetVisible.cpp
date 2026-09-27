#include "script/actions/MechGadgetAction/MechGadgetAction_SetVisible.h"

const char* MechGadgetAction_SetVisible::GetName() const {
    return "SetVisible";
}

void MechGadgetAction_SetVisible::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GADGET);
    params.AddParam(SV_BOOL);
}

void MechGadgetAction_SetVisible::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
