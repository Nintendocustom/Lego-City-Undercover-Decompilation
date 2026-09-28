#include "script/actions/SAction_LegoGizmo.h"

const char* SAction_LegoGizmo::GetName() const {
    return "Gizmo";
}

void SAction_LegoGizmo::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_LegoGizmo::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}
