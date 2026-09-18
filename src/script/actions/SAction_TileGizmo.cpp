#include "script/actions/SAction_TileGizmo.h"

const char* SAction_TileGizmo::GetName() const {
    return "TileGizmo";
}

void SAction_TileGizmo::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_WORLD_LEVEL);
}

void SAction_TileGizmo::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}
