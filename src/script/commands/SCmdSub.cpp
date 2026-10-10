#include "script/commands/SCmdSub.h"

SCmdSub::SCmdSub(ScriptFile* file, int line) : SCmdArithmeticOp(file, line) {}

const char* SCmdSub::GetName() const {
    return "SCmdSub";
}

float SCmdSub::Op(float a, float b) {
    return a + b;
}