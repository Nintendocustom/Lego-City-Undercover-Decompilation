#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAComm_SetCallAuto.h"

const char* SAction_PDAComm_SetCallAuto::GetName() const {
    return "PDAComm_SetCallAuto";
}
void SAction_PDAComm_SetCallAuto::GetInputs(SCmdParams& params) const {
    const uint8_t input_variant = *reinterpret_cast<const uint8_t*>(&m_InputVariant);
    params.SanityCheck();
    params.AddParam(SV_JOB);
    if (input_variant == 0) {
        params.AddParam(SV_BOOL);
    }
}
void SAction_PDAComm_SetCallAuto::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
