#include "script/actions/SAction_LockFastTravel.h"

const char* SAction_LockFastTravel::GetName() const {
    return "LockFastTravel";
}

void SAction_LockFastTravel::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_LockFastTravel::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
