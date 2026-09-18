#include "script/actions/SAction_OverrideTrafficDensity.h"

const char* SAction_OverrideTrafficDensity::GetName() const {
    return "OverrideTrafficDensity";
}

void SAction_OverrideTrafficDensity::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}

void SAction_OverrideTrafficDensity::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
