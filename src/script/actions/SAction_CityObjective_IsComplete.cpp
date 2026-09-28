#include "script/actions/SAction_CityObjective_IsComplete.h"

const char* SAction_CityObjective_IsComplete::GetName() const {
    return "CityObjective_IsComplete";
}

void SAction_CityObjective_IsComplete::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CITY_OBJECTIVE);
}

void SAction_CityObjective_IsComplete::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
