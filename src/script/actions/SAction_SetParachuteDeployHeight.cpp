#include "script/actions/SAction_SetParachuteDeployHeight.h"

const char* SAction_SetParachuteDeployHeight::GetName() const {
    return "SetParachuteDeployHeight";
}

void SAction_SetParachuteDeployHeight::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}

void SAction_SetParachuteDeployHeight::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
