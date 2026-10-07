#include "script/actions/CharacterAction/SAction_ApiCharacter2Position.h"

const char* SAction_ApiCharacter2Position::GetName() const {
    return "Position";
}

void SAction_ApiCharacter2Position::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void SAction_ApiCharacter2Position::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_POSITION);
}
