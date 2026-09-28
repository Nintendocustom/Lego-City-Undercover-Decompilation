#include "script/actions/hotspot/HotSpotAction_NoCondition.h"

const char* HotSpotAction_NoCondition::GetName() const {
    return "HotSpot_NoCondition";
}
void HotSpotAction_NoCondition::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HOTSPOT);
}
void HotSpotAction_NoCondition::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
