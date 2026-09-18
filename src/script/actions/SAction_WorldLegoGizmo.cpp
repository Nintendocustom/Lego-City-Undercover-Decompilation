#include "script/actions/SAction_WorldLegoGizmo.h"

const char* SAction_WorldLegoGizmo::GetName() const {
    return "Gizmo";
}

void SAction_WorldLegoGizmo::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_WORLD_LEVEL);
}

void SAction_WorldLegoGizmo::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}
