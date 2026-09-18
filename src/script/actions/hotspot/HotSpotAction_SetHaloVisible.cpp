#include "script/actions/hotspot/HotSpotAction_SetHaloVisible.h"

const char* HotSpotAction_SetHaloVisible::GetName() const {
    return "HotSpot_SetHaloVisible";
}
void HotSpotAction_SetHaloVisible::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HOTSPOT);
    params.AddParam(SV_BOOL);
}
void HotSpotAction_SetHaloVisible::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
