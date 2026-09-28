#include "script/actions/SAction_CityObjective_GetReportCount.h"

const char* SAction_CityObjective_GetReportCount::GetName() const {
    return "CityObjective_GetReportCount";
}

void SAction_CityObjective_GetReportCount::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HASH);
}

void SAction_CityObjective_GetReportCount::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
