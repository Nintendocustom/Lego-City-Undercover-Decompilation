#include "script/actions/MechGadgetAction/MechGadgetAction_MechGadgetToText.h"

const char* MechGadgetAction_MechGadgetToText::GetName() const {
    return "Text";
}

void MechGadgetAction_MechGadgetToText::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GADGET);
}

void MechGadgetAction_MechGadgetToText::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}
