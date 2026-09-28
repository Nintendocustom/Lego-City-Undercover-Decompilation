#include "script/actions/SAction_UI_Map_AllowPlayerToSetWaypoints.h"

const char* SAction_UI_Map_AllowPlayerToSetWaypoints::GetName() const {
    return "UI_Map_AllowPlayerToSetWaypoints";
}

void SAction_UI_Map_AllowPlayerToSetWaypoints::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_UI_Map_AllowPlayerToSetWaypoints::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
