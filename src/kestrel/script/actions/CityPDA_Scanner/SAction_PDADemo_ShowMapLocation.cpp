#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDADemo_ShowMapLocation.h"

const char* SAction_PDADemo_ShowMapLocation::GetName() const {
    return "PDADemo_ShowMapLocation";
}
void SAction_PDADemo_ShowMapLocation::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
}
