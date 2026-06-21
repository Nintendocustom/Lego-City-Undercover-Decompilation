#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAScan_SetControlJob.h"

const char* SAction_PDAScan_SetControlJob::GetName() const {
    return "PDAScan_SetControlJob";
}
void SAction_PDAScan_SetControlJob::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HASH);
    params.AddParam(SV_JOB);
}
void SAction_PDAScan_SetControlJob::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
