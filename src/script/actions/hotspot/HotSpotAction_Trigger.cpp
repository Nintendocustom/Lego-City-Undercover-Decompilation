#include "script/actions/hotspot/HotSpotAction_Trigger.h"

const char* HotSpotAction_Trigger::GetName() const {
    return "HotSpot_Trigger";
}
void HotSpotAction_Trigger::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HOTSPOT);
    params.AddParam(SV_CHARACTER);
}
void HotSpotAction_Trigger::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
