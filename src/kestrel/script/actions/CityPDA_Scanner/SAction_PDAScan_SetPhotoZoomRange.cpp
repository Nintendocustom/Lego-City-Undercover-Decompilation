#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAScan_SetPhotoZoomRange.h"

const char* SAction_PDAScan_SetPhotoZoomRange::GetName() const {
    return "PDAScan_SetPhotoZoomRange";
}
void SAction_PDAScan_SetPhotoZoomRange::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
}
void SAction_PDAScan_SetPhotoZoomRange::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
