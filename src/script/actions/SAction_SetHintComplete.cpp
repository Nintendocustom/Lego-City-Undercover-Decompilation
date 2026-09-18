#include "script/actions/SAction_SetHintComplete.h"

const char* SAction_SetHintComplete::GetName() const {
    return "SetHintComplete";
}

void SAction_SetHintComplete::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_SetHintComplete::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
