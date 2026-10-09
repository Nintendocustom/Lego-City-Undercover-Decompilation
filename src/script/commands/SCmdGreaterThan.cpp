#include "script/commands/SCmdGreaterThan.h"

SCmdGreaterThan::SCmdGreaterThan(ScriptFile* file, int line) : SCmdEqualityOp(file, line) {}

const char* SCmdGreaterThan::GetName() const {
    return "SCmdGreaterThan";
}

bool SCmdGreaterThan::Op(float a, float b) {
    return a > b;
}
