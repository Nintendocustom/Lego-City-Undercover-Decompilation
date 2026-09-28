#include "script/actions/SAction_GetSafePosition.h"

const char* SAction_GetSafePosition::GetName() const {
    return "GetSafePosition";
}

void SAction_GetSafePosition::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_POSITION);
    params.AddParam(SV_NUMBER);
}

void SAction_GetSafePosition::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
    params.AddParam(SV_POSITION);
}
