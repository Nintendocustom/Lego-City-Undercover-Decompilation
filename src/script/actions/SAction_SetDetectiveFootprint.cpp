#include "script/actions/SAction_SetDetectiveFootprint.h"

const char* SAction_SetDetectiveFootprint::GetName() const {
    return "SetDetectiveFootprint";
}

void SAction_SetDetectiveFootprint::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
    params.AddParam(SV_TEXT);
}

void SAction_SetDetectiveFootprint::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
