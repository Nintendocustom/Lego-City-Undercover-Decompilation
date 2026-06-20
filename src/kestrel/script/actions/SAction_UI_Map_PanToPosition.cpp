#include "kestrel/script/actions/SAction_UI_Map_PanToPosition.h"

const char* SAction_UI_Map_PanToPosition::GetName() const {
    return "UI_Map_PanToPosition";
}
void SAction_UI_Map_PanToPosition::GetInputs(SCmdParams& params) const {
    auto input_variant = reinterpret_cast<const uint8_t*>(&m_InputVariant);

    if (input_variant[0] == 0) {
        params.AddParam(SV_LOCATOR);
    } else if (input_variant[0] == 1) {
        params.AddParam(SV_POSITION);
    }

    if (input_variant[1] == 0) {
        params.AddParam(SV_NUMBER);
    } else if (input_variant[1] == 1) {
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
    } else if (input_variant[1] == 2) {
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
    }
}
void SAction_UI_Map_PanToPosition::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
