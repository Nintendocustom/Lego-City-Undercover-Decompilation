#include "script/commands/SCmdNegate.h"

const char* SCmdNegate::GetName() const {
    return "SCmdNegate";
}

void SCmdNegate::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}

void SCmdNegate::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER, "*result");
}
