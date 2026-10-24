#include "script/commands/SCmdEqual.h"

const char* SCmdEqual::GetName() const {
    return "SCmdEqual";
}

void SCmdEqual::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_UNKNOWN_1);
    params.AddParam(SV_UNKNOWN_1);
}

void SCmdEqual::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL, "*result");
}
