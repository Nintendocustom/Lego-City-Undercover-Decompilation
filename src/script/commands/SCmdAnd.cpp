#include "script/commands/SCmdAnd.h"

SCmdAnd::SCmdAnd(ScriptFile* file, int line) : SCmdLogicOp(file, line) {}

const char* SCmdAnd::GetName() const {
    return "SCmdAnd";
}

bool SCmdAnd::Op(bool a, bool b) {
    return a && b;
}
