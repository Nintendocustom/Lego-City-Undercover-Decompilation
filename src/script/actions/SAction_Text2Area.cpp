#include "script/actions/SAction_Text2Area.h"

const char* SAction_Text2Area::GetName() const {
    return "Area";
}

void SAction_Text2Area::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_Text2Area::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_AREA);
}
