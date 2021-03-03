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
    virtual Type* findType(const std::string& name) = 0;

    virtual bool registerType(Type* type) = 0;

    virtual bool defineFunction(const std::string& name,
		    Type* returnType, std::vector<Type*> argTypes, 
		    std::function<std::vector<Value*>, Value*> body) = 0;

private:
    std::map<std::string, Type*> identifiers;
};

class CompileTime {
public:
    virtual Type* findType(const std::string& name) = 0;
    
    virtual Type* findSymbol(const std::string& name) = 0;
    
    virtual Type* findFunction(const std::string& name,
		    Type* returnType, std::vector<Type*> argTypes) = 0;

    virtual bool registerType(const std::string& name) = 0;

    virtual bool registerSymbol(const std::string& name, Type* type) = 0;

    virtual bool registerFunction(const std::string& name,
		    Type* returnType, std::vector<Type*> argTypes) = 0;
};

class DefaultCompileTime : public CompileTime {
private:
    Type* findType(const std::string& name) override {
	auto iter = _types.find(name);
	if(iter != _types.end()) {
            return iter->second;
	}
	return nullptr;
    }

    bool registerType(const std::string& name) override {
	Type* t = findType(name);
	if(t != nullptr) {
	    return false;
	}
        _types.emplace(name, new Type(name));
	return true;
    }

    bool defineFunction(const std::string& name,
		    Type* returnType, std::vector<Type*> argTypes) override {

    }

private:
    std::map<std::string, Type*> _types;
    std::map<std::string, Type*> _symbols;
};

Type* typeCheck(const ASTNode* ast) {
    
    if(ast->is<Primary>()) {
	//	TODO: process primary
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

    HuskyErrorListener errorListener;
    parser.addErrorListener(&errorListener);

    ParseTree *tree = parser.expression();

    HuskyCompiler compiler;
    Any visited = compiler.visit(tree);

    auto expr = visited.as<ASTHolder>().get<Expression>();

    return 0;
}
