#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAScan_SetPhotoTarget_LocatorRadius.h"

const char* SAction_PDAScan_SetPhotoTarget_LocatorRadius::GetName() const {
    return "PDAScan_SetPhotoTarget";
}
void SAction_PDAScan_SetPhotoTarget_LocatorRadius::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_LOCATOR);
    params.AddParam(SV_NUMBER);
}
void SAction_PDAScan_SetPhotoTarget_LocatorRadius::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
