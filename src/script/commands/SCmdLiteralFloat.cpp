#include "script/commands/SCmdLiteralFloat.h"

const char* SCmdLiteralFloat::GetName() const {
    return "SCmdLiteralFloat";
}

void SCmdLiteralFloat::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SCmdLiteralFloat::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER, "*literal");
}
