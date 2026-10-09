#include "script/commands/SCmdLessThan.h"

SCmdLessThan::SCmdLessThan(ScriptFile* file, int line) : SCmdEqualityOp(file, line) {}

const char* SCmdLessThan::GetName() const {
    return "SCmdLessThan";
}

bool SCmdLessThan::Op(float a, float b) {
    return a < b;
}
