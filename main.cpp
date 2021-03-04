#include <iostream>
#include <string>
#include <functional>

#include "antlr4-runtime.h"

#include "grammar/HuskyLexer.h"
#include "grammar/HuskyGrammar.h"

#include "lang/HuskyCompiler.h"

using namespace husky;

class DefaultCompileTime : public CompileTime {
public:

    Type *findIdentifier(const std::string &name) override {
        auto iter = _symbols.find(name);
        if (iter != _symbols.end()) {
            return iter->second;
        }
        return nullptr;
    }

    Type *findFunction(const std::string &name,
                       const std::vector<Type *>& argTypes) override {

        std::string symbol = name + "(" + Type::joinNames(argTypes) + ")";
        return findIdentifier(symbol);
    }

    bool registerSymbol(const std::string &name, Type *type) override {

        auto iter = _symbols.find(name);
        if (iter != _symbols.end()) {
            return false;
        }

        _symbols.emplace(name, type);
        return true;
    }

    bool registerFunction(const std::string &name,
                          Type *returnType, const std::vector<Type *>& argTypes) override {

        std::string symbol = name + "(" + Type::joinNames(argTypes) + ")";
        return registerSymbol(symbol, returnType);
    }

    bool registerType(const std::string &name) override {
        auto iter = _types.find(name);
        if (iter != _types.end()) {
            return false;
        }

        _types.emplace(name, new Type(name));
        return true;
    }

    Type *findType(const std::string &name) override {
        auto iter = _types.find(name);
        if (iter != _types.end()) {
            return iter->second;
        }
        return nullptr;
    }

public:
    ~DefaultCompileTime() {
        for (auto[name, type] : _types) {
            delete type;
        }
    }

private:
    std::map<std::string, Type *> _types;
    std::map<std::string, Type *> _symbols;
};

int main() {

    using namespace antlr4;
    using namespace antlr4::tree;
    using namespace antlrcpp;

    using namespace husky;

    std::string formula = "1 + 2 + f(4, 5) + v";

    std::istringstream stream(formula);

    ANTLRInputStream input(stream);
    HuskyLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    HuskyGrammar parser(&tokens);

    ErrorListener errorListener;
    parser.addErrorListener(&errorListener);

    ParseTree *tree = parser.expression();

    DefaultCompileTime compileTime;
    compileTime.registerType("Integer");
    compileTime.registerType("Float");
    compileTime.registerType("Bool");
    compileTime.registerType("FloatVector");

    Type *integer = compileTime.findType("Integer");
    Type *vectorType = compileTime.findType("FloatVector");

    compileTime.registerSymbol("x", integer);
    compileTime.registerSymbol("v", vectorType);
    compileTime.registerFunction("f", integer, {integer, integer});
    compileTime.registerFunction(to_string(BinaryExpr::Operation::Add), integer, {integer, integer});
    compileTime.registerFunction(to_string(BinaryExpr::Operation::Add), vectorType, {vectorType, vectorType});
    compileTime.registerFunction(to_string(BinaryExpr::Operation::Add), vectorType, {vectorType, integer});
    compileTime.registerFunction(to_string(BinaryExpr::Operation::Add), vectorType, {integer, vectorType});

    HuskyCompiler compiler(&compileTime);
    Any visited = compiler.visit(tree);

    auto expr = visited.as<HGraph *>()->as<Expression>();
    auto type = expr->type();
    std::cout << type->name() << std::endl;

    return 0;
}
