#include "script/actions/SAction_AreaToPosition.h"

const char* SAction_AreaToPosition::GetName() const {
    return "Position";
}

void SAction_AreaToPosition::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_AREA);
}

void SAction_AreaToPosition::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_POSITION);
}
