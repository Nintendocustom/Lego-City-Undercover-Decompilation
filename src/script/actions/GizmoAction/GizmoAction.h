#pragma once

#include "script/actions/SAction.h"

class Gizmo;

class GizmoAction : public SAction {
public:
    ActionState Exec(ScriptContext& context) override;
    virtual ActionState GizmoExec(ScriptContext& context, Gizmo* pGizmo) = 0;
};
