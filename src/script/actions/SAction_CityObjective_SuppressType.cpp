#include "script/actions/SAction_CityObjective_SuppressType.h"

const char* SAction_CityObjective_SuppressType::GetName() const {
    return "CityObjective_SuppressAllTypes";
}

void SAction_CityObjective_SuppressType::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HASH);
    params.AddParam(SV_BOOL);
}

void SAction_CityObjective_SuppressType::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
