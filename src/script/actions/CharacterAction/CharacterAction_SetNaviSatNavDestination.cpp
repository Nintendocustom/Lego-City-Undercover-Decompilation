#include "script/actions/CharacterAction/CharacterAction_SetNaviSatNavDestination.h"

const char* CharacterAction_SetNaviSatNavDestination::GetName() const {
    return "Character_SetNaviSatNavDestination";
}

void CharacterAction_SetNaviSatNavDestination::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_UNKNOWN_1);
    params.AddParam(SV_NAVI_MAP);
    params.AddParam(SV_ANY);
}

void CharacterAction_SetNaviSatNavDestination::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
