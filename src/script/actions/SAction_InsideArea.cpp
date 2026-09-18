#include "script/actions/SAction_InsideArea.h"

const char* SAction_InsideArea::GetName() const {
    return "Inside";
}

void SAction_InsideArea::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_AREA);
    params.AddParam(SV_CHARACTER);
}

void SAction_InsideArea::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
