#include "script/actions/SAction_SetHintIconDRC.h"

const char* SAction_SetHintIconDRC::GetName() const {
    return "SetHintIconDRC";
}

void SAction_SetHintIconDRC::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_SetHintIconDRC::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
