#include "script/actions/hotspot/HotSpotAction_SetIcon.h"

const char* HotSpotAction_SetIcon::GetName() const {
    return "HotSpot_SetIcon";
}
void HotSpotAction_SetIcon::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HOTSPOT);
    params.AddParam(SV_TEXT);
}
void HotSpotAction_SetIcon::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
