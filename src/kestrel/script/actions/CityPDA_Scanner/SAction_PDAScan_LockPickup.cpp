#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAScan_LockPickup.h"

const char* SAction_PDAScan_LockPickup::GetName() const {
    return "PDAScan_LockPickup";
}
void SAction_PDAScan_LockPickup::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
    params.AddParam(SV_TEXT);
    params.AddParam(SV_TEXT);
}
void SAction_PDAScan_LockPickup::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
