#include "script/actions/SAction_NaviMap.h"

const char* SAction_NaviMap::GetName() const {
    return "NaviMap";
}

void SAction_NaviMap::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_NaviMap::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NAVI_MAP);
}
