#include "script/actions/hotspot/HotSpotAction_SetActive.h"

const char* HotSpotAction_SetActive::GetName() const {
    return "HotSpot_SetActive";
}
void HotSpotAction_SetActive::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HOTSPOT);
    params.AddParam(SV_BOOL);
}
void HotSpotAction_SetActive::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
