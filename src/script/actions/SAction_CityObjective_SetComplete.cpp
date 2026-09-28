#include "script/actions/SAction_CityObjective_SetComplete.h"

const char* SAction_CityObjective_SetComplete::GetName() const {
    return "CityObjective_SetComplete";
}

void SAction_CityObjective_SetComplete::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CITY_OBJECTIVE);
}

void SAction_CityObjective_SetComplete::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
