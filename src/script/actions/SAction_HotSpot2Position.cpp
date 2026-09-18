#include "script/actions/SAction_HotSpot2Position.h"

const char* SAction_HotSpot2Position::GetName() const {
    return "Position";
}

void SAction_HotSpot2Position::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HOTSPOT);
}

void SAction_HotSpot2Position::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_POSITION);
}
