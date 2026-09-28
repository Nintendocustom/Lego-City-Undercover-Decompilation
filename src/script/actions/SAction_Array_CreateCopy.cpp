#include "script/actions/SAction_Array_CreateCopy.h"

const char* SAction_Array_CreateCopy::GetName() const {
    return "CreateCopy";
}

void SAction_Array_CreateCopy::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ARRAY);
}

void SAction_Array_CreateCopy::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ARRAY);
}
