#include "script/actions/CharacterAction/CharacterAction_SetArrestable.h"

const char* CharacterAction_SetArrestable::GetName() const {
    return "CharacterAction_SetArrestable";
}

void CharacterAction_SetArrestable::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void CharacterAction_SetArrestable::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
