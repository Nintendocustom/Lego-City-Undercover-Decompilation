#include "script/actions/CharacterAction/CharacterAction_SetTaggable.h"

const char* CharacterAction_SetTaggable::GetName() const {
    return "CharacterAction_SetTaggable";
}

void CharacterAction_SetTaggable::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void CharacterAction_SetTaggable::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
