#include "script/actions/SAction_WorldArea_IsCurrentWorldArea.h"

const char* SAction_WorldArea_IsCurrentWorldArea::GetName() const {
    return "WorldArea_IsCurrentWorldArea";
}

void SAction_WorldArea_IsCurrentWorldArea::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_WORLD_AREA);
}

void SAction_WorldArea_IsCurrentWorldArea::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
