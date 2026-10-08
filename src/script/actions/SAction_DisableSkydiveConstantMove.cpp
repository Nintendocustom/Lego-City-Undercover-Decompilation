#include "script/actions/SAction_DisableSkydiveConstantMove.h"

const char* SAction_DisableSkydiveConstantMove::GetName() const {
    return "DisableSkydiveConstantMove";
}

void SAction_DisableSkydiveConstantMove::GetInputs(SCmdParams& params) const {
    if (m_InputVariant) {
        params.AddParam(SV_CHARACTER);
    } else {
        params.SanityCheck();
    }
}

void SAction_DisableSkydiveConstantMove::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}