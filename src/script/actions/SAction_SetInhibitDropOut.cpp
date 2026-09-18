#include "script/actions/SAction_SetInhibitDropOut.h"

const char* SAction_SetInhibitDropOut::GetName() const {
    return "SetInhibitDropOut";
}

void SAction_SetInhibitDropOut::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_SetInhibitDropOut::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
