#include "script/commands/SCmdNotEqual.h"

const char* SCmdNotEqual::GetName() const {
    return "SCmdNotEqual";
}

void SCmdNotEqual::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_UNKNOWN_1);
    params.AddParam(SV_UNKNOWN_1);
}

void SCmdNotEqual::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL, "*result");
}
