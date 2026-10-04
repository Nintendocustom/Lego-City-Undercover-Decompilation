#include "script/actions/SAction_UI_Map_PanToPosition_Queued.h"

const char* SAction_UI_Map_PanToPosition_Queued::GetName() const {
    return "SetHotSpot";
}

void SAction_UI_Map_PanToPosition_Queued::GetInputs(SCmdParams& params) const {
    switch (this->m_field_0xc) {
    case 0:
        params.SanityCheck();
        params.AddParam(SV_LOCATOR);
        break;
    case 1:
        params.SanityCheck();
        params.AddParam(SV_POSITION);
        break;
    }
    switch (this->m_field_0xd) {
    case 0:
        params.SanityCheck();
        params.AddParam(SV_NUMBER);
        break;
    case 1:
        params.SanityCheck();
        params.AddParam(SV_NUMBER);
        params.SanityCheck();
        params.AddParam(SV_NUMBER);
        break;
    case 2:
        params.SanityCheck();
        params.AddParam(SV_NUMBER);
        params.SanityCheck();
        params.AddParam(SV_NUMBER);
        params.SanityCheck();
        params.AddParam(SV_NUMBER);
        break;
    }
}

void SAction_UI_Map_PanToPosition_Queued::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
