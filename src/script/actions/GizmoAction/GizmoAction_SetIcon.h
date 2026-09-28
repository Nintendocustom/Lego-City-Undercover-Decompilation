#pragma once
#include "script/actions/GizmoAction/GizmoAction.h"

class GizmoAction_SetIcon : public GizmoAction {
public:
    const char *GetName () const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState GizmoExec(ScriptContext& context, Gizmo* pGizmo) override;
    
private:
    int32_t m_InputVariant;
};