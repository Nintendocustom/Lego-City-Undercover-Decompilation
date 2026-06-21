#pragma once

#include "kestrel/script/actions/ActionInstanceData.h"

class SAction_PDAScan_RemoveRequest : public ActionInstanceData {
public:
    ~SAction_PDAScan_RemoveRequest() override;
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& context) override;
};
