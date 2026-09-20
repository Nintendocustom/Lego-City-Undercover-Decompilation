#include "script/actions/CharacterAction/CharacterAction_DistanceXZ.h"

const char* CharacterAction_DistanceXZ::GetName() const {
    return "CharacterAction_DistanceXZ";
}

void CharacterAction_DistanceXZ::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_POSITION);
}

void CharacterAction_DistanceXZ::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
