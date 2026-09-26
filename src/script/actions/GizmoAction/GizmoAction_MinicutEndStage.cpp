#include "script/actions/GizmoAction/GizmoAction_MinicutEndStage.h"

const char* GizmoAction_MinicutEndStage::GetName() const {
    return "MinicutEndStage";
}

void GizmoAction_MinicutEndStage::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
    params.AddParam(SV_NUMBER);
}

void GizmoAction_MinicutEndStage::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
