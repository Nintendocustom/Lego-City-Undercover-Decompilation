#include "script/actions/CharacterAction/CharacterAction_ConstrainSkydiveToSpline.h"

const char* CharacterAction_ConstrainSkydiveToSpline::GetName() const {
    return "CharacterAction_ConstrainSkydiveToSpline";
}

void CharacterAction_ConstrainSkydiveToSpline::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_TEXT);
    params.AddParam(SV_NUMBER);
}

void CharacterAction_ConstrainSkydiveToSpline::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
