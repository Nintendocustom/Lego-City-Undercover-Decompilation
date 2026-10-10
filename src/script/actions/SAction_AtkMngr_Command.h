#pragma once

#include "kestrel/WeakPtr.h"
#include "script/actions/SAction.h"

class cAttackManager {
public:
    uint8_t m_Padding[0x6d0c];
    uint8_t m_TutorialMode;
    uint8_t m_field_0x6d0d;
    bool m_Suspended;
    uint8_t m_field_0x6d0f;
    bool m_AutoSuspended;
};

class SAction_AtkMngr_Command : public SAction {
public:
    ActionState Exec(ScriptContext& context) override;

protected:
    virtual ActionState DoExec(WeakPtr<cAttackManager>& manager, ScriptContext& context) = 0;

    uint8_t m_Member0xc = 0;
    uint8_t m_Member0xd = 0;
    bool m_AutoSuspend;
};