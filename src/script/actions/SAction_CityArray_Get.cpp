#include "script/actions/SAction_CityArray_Get.h"

const char* SAction_CityArray_Get::GetName() const {
    return "CityArray_Get";
}

void SAction_CityArray_Get::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CITY_ARRAY);
    params.AddParam(SV_NUMBER);
}

void SAction_CityArray_Get::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_UNKNOWN_1);
}
