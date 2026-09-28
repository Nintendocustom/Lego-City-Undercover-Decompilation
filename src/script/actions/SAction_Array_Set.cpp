#include "script/actions/SAction_Array_Set.h"

const char* SAction_Array_Set::GetName() const {
    return "Set";
}

void SAction_Array_Set::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ARRAY);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_UNKNOWN_1);
}

void SAction_Array_Set::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
