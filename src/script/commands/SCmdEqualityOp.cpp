#include "script/commands/SCmdEqualityOp.h"

SCmdEqualityOp::SCmdEqualityOp(ScriptFile* file, int line) : ScriptCommand(file, line) {}

void SCmdEqualityOp::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
}

void SCmdEqualityOp::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL, "*result");
}
