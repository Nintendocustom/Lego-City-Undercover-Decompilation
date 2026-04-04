#include "kestrel/script/actions/SAction_UI_Map_SetVehicleActive.h"

const char* SAction_UI_Map_SetVehicleActive::GetName() const {
    return "UI_Map_SetVehicleActive";
}
void SAction_UI_Map_SetVehicleActive::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_BOOL);
}
void SAction_UI_Map_SetVehicleActive::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
