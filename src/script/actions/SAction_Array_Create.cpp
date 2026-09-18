#include "script/actions/SAction_Array_Create.h"

const char* SAction_Array_Create::GetName() const {
    return "CreateArray";
}

void SAction_Array_Create::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_Array_Create::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ARRAY);
}
