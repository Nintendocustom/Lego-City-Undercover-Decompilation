#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAScan_IsPickupLocked.h"

const char* SAction_PDAScan_IsPickupLocked::GetName() const {
    return "PDAScan_IsPickupLocked";
}
void SAction_PDAScan_IsPickupLocked::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}
void SAction_PDAScan_IsPickupLocked::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
