#pragma once

#include "kestrel/script/actions/CityPDA_Scanner/CityPDA_CommunicatorScriptAction.h"

class SAction_PDADemo_ShowMapLocation : public CityPDA_CommunicatorScriptAction {
public:
    ~SAction_PDADemo_ShowMapLocation() override;
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& context) override;
};
