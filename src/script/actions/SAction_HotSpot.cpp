#include "script/actions/SAction_HotSpot.h"

const char* SAction_HotSpot::GetName() const {
    return "HotSpot";
}

void SAction_HotSpot::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_WORLD_LEVEL);
}

void SAction_HotSpot::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HOTSPOT);
}
