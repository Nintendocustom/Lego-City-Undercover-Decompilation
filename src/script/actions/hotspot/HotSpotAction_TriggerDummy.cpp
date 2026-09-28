#include "script/actions/hotspot/HotSpotAction_TriggerDummy.h"

const char* HotSpotAction_TriggerDummy::GetName() const {
    return "HotSpot_Trigger";
}
void HotSpotAction_TriggerDummy::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HOTSPOT);
}
void HotSpotAction_TriggerDummy::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
