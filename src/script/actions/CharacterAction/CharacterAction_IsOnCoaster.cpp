#include "script/actions/CharacterAction/CharacterAction_IsOnCoaster.h"

const char* CharacterAction_IsOnCoaster::GetName() const {
    return "CharacterAction_IsOnCoaster";
}

void CharacterAction_IsOnCoaster::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_IsOnCoaster::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
