#pragma once

#include "script/actions/SAction.h"

class GLMapSVarData;

class GridlockMapAction : public SAction {
public:
    ActionState Exec(ScriptContext& context) override;
    virtual ActionState MapExec(ScriptContext& context, GLMapSVarData& mapData) = 0;
};
