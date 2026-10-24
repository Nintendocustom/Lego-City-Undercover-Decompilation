#include "script/commands/SCmdIf.h"

const char* SCmdIf::GetName() const {
    return "SCmdIf";
}

void SCmdIf::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SCmdIf::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
