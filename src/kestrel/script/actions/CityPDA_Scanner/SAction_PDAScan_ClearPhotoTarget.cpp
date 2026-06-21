#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAScan_ClearPhotoTarget.h"

const char* SAction_PDAScan_ClearPhotoTarget::GetName() const {
    return "PDAScan_ClearPhotoTarget";
}
void SAction_PDAScan_ClearPhotoTarget::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}
void SAction_PDAScan_ClearPhotoTarget::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
