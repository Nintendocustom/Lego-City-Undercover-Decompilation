#include "script/actions/SAction_CityArray_NumberToCityArray.h"

const char* SAction_CityArray_NumberToCityArray::GetName() const {
    return "CityArray";
}

void SAction_CityArray_NumberToCityArray::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}

void SAction_CityArray_NumberToCityArray::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CITY_ARRAY);
}
