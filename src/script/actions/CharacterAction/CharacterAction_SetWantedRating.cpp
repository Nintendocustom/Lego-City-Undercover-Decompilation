#include "script/actions/CharacterAction/CharacterAction_SetWantedRating.h"

const char* CharacterAction_SetWantedRating::GetName() const {
    return "Character_SetWantedRating";
}

void CharacterAction_SetWantedRating::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_NUMBER);
}

void CharacterAction_SetWantedRating::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
