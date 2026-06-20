#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAComm_MapCanShowDuringMiniCut.h"

const char* SAction_PDAComm_MapCanShowDuringMiniCut::GetName() const {
    return "PDAComm_MapCanShowDuringMiniCut";
}
void SAction_PDAComm_MapCanShowDuringMiniCut::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
void SAction_PDAComm_MapCanShowDuringMiniCut::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
