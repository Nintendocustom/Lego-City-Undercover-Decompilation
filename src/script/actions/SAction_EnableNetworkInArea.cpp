#include "script/actions/SAction_EnableNetworkInArea.h"

const char* SAction_EnableNetworkInArea::GetName() const {
    return "Area_EnableNetwork";
}

void SAction_EnableNetworkInArea::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_AREA);
    params.AddParam(SV_HASH);
}

void SAction_EnableNetworkInArea::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
