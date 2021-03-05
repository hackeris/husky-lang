#include <iostream>
#include <functional>

#include "lang/HuskyCompiler.h"

using namespace husky;

std::shared_ptr<CompileTime> buildCompileTime(const std::string &hdf) {

    auto compileTime = std::make_shared<DefaultCompileTime>();

    CompileTimeBuilder builder(compileTime);
    auto def = "type Integer\n"
               "type Float\n"
               "type Bool\n"
               "type Integer\n"
               "type FloatVector\n"
               "\n"
               "func add(Integer, Integer): Integer\n"
               "func +(Integer, Integer): Integer\n"
               "func +(FloatVector, FloatVector): FloatVector\n"
               "func +(Integer, FloatVector): FloatVector\n"
               "func +(FloatVector, Integer): FloatVector\n"
               "\n"
               "val x: Integer\n"
               "val v: FloatVector";

    builder.load(def);

    return compileTime;
}

int main() {

    auto compileTime = buildCompileTime("");
    HuskyCompiler compiler(compileTime);
    ErrorListener errorListener;

    std::string formula = "1 + 2 + x + add(4, 5) + v";
    auto expr = compiler.compile(formula, &errorListener);

    auto type = expr->type();
    std::cout << type->name() << std::endl;

    delete expr;

    return 0;
}
