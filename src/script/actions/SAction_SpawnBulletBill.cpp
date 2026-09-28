#include "script/actions/SAction_SpawnBulletBill.h"

const char* SAction_SpawnBulletBill::GetName() const {
    return "SpawnBulletBill";
}

void SAction_SpawnBulletBill::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_SpawnBulletBill::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
