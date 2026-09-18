#include "script/actions/SAction_CityObjective_GetReportMax.h"

const char* SAction_CityObjective_GetReportMax::GetName() const {
    return "CityObjective_GetReportMax";
}

void SAction_CityObjective_GetReportMax::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HASH);
}

void SAction_CityObjective_GetReportMax::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
