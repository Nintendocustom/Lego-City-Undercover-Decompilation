#include "script/actions/SAction_CityArray_Remove.h"

const char* SAction_CityArray_Remove::GetName() const {
    return "CityArray_Remove";
}

void SAction_CityArray_Remove::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CITY_ARRAY);
    params.AddParam(SV_NUMBER);
}

void SAction_CityArray_Remove::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
