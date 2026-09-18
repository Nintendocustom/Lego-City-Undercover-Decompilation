#include "script/actions/SAction_PositionConstructor.h"

const char* SAction_PositionConstructor::GetName() const {
    return "Position";
}

void SAction_PositionConstructor::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
}

void SAction_PositionConstructor::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_POSITION);
}
