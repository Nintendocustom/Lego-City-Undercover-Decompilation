#include "script/actions/SAction_AllowCharacterSwap.h"

const char* SAction_AllowCharacterSwap::GetName() const {
    return "AllowCharacterSwap";
}

void SAction_AllowCharacterSwap::GetInputs(SCmdParams& params) const {
    uint8_t InputVariant = m_InputVariant;

    params.SanityCheck();
    params.AddParam(SV_BOOL);
    if (InputVariant) {
        params.AddParam(SV_CHARACTER);
    }
}

void SAction_AllowCharacterSwap::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}