#include "script/actions/SAction_CityArray_CreateCopy.h"

const char* SAction_CityArray_CreateCopy::GetName() const {
    return "CityArray_CreateCopy";
}

void SAction_CityArray_CreateCopy::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CITY_ARRAY);
}

void SAction_CityArray_CreateCopy::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CITY_ARRAY);
}
