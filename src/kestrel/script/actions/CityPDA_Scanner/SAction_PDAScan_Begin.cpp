#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAScan_Begin.h"

const char* SAction_PDAScan_Begin::GetName() const {
    return "PDAScan_Begin";
}
void SAction_PDAScan_Begin::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}
void SAction_PDAScan_Begin::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
