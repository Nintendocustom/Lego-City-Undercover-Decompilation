#include "script/actions/SAction_Array_Remove.h"

const char* SAction_Array_Remove::GetName() const {
    return "Remove";
}

void SAction_Array_Remove::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ARRAY);
    params.AddParam(SV_NUMBER);
}

void SAction_Array_Remove::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
