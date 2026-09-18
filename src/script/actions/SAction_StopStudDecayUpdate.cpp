#include "script/actions/SAction_StopStudDecayUpdate.h"

const char* SAction_StopStudDecayUpdate::GetName() const {
    return "StopStudDecayUpdate";
}

void SAction_StopStudDecayUpdate::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_StopStudDecayUpdate::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
