#include "script/actions/SAction_CreateAIApiVehicle.h"

const char* SAction_CreateAIApiVehicle::GetName() const {
    return "CreateAIVehicle";
}

void SAction_CreateAIApiVehicle::GetInputs(SCmdParams& params) const {
    params.SanityCheck();

    params.AddParam(SV_HASH);
    params.AddParam(SV_HASH);
    params.AddParam(SV_POSITION);
    if (m_InputVariant == 1) {
        params.AddParam(SV_NUMBER);
    } else if (m_InputVariant == 2) {
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_HASH);
    }
}

void SAction_CreateAIApiVehicle::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}
