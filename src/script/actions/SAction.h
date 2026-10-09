#pragma once

#include "script/actions/ActionInstanceData.h"
#include "script/common/SCmdParams.h"
#include "script/common/ScriptVarTypeEnum.h"
#include <cstdint>

class SAction : public ActionInstanceData {
public:
    SAction() : m_signature(SIGNATURE) {}
    ~SAction() override = default;

    virtual const char* GetName() const = 0;
    virtual void GetInputs(SCmdParams& params) const = 0;
    virtual void GetOutputs(SCmdParams& params) const = 0;
    virtual ActionState Exec(ScriptContext& context) = 0;

private:
    static constexpr uint32_t SIGNATURE = 0x77357735;
    uint32_t m_signature;
};
