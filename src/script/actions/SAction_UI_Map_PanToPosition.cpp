#include "script/actions/SAction_UI_Map_PanToPosition.h"

const char* SAction_UI_Map_PanToPosition::GetName() const {
    return "UI_Map_PanToPosition";
}

void SAction_UI_Map_PanToPosition::GetInputs(SCmdParams& params) const {
    if (m_TargetMode == 0) {
        params.AddParam(SV_LOCATOR);
    } else if (m_TargetMode == 1) {
        params.AddParam(SV_POSITION);
    }

    if (m_ParamMode == 0) {
        params.AddParam(SV_NUMBER);
    } else if (m_ParamMode == 1) {
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
    } else if (m_ParamMode == 2) {
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
    }
}

void SAction_UI_Map_PanToPosition::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
