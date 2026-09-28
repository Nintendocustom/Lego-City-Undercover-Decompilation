#pragma once
#include "script/actions/NaviMapAction/NaviMapAction.h"

class NaviMapAction_IsLoaded : public NaviMapAction {
public:
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState MapExec(ScriptContext& context, NvMapSVarData&) override;
};
