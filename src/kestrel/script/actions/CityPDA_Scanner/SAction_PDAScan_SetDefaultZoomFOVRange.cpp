#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAScan_SetDefaultZoomFOVRange.h"

const char* SAction_PDAScan_SetDefaultZoomFOVRange::GetName() const {
    return "PDAScan_SetDefaultZoomFOVRange";
}
void SAction_PDAScan_SetDefaultZoomFOVRange::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
}
void SAction_PDAScan_SetDefaultZoomFOVRange::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
