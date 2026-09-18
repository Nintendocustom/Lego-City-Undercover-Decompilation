#include "script/actions/SAction_CityObjective_LinkGizmo_TEXT.h"

const char* SAction_CityObjective_LinkGizmo_TEXT::GetName() const {
    return "CityObjective_LinkGizmo";
}

void SAction_CityObjective_LinkGizmo_TEXT::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
    params.AddParam(SV_TEXT);
}

void SAction_CityObjective_LinkGizmo_TEXT::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
