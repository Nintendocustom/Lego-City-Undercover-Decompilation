#include "script/actions/SAction_HotSpot_WaitForSafeGuard.h"

const char* SAction_HotSpot_WaitForSafeGuard::GetName() const {
    return "HotSpot_WaitForSafeGuard";
}

void SAction_HotSpot_WaitForSafeGuard::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HOTSPOT);
    params.AddParam(SV_BOOL);
}

void SAction_HotSpot_WaitForSafeGuard::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
