#include "script/actions/NaviMapAction/NaviMapAction_Unload.h"

const char* NaviMapAction_Unload::GetName() const {
    return "NaviMap_Unload";
}

void NaviMapAction_Unload::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NAVI_MAP);
}

void NaviMapAction_Unload::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
