#include "script/actions/CharacterAction/CharacterAction_SetNoTagRelease.h"

const char* CharacterAction_SetNoTagRelease::GetName() const {
    return "SetNoTagRelease";
}

void CharacterAction_SetNoTagRelease::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void CharacterAction_SetNoTagRelease::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
