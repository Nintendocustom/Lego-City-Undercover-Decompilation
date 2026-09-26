#pragma once

#include "script/actions/SAction.h"

class NvMapSVarData;

class NaviMapAction : public SAction {
public:
    ActionState Exec(ScriptContext& context) override;
    virtual ActionState MapExec(ScriptContext& context, NvMapSVarData&) = 0;
};