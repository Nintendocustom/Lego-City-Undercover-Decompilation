#include "script/commands/SCmdAddText.h"

const char* SCmdAddText::GetName() const {
    return "SCmdAddText";
}

void SCmdAddText::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_TEXT);
}

void SCmdAddText::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT, "*result");
}
