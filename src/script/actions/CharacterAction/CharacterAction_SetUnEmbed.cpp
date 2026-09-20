#include "script/actions/CharacterAction/CharacterAction_SetUnEmbed.h"

const char* CharacterAction_SetUnEmbed::GetName() const {
    return "CharacterAction_SetUnEmbed";
}

void CharacterAction_SetUnEmbed::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void CharacterAction_SetUnEmbed::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
