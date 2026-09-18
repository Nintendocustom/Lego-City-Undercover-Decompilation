#include "script/actions/SAction_CityArray_Clear.h"

const char* SAction_CityArray_Clear::GetName() const {
    return "CityArray_Clear";
}

void SAction_CityArray_Clear::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CITY_ARRAY);
}

void SAction_CityArray_Clear::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
