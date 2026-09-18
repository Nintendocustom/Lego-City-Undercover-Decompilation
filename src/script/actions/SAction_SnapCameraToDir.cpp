#include "script/actions/SAction_SnapCameraToDir.h"

const char* SAction_SnapCameraToDir::GetName() const {
    return "SnapCameraToDir";
}

void SAction_SnapCameraToDir::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_TEXT);
}

void SAction_SnapCameraToDir::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
