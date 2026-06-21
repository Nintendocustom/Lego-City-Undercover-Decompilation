#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAScan_SetPhotoTarget_PosRad.h"

const char* SAction_PDAScan_SetPhotoTarget_PosRad::GetName() const {
    return "PDAScan_SetPhotoTarget";
}
void SAction_PDAScan_SetPhotoTarget_PosRad::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_POSITION);
    params.AddParam(SV_NUMBER);
}
void SAction_PDAScan_SetPhotoTarget_PosRad::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
