#include "script/actions/SAction_SuppressHints.h"

const char* SAction_SuppressHints::GetName() const {
    return "SuppressHints";
}

void SAction_SuppressHints::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}

void SAction_SuppressHints::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
