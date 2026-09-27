#include "script/actions/MechGadgetAction/MechGadgetAction_HasFinished.h"

const char* MechGadgetAction_HasFinished::GetName() const {
    return "HasFinished";
}

void MechGadgetAction_HasFinished::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GADGET);
}

void MechGadgetAction_HasFinished::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
