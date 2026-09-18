#include "script/actions/SAction_CityObjective_IsHidden.h"

const char* SAction_CityObjective_IsHidden::GetName() const {
    return "CityObjective_IsHidden";
}

void SAction_CityObjective_IsHidden::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CITY_OBJECTIVE);
}

void SAction_CityObjective_IsHidden::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
