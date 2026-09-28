#include "script/actions/SAction_CityArray_Set.h"

const char* SAction_CityArray_Set::GetName() const {
    return "CityArray_Set";
}

void SAction_CityArray_Set::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CITY_ARRAY);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_UNKNOWN_1);
}

void SAction_CityArray_Set::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
