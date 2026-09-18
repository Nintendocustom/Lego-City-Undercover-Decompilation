#include "script/actions/SAction_Array_Add.h"

const char* SAction_Array_Add::GetName() const {
    return "Add";
}

void SAction_Array_Add::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ARRAY);
    params.AddParam(SV_UNKNOWN_1);
}

void SAction_Array_Add::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
