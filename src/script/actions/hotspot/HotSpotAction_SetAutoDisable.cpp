#include "script/actions/hotspot/HotSpotAction_SetAutoDisable.h"

const char* HotSpotAction_SetAutoDisable::GetName() const {
    return "HotSpot_SetAutoDisable";
}
void HotSpotAction_SetAutoDisable::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HOTSPOT);
    params.AddParam(SV_BOOL);
}
void HotSpotAction_SetAutoDisable::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
