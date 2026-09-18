#include "script/actions/hotspot/HotSpotAction_ContainsCharacter.h"

const char* HotSpotAction_ContainsCharacter::GetName() const {
    return "ContainsCharacter";
}
void HotSpotAction_ContainsCharacter::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HOTSPOT);
    params.AddParam(SV_CHARACTER);
}
void HotSpotAction_ContainsCharacter::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
