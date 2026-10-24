#include "script/commands/SCmdBeginState.h"

const char* SCmdBeginState::GetName() const {
    return "SCmdBeginState";
}

void SCmdBeginState::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SCmdBeginState::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
