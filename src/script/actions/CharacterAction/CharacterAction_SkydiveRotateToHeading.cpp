#include "script/actions/CharacterAction/CharacterAction_SkydiveRotateToHeading.h"

const char* CharacterAction_SkydiveRotateToHeading::GetName() const {
    return "CharacterAction_SkydiveRotateToHeading";
}

void CharacterAction_SkydiveRotateToHeading::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
}

void CharacterAction_SkydiveRotateToHeading::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
