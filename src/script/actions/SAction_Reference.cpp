#include "script/actions/SAction_Reference.h"

const char* SAction_Reference::GetName() const {
    return "Reference";
}

void SAction_Reference::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_ANY);
}

void SAction_Reference::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
