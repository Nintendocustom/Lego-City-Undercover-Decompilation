#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAScan_LinkSwitch.h"

const char* SAction_PDAScan_LinkSwitch::GetName() const {
    return "PDAScan_LinkSwitch";
}
void SAction_PDAScan_LinkSwitch::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HASH);
    params.AddParam(SV_GIZMO);
    params.AddParam(SV_JOB);
}
void SAction_PDAScan_LinkSwitch::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
