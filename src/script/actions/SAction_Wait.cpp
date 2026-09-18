#include "script/actions/SAction_Wait.h"

const char* SAction_Wait::GetName() const {
    return "Wait";
}

void SAction_Wait::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
