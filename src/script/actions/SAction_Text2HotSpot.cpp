#include "script/actions/SAction_Text2HotSpot.h"

const char* SAction_Text2HotSpot::GetName() const {
    return "HotSpot";
}

void SAction_Text2HotSpot::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_Text2HotSpot::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HOTSPOT);
}
