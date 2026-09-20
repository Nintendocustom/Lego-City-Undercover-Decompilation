#include "script/actions/CharacterAction/CharacterAction_MakeChaseCamFollow.h"

const char* CharacterAction_MakeChaseCamFollow::GetName() const {
    return "CharacterAction_MakeChaseCamFollow";
}

void CharacterAction_MakeChaseCamFollow::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_VEHICLE);
}

void CharacterAction_MakeChaseCamFollow::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
