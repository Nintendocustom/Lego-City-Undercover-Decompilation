#include "script/actions/SAction_NumberToText.h"

const char* SAction_NumberToText::GetName() const {
    return "ToText";
}

void SAction_NumberToText::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_TEXT);
}

void SAction_NumberToText::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}
