#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAScan_IsEnvironmentVisible.h"

const char* SAction_PDAScan_IsEnvironmentVisible::GetName() const {
    return "PDAScan_IsEnvironmentVisible";
}
void SAction_PDAScan_IsEnvironmentVisible::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ANY);
}
void SAction_PDAScan_IsEnvironmentVisible::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
