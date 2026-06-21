#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAScan_SetCharacterInfo.h"

const char* SAction_PDAScan_SetCharacterInfo::GetName() const {
    return "PDAScan_SetCharacterInfo";
}
void SAction_PDAScan_SetCharacterInfo::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_TEXT);
}
void SAction_PDAScan_SetCharacterInfo::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
