#include "script/actions/CharacterAction/CharacterAction_SetIgnoreCamVolumes.h"

const char* CharacterAction_SetIgnoreCamVolumes::GetName() const {
    return "SetIgnoreCamVolumes";
}

void CharacterAction_SetIgnoreCamVolumes::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void CharacterAction_SetIgnoreCamVolumes::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
