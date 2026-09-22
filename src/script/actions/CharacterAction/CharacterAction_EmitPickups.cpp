#include "script/actions/CharacterAction/CharacterAction_EmitPickups.h"

const char* CharacterAction_EmitPickups::GetName() const {
    return "EmitPickups";
}

void CharacterAction_EmitPickups::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_BOOL);
}

void CharacterAction_EmitPickups::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
