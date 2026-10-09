#pragma once

#include "script/actions/SAction.h"

template <class T>
class WeakPtr;
class cAttackManager;

class SAction_AtkMngr_Command : public SAction {
public:
    ActionState Exec(ScriptContext& context) override;

protected:
    virtual ActionState DoExec(WeakPtr<cAttackManager>& manager, ScriptContext& context) = 0;

    uint8_t m_Member0xc = 0;
    uint8_t m_Member0xd;
};