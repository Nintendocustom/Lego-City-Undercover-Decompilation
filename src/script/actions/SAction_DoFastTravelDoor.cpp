#include "script/actions/SAction_DoFastTravelDoor.h"

const char* SAction_DoFastTravelDoor::GetName() const {
    return "DoFastTravelDoor";
}

void SAction_DoFastTravelDoor::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_GIZMO);
}

void SAction_DoFastTravelDoor::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
