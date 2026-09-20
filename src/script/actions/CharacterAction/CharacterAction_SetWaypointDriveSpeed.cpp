#include "script/actions/CharacterAction/CharacterAction_SetWaypointDriveSpeed.h"

const char* CharacterAction_SetWaypointDriveSpeed::GetName() const {
    return "CharacterAction_SetWaypointDriveSpeed";
}

void CharacterAction_SetWaypointDriveSpeed::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_LOCATOR);
    params.AddParam(SV_NUMBER);
}

void CharacterAction_SetWaypointDriveSpeed::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
