#include "script/commands/SCmdYield.h"

const char* SCmdYield::GetName() const {
    return "SCmdYield";
}

void SCmdYield::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SCmdYield::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
