#include "script/actions/SAction_KillTrafficVehicle.h"

const char* SAction_KillTrafficVehicle::GetName() const {
    return "KillTrafficVehicle";
}

void SAction_KillTrafficVehicle::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_KillTrafficVehicle::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
