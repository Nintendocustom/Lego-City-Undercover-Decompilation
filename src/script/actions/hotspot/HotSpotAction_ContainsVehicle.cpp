#include "script/actions/hotspot/HotSpotAction_ContainsVehicle.h"

const char* HotSpotAction_ContainsVehicle::GetName() const {
    return "ContainsVehicle";
}
void HotSpotAction_ContainsVehicle::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HOTSPOT);
    params.AddParam(SV_VEHICLE);
}
void HotSpotAction_ContainsVehicle::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
