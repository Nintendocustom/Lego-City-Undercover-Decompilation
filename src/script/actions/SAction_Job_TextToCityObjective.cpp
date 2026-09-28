#include "script/actions/SAction_Job_TextToCityObjective.h"

const char* SAction_Job_TextToCityObjective::GetName() const {
    return "CityObjective";
}

void SAction_Job_TextToCityObjective::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_Job_TextToCityObjective::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CITY_OBJECTIVE);
}
