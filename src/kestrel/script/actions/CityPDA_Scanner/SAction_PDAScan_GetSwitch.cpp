#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAScan_GetSwitch.h"

const char* SAction_PDAScan_GetSwitch::GetName() const {
    return "PDAScan_GetSwitch";
}
void SAction_PDAScan_GetSwitch::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}
void SAction_PDAScan_GetSwitch::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}
