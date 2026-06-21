#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAComm_SetUsePDA.h"

const char* SAction_PDAComm_SetUsePDA::GetName() const {
    return "PDAComm_SetUsePDA";
}
void SAction_PDAComm_SetUsePDA::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
void SAction_PDAComm_SetUsePDA::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
