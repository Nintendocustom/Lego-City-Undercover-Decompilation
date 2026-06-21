#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAComm_SetVideoCallAction.h"

const char* SAction_PDAComm_SetVideoCallAction::GetName() const {
    return "PDAComm_SetVideoCallAction";
}
void SAction_PDAComm_SetVideoCallAction::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}
void SAction_PDAComm_SetVideoCallAction::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
