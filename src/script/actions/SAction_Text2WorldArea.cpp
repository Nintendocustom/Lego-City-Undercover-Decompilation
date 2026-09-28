#include "script/actions/SAction_Text2WorldArea.h"

const char* SAction_Text2WorldArea::GetName() const {
    return "WorldArea";
}

void SAction_Text2WorldArea::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_Text2WorldArea::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_WORLD_AREA);
}
