#include "script/actions/VehicleAction/VehicleAction_OnScreen.h"

const char* VehicleAction_OnScreen::GetName() const {
    return "OnScreen";
}

void VehicleAction_OnScreen::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_OnScreen::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
