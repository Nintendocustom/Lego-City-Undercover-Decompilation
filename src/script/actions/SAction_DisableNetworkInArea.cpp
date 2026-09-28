#include "script/actions/SAction_DisableNetworkInArea.h"

const char* SAction_DisableNetworkInArea::GetName() const {
    return "Area_DisableNetwork";
}

void SAction_DisableNetworkInArea::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_AREA);
    params.AddParam(SV_HASH);
}

void SAction_DisableNetworkInArea::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
