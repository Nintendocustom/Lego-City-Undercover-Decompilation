#include "script/actions/SAction_CreateAICharacter.h"

const char* SAction_CreateAICharacter::GetName() const {
    return "CreateAICharacter";
}

void SAction_CreateAICharacter::GetInputs(SCmdParams& params) const {
    params.SanityCheck();

    params.AddParam(SV_HASH);
    params.AddParam(SV_HASH);
    params.AddParam(SV_POSITION);
    if (m_InputVariant != 0) {
        params.AddParam(SV_NUMBER);
    }
}

void SAction_CreateAICharacter::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}
