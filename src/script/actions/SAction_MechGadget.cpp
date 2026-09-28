#include "script/actions/SAction_MechGadget.h"

const char* SAction_MechGadget::GetName() const {
    return "Gadget";
}

void SAction_MechGadget::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_MechGadget::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GADGET);
}
