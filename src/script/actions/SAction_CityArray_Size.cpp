#include "script/actions/SAction_CityArray_Size.h"

const char* SAction_CityArray_Size::GetName() const {
    return "CityArray_Size";
}

void SAction_CityArray_Size::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CITY_ARRAY);
}

void SAction_CityArray_Size::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
