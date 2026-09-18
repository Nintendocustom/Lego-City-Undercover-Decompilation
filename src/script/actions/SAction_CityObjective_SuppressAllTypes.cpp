#include "script/actions/SAction_CityObjective_SuppressAllTypes.h"

const char* SAction_CityObjective_SuppressAllTypes::GetName() const {
    return "CityObjective_SuppressAllTypes";
}

void SAction_CityObjective_SuppressAllTypes::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_CityObjective_SuppressAllTypes::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
