#include "script/actions/SAction_CityArray_Add.h"

const char* SAction_CityArray_Add::GetName() const {
    return "CityArray_Add";
}

void SAction_CityArray_Add::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CITY_ARRAY);
    params.AddParam(SV_UNKNOWN_1);
}

void SAction_CityArray_Add::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
