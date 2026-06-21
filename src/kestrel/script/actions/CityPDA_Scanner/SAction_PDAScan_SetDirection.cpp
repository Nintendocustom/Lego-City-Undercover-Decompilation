#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAScan_SetDirection.h"

const char* SAction_PDAScan_SetDirection::GetName() const {
    return "PDAScan_SetDirection";
}
void SAction_PDAScan_SetDirection::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
}
void SAction_PDAScan_SetDirection::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
