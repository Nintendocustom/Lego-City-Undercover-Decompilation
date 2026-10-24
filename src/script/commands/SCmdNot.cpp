#include "script/commands/SCmdNot.h"

const char* SCmdNot::GetName() const {
    return "SCmdNot";
}

void SCmdNot::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SCmdNot::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL, "*result");
}
