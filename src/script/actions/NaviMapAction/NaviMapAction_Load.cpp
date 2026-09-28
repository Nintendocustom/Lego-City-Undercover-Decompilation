#include "script/actions/NaviMapAction/NaviMapAction_Load.h"

const char* NaviMapAction_Load::GetName() const {
    return "NaviMap_Load";
}

void NaviMapAction_Load::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NAVI_MAP);
}

void NaviMapAction_Load::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
