#include "script/actions/SAction_CityArray_Create.h"

const char* SAction_CityArray_Create::GetName() const {
    return "CityArray_Create";
}

void SAction_CityArray_Create::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_CityArray_Create::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CITY_ARRAY);
}
