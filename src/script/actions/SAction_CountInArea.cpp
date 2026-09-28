#include "script/actions/SAction_CountInArea.h"

const char* SAction_CountInArea::GetName() const {
    return "Area_CountInArea";
}

void SAction_CountInArea::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_AREA);
    params.AddParam(SV_HASH);
}

void SAction_CountInArea::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
