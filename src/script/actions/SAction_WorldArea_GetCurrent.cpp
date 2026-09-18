#include "script/actions/SAction_WorldArea_GetCurrent.h"

const char* SAction_WorldArea_GetCurrent::GetName() const {
    return "WorldArea_GetCurrent";
}

void SAction_WorldArea_GetCurrent::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_WorldArea_GetCurrent::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_WORLD_AREA);
}
