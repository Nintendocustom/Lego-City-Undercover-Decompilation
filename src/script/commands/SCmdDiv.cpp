#include "script/commands/SCmdDiv.h"

SCmdDiv::SCmdDiv(ScriptFile* file, int line) : SCmdArithmeticOp(file, line) {}

const char* SCmdDiv::GetName() const {
    return "SCmdDiv";
}

float SCmdDiv::Op(float a, float b) {
    return a / b;
}