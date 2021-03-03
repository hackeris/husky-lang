#include <iostream>
#include <string>
#include <functional>

#include "antlr4-runtime.h"

#include "grammar/HuskyLexer.h"
#include "grammar/HuskyGrammar.h"

#include "lang/HuskyCompiler.h"

using namespace husky;

class HuskyEnv {
public:
    virtual Type *findType(const std::string &name) = 0;

    virtual bool registerType(Type *type) = 0;

    virtual bool defineFunction(const std::string &name,
                                Type *returnType, std::vector<Type *> argTypes,
                                std::function<std::vector<Value *>(Value *)> body) = 0;

private:
    std::map<std::string, Type *> identifiers;
};

class CompileTime {
public:
    virtual Type *findIdentifier(const std::string &name) = 0;

    virtual Type *findFunction(const std::string &name,
                               std::vector<Type *> argTypes) = 0;

    virtual bool registerType(const std::string &name) = 0;

    virtual Type *findType(const std::string &name) = 0;

    virtual bool registerSymbol(const std::string &name, Type *type) = 0;

    virtual bool registerFunction(const std::string &name,
                                  Type *returnType, std::vector<Type *> argTypes) = 0;
};

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
                       std::vector<Type *> argTypes) override {

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
                          Type *returnType, std::vector<Type *> argTypes) override {

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

Type *typeInference(const HGraph *ast, CompileTime *compileTime);

Type *typeInference(const Literal *ast, CompileTime *compileTime) {
    if (ast->is<IntegerLiteral>()) {
        return compileTime->findType("Integer");
    } else if (ast->is<FloatLiteral>()) {
        return compileTime->findType("Float");
    } else if (ast->is<BoolLiteral>()) {
        return compileTime->findType("Bool");
    }
    return nullptr;
}

std::string to_string(BinaryExpr::Operation op) {
    switch (op) {
        case husky::BinaryExpr::Add:
            return "+";
        case husky::BinaryExpr::Sub:
            return "-";
        case husky::BinaryExpr::Mul:
            return "*";
        case husky::BinaryExpr::Div:
            return "/";
        case husky::BinaryExpr::And:
            return "&";
        case husky::BinaryExpr::Or:
            return "|";
        case husky::BinaryExpr::Power:
            return "^";
        case husky::BinaryExpr::NotEqual:
            return "!=";
        case husky::BinaryExpr::Equal:
            return "=";
        case husky::BinaryExpr::Ge:
            return ">=";
        case husky::BinaryExpr::Le:
            return "<=";
        case husky::BinaryExpr::Gt:
            return ">";
        case husky::BinaryExpr::Lt:
            return "<";
    }
}

std::string to_string(UnaryExpr::Operation op) {
    switch (op) {
        case husky::UnaryExpr::Positive:
            return "+";
        case husky::UnaryExpr::Negative:
            return "-";
        case husky::UnaryExpr::Not:
            return "!";
    }
}

Type *typeInference(const BinaryExpr *ast, CompileTime *compileTime) {
    BinaryExpr::Operation op = ast->op;
    Type *left = typeInference((HGraph *) ast->left, compileTime);
    Type *right = typeInference((HGraph *) ast->right, compileTime);
    return compileTime->findFunction(to_string(op), {left, right});
}

Type *typeInference(const UnaryExpr *ast, CompileTime *compileTime) {
    UnaryExpr::Operation op = ast->op;
    Type *expr = typeInference((HGraph *) ast->expr, compileTime);
    return compileTime->findFunction(to_string(op), {expr});
}

Type *typeInference(const MethodCall *methodCall, CompileTime *compileTime) {
    std::vector<Type *> args;
    std::transform(methodCall->args.begin(), methodCall->args.end(),
                   std::back_inserter(args),
                   [=](Expression *exp) -> Type * {
                       return typeInference(exp, compileTime);
                   });
    return compileTime->findFunction(methodCall->identifier->name, args);
}

Type *typeInference(const HGraph *ast, CompileTime *compileTime) {
    if (ast->is<Literal>()) {
        return typeInference(ast->as<Literal>(), compileTime);
    } else if (ast->is<BinaryExpr>()) {
        return typeInference(ast->as<BinaryExpr>(), compileTime);
    } else if (ast->is<UnaryExpr>()) {
        return typeInference(ast->as<UnaryExpr>(), compileTime);
    } else if (ast->is<MethodCall>()) {
        return typeInference(ast->as<MethodCall>(), compileTime);
    }
}


int main() {

    using namespace antlr4;
    using namespace antlr4::tree;
    using namespace antlrcpp;

    using namespace husky;

    std::string formula = "1 + 2 + f(4, 5)";

    std::istringstream stream(formula);

    ANTLRInputStream input(stream);
    HuskyLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    HuskyGrammar parser(&tokens);

    ErrorListener errorListener;
    parser.addErrorListener(&errorListener);

    ParseTree *tree = parser.expression();

    HuskyCompiler compiler;
    Any visited = compiler.visit(tree);

    auto expr = visited.as<HGraph *>()->as<Expression>();

    DefaultCompileTime compileTime;
    compileTime.registerType("Integer");
    compileTime.registerType("Float");
    compileTime.registerType("Bool");

    Type *integer = compileTime.findType("Integer");

    compileTime.registerFunction("f", integer, {integer, integer});
    compileTime.registerFunction(to_string(BinaryExpr::Operation::Add), integer, {integer, integer});
    Type *type = typeInference(expr, &compileTime);

    return 0;
}
