#include "script/actions/SAction_Array_NumberToArray.h"

const char* SAction_Array_NumberToArray::GetName() const {
    return "Array";
}

void SAction_Array_NumberToArray::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}

void SAction_Array_NumberToArray::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ARRAY);
}
