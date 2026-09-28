#include "script/actions/CharacterAction/CharacterAction_SetNoTerrainCollision.h"

const char* CharacterAction_SetNoTerrainCollision::GetName() const {
    return "SetNoTerrainCollision";
}

void CharacterAction_SetNoTerrainCollision::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void CharacterAction_SetNoTerrainCollision::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
