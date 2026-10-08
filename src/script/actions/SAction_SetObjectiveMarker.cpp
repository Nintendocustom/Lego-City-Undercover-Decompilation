#include "script/actions/SAction_SetObjectiveMarker.h"

const char* SAction_SetObjectiveMarker::GetName() const {
    return "SetObjectiveMarker";
}

void SAction_SetObjectiveMarker::GetInputs(SCmdParams& params) const {
    switch (m_InputVariant) {
    case 0:
        params.SanityCheck();
        params.AddParam(SV_UNKNOWN_1);
        break;
    case 1:
        params.SanityCheck();
        params.AddParam(SV_UNKNOWN_1);
        params.AddParam(SV_NUMBER);
        break;
    case 2:
        params.SanityCheck();
        params.AddParam(SV_UNKNOWN_1);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_BOOL);
        params.AddParam(SV_BOOL);
        break;
    }
}

void SAction_SetObjectiveMarker::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
