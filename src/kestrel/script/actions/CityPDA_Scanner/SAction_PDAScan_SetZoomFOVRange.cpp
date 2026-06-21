#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAScan_SetZoomFOVRange.h"

const char* SAction_PDAScan_SetZoomFOVRange::GetName() const {
    return "PDAScan_SetZoomFOVRange";
}
void SAction_PDAScan_SetZoomFOVRange::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
}
void SAction_PDAScan_SetZoomFOVRange::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
