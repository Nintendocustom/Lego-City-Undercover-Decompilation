#include "script/actions/SAction_RandomFloat.h"

const char* SAction_RandomFloat::GetName() const {
    return "RandomFloat";
}

void SAction_RandomFloat::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
}

void SAction_RandomFloat::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
