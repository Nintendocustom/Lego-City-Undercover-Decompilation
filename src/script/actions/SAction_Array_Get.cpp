#include "script/actions/SAction_Array_Get.h"

const char* SAction_Array_Get::GetName() const {
    return "Get";
}

void SAction_Array_Get::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ARRAY);
    params.AddParam(SV_NUMBER);
}

void SAction_Array_Get::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_UNKNOWN_1);
}
