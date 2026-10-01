#include "script/actions/VehicleAction/VehicleAction_AttachToSpline_YFree.h"

const char* VehicleAction_AttachToSpline_YFree::GetName() const {
    return "Vehicle_AttachToSpline_YFree";
}

void VehicleAction_AttachToSpline_YFree::GetInputs(SCmdParams& params) const {
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_TEXT);
    if (m_InputVariant != 0) {
        params.AddParam(SV_BOOL);
    }
}

void VehicleAction_AttachToSpline_YFree::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
