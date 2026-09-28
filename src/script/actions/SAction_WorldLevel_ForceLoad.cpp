#include "script/actions/SAction_WorldLevel_ForceLoad.h"

const char* SAction_WorldLevel_ForceLoad::GetName() const {
    return "WorldLevel_ForceLoad";
}

void SAction_WorldLevel_ForceLoad::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_WORLD_LEVEL);
    params.AddParam(SV_BOOL);
}

void SAction_WorldLevel_ForceLoad::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
