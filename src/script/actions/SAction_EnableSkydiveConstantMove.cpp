#include "script/actions/SAction_EnableSkydiveConstantMove.h"

const char* SAction_EnableSkydiveConstantMove::GetName() const {
    return "EnableSkydiveConstantMove";
}

void SAction_EnableSkydiveConstantMove::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
    if (m_InputVariant) {
        params.AddParam(SV_CHARACTER);
    }
}

void SAction_EnableSkydiveConstantMove::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}