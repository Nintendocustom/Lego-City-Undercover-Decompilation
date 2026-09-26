#pragma once

#include "script/actions/SAction.h"

class Track;

class SAction_SVarSpeechStream_Base : public SAction {
public:
    ActionState Exec(ScriptContext& context) override;
    virtual ActionState SpeechStreamExec(ScriptContext& context, Track* pTrack) = 0;
};
