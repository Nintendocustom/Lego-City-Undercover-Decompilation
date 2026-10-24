#include "script/commands/SCmdReturn.h"

const char* SCmdReturn::GetName() const {
    return "SCmdReturn";
}

void SCmdReturn::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SCmdReturn::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
