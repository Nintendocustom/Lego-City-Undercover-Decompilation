#include "script/actions/CharacterAction/CharacterAction_EndSkydive.h"

const char* CharacterAction_EndSkydive::GetName() const {
    return "Character_EndSkydive";
}

void CharacterAction_EndSkydive::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_EndSkydive::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
