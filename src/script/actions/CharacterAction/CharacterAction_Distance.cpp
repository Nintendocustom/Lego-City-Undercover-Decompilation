#include "script/actions/CharacterAction/CharacterAction_Distance.h"

const char* CharacterAction_Distance::GetName() const {
    return "DistanceTo";
}

void CharacterAction_Distance::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_POSITION);
}

void CharacterAction_Distance::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
