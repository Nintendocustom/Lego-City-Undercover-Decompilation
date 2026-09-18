#include "script/actions/SAction_HotSpot2Text.h"

const char* SAction_HotSpot2Text::GetName() const {
    return "Text";
}

void SAction_HotSpot2Text::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HOTSPOT);
}

void SAction_HotSpot2Text::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}
