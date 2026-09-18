#include "script/actions/SAction_Array_Size.h"

const char* SAction_Array_Size::GetName() const {
    return "Size";
}

void SAction_Array_Size::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ARRAY);
}

void SAction_Array_Size::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
