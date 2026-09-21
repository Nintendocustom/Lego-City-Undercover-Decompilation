#include "script/actions/CharacterAction/CharacterAction_AllowParkour.h"

const char* CharacterAction_AllowParkour::GetName() const {
    return "Character_AllowParkour";
}

void CharacterAction_AllowParkour::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void CharacterAction_AllowParkour::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
