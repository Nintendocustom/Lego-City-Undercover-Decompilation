#include "script/actions/SAction_SlowMo.h"

const char* SAction_SlowMo::GetName() const {
    return "SlowMo";
}

void SAction_SlowMo::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_ANY);
}

void SAction_SlowMo::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
