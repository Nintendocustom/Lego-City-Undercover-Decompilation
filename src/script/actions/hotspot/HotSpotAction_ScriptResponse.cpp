#include "script/actions/hotspot/HotSpotAction_ScriptResponse.h"

const char* HotSpotAction_ScriptResponse::GetName() const {
    return "HotSpot_ScriptResponse";
}
void HotSpotAction_ScriptResponse::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HOTSPOT);
    params.AddParam(SV_TEXT);
}
void HotSpotAction_ScriptResponse::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
