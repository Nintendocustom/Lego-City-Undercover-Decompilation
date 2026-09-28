#include "script/actions/SAction_Distance.h"

const char* SAction_Distance::GetName() const {
    return "Distance";
}

void SAction_Distance::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_POSITION);
    params.AddParam(SV_POSITION);
}

void SAction_Distance::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
