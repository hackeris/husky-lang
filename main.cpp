#include <iostream>
#include <functional>

#include "lang/HuskyCompiler.h"

using namespace husky;

std::shared_ptr<CompileTime> buildCompileTime(const std::string &hdf) {

    auto compileTime = std::make_shared<DefaultCompileTime>();
//
//    compileTime->registerType("Integer");
//    compileTime->registerType("Float");
//    compileTime->registerType("Bool");
//    compileTime->registerType("FloatVector");
//
//    Type *integer = compileTime->findType("Integer");
//    Type *vectorType = compileTime->findType("FloatVector");
//
//    compileTime->registerSymbol("x", integer);
//    compileTime->registerSymbol("v", vectorType);
//    compileTime->registerFunction("f", integer, {integer, integer});
//    compileTime->registerFunction(to_string(BinaryExpr::Operation::Add), integer, {integer, integer});
//    compileTime->registerFunction(to_string(BinaryExpr::Operation::Add), vectorType, {vectorType, vectorType});
//    compileTime->registerFunction(to_string(BinaryExpr::Operation::Add), vectorType, {vectorType, integer});
//    compileTime->registerFunction(to_string(BinaryExpr::Operation::Add), vectorType, {integer, vectorType});

    CompileTimeBuilder builder(compileTime);
    auto def = "type Integer;\n"
               "type Float;\n"
               "type Bool;\n"
               "type Integer;\n"
               "type FloatVector;\n"
               "\n"
               "func add(Integer, Integer): Integer;\n"
               "func +(Integer, Integer): Integer;\n"
               "func +(FloatVector, FloatVector): FloatVector;\n"
               "func +(Integer, FloatVector): FloatVector;\n"
               "func +(FloatVector, Integer): FloatVector;\n"
               "\n"
               "val x: Integer;\n"
               "val v: FloatVector;";

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
