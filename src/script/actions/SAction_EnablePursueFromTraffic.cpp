#include "script/actions/SAction_EnablePursueFromTraffic.h"

const char* SAction_EnablePursueFromTraffic::GetName() const {
    return "EnablePursueFromTraffic";
}

void SAction_EnablePursueFromTraffic::GetInputs(SCmdParams& params) const {
    switch (m_InputVariant) {
    case 3:
        params.AddParam(SV_HASH);
        params.AddParam(SV_HASH);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_VEHICLE);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_ANY);
        break;
    case 2:
        params.AddParam(SV_HASH);
        params.AddParam(SV_HASH);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_VEHICLE);
        params.AddParam(SV_NUMBER);
        break;
    case 1:
        params.AddParam(SV_HASH);
        params.AddParam(SV_HASH);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_CHARACTER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_ANY);
        break;
    default:
        params.AddParam(SV_HASH);
        params.AddParam(SV_HASH);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_CHARACTER);
        params.AddParam(SV_NUMBER);
        break;
    }
}

void SAction_EnablePursueFromTraffic::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
