#include "script/actions/SAction_CityObjective_LinkGizmo.h"

const char* SAction_CityObjective_LinkGizmo::GetName() const {
    return "CityObjective_LinkGizmo";
}

void SAction_CityObjective_LinkGizmo::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
    params.AddParam(SV_CITY_OBJECTIVE);
}

void SAction_CityObjective_LinkGizmo::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
