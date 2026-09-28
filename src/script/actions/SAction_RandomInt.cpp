#include "script/actions/SAction_RandomInt.h"

const char* SAction_RandomInt::GetName() const {
    return "RandomInt";
}

void SAction_RandomInt::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
}

void SAction_RandomInt::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
