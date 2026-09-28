#pragma once

#include "ActionInstanceData.h"
#include "script/common/SCmdParams.h"
#include "script/common/ScriptVarTypeEnum.h"
#include <cstdint>

class SAction : public ActionInstanceData {
public:
    static constexpr uint32_t SIGNATURE = 0x77357735;

    int m_signature;

    SAction() : m_signature(SIGNATURE) {}
    ~SAction() override = default;

    virtual const char* GetName() const = 0;
    virtual void GetInputs(SCmdParams& params) const;
    virtual void GetOutputs(SCmdParams& params) const;
    virtual ActionState Exec(ScriptContext& context);
};
