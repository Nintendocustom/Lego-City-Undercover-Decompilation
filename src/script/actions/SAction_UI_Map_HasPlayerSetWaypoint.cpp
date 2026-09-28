#include "script/actions/SAction_UI_Map_HasPlayerSetWaypoint.h"

const char* SAction_UI_Map_HasPlayerSetWaypoint::GetName() const {
    return "UI_Map_HasPlayerSetWaypoint";
}

void SAction_UI_Map_HasPlayerSetWaypoint::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 1) {
        params.SanityCheck();
        params.AddParam(SV_CHARACTER);
        params.AddParam(SV_LOCATOR);
    } else {
        params.SanityCheck();
        params.AddParam(SV_CHARACTER);
    }
}

void SAction_UI_Map_HasPlayerSetWaypoint::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
