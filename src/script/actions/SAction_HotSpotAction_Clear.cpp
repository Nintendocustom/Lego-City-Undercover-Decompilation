#include "script/actions/SAction_HotSpotAction_Clear.h"

const char* SAction_HotSpotAction_Clear::GetName() const {
    return "HotSpot_Clear";
}

void SAction_HotSpotAction_Clear::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HOTSPOT);
}

void SAction_HotSpotAction_Clear::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
