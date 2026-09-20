#include "script/actions/CharacterAction/CharacterAction_FaceLocator.h"

const char* CharacterAction_FaceLocator::GetName() const {
    return "CharacterAction_FaceLocator";
}

void CharacterAction_FaceLocator::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_LOCATOR);
}

void CharacterAction_FaceLocator::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
