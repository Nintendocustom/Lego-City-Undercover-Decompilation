#include "script/actions/MechGadgetAction/MechGadgetAction_JumpToComplete.h"

const char* MechGadgetAction_JumpToComplete::GetName() const {
    return "JumpToComplete";
}

void MechGadgetAction_JumpToComplete::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GADGET);
}

void MechGadgetAction_JumpToComplete::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
