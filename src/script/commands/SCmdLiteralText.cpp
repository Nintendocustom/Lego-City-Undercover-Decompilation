#include "script/commands/SCmdLiteralText.h"

uint32_t NuStrHashUpperCaseFNV1(const char* str, uint32_t basis = 0x811c9dc5);

const char* SCmdLiteralText::GetName() const {
    return "LiteralText";
}

void SCmdLiteralText::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SCmdLiteralText::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT, "*literal");
}

uint32_t SCmdLiteralText::GetHashCode() const {
    return m_hash;
}
