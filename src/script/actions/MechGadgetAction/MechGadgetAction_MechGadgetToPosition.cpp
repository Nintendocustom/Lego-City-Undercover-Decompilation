#include "script/actions/MechGadgetAction/MechGadgetAction_MechGadgetToPosition.h"

const char* MechGadgetAction_MechGadgetToPosition::GetName() const {
    return "Position";
}

void MechGadgetAction_MechGadgetToPosition::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GADGET);
}

void MechGadgetAction_MechGadgetToPosition::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_POSITION);
}
