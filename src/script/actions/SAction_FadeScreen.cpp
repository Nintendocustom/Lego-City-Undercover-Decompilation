#include "script/actions/SAction_FadeScreen.h"

const char* SAction_FadeScreen::GetName() const {
    return "FadeScreen";
}

void SAction_FadeScreen::GetInputs(SCmdParams& params) const {
    switch(this->m_field_0xc) {
    case 0:
        params.SanityCheck();
        params.AddParam(SV_BOOL);
        break;
    case 1:
        params.SanityCheck();
        params.AddParam(SV_BOOL);
        params.AddParam(SV_BOOL);
        break;
    case 2:
        params.SanityCheck();
        params.AddParam(SV_BOOL);
        params.AddParam(SV_BOOL);
        params.AddParam(SV_BOOL);
        break;
    }
}

void SAction_FadeScreen::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
