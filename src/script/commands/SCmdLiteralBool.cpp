#include "script/commands/SCmdLiteralBool.h"

const char* SCmdLiteralBool::GetName() const {
    return "SCmdLiteralBool";
}

void SCmdLiteralBool::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SCmdLiteralBool::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL, "*literal");
}
