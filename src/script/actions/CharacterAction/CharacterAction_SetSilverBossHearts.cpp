#include "script/actions/CharacterAction/CharacterAction_SetSilverBossHearts.h"

const char* CharacterAction_SetSilverBossHearts::GetName() const {
    return "CharacterAction_SetSilverBossHearts";
}

void CharacterAction_SetSilverBossHearts::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void CharacterAction_SetSilverBossHearts::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
