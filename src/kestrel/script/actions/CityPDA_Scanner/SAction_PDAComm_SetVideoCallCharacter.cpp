#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAComm_SetVideoCallCharacter.h"

const char* SAction_PDAComm_SetVideoCallCharacter::GetName() const {
    return "PDAComm_SetVideoCallCharacter";
}
void SAction_PDAComm_SetVideoCallCharacter::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}
void SAction_PDAComm_SetVideoCallCharacter::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
