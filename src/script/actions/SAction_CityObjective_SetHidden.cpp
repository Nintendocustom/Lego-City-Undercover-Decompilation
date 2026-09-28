#include "script/actions/SAction_CityObjective_SetHidden.h"

const char* SAction_CityObjective_SetHidden::GetName() const {
    return "CityObjective_SetHidden";
}

void SAction_CityObjective_SetHidden::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CITY_OBJECTIVE);
    params.AddParam(SV_BOOL);
}

void SAction_CityObjective_SetHidden::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
