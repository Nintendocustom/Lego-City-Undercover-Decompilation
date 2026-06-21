#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAScan_SetZoom.h"

const char* SAction_PDAScan_SetZoom::GetName() const {
    return "PDAScan_SetZoom";
}
void SAction_PDAScan_SetZoom::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
void SAction_PDAScan_SetZoom::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
