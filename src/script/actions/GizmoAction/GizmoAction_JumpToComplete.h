#pragma once
#include "script/actions/GizmoAction/GizmoAction.h"

class GizmoAction_JumpToComplete : public GizmoAction {
public:
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState GizmoExec(ScriptContext& context, Gizmo* pGizmo) override;
};
