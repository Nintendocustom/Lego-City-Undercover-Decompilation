#include "script/commands/SCmdMul.h"

SCmdMul::SCmdMul(ScriptFile* file, int line) : SCmdArithmeticOp(file, line) {}

const char* SCmdMul::GetName() const {
    return "SCmdMul";
}

float SCmdMul::Op(float a, float b) {
    return a * b;
}