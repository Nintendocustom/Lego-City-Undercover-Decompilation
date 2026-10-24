#include "script/commands/SCmdAssign.h"

const char* SCmdAssign::GetName() const {
    return "SCmdCall";
}

void SCmdAssign::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SCmdAssign::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
