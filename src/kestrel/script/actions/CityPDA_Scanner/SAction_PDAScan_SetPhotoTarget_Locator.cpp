#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAScan_SetPhotoTarget_Locator.h"

const char* SAction_PDAScan_SetPhotoTarget_Locator::GetName() const {
    return "PDAScan_SetPhotoTarget";
}
void SAction_PDAScan_SetPhotoTarget_Locator::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_LOCATOR);
}
void SAction_PDAScan_SetPhotoTarget_Locator::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
