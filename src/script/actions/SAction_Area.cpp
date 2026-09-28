#include "script/actions/SAction_Area.h"

const char* SAction_Area::GetName() const {
    return "Area";
}

void SAction_Area::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_WORLD_LEVEL);
}

void SAction_Area::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_AREA);
}
