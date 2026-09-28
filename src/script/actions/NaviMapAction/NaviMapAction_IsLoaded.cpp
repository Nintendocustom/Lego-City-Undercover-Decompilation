#include "script/actions/NaviMapAction/NaviMapAction_IsLoaded.h"

const char* NaviMapAction_IsLoaded::GetName() const {
    return "NaviMap_IsLoaded";
}

void NaviMapAction_IsLoaded::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NAVI_MAP);
}

void NaviMapAction_IsLoaded::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
