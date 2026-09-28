#pragma once
#include "script/actions/GridlockMapAction/GridlockMapAction.h"

class GridlockMapAction_IsLoaded : public GridlockMapAction {
public:
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState MapExec(ScriptContext& context, GLMapSVarData& mapData) override;
};
