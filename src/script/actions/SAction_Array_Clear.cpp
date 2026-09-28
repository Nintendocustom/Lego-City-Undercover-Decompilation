#include "script/actions/SAction_Array_Clear.h"

const char* SAction_Array_Clear::GetName() const {
    return "Clear";
}

void SAction_Array_Clear::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ARRAY);
}

void SAction_Array_Clear::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
