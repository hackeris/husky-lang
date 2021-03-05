//
// Created by rainm on 2021/3/2.
//

#include "HuskyCompiler.h"
#include "antlr4-runtime.h"

#include "../grammar/HuskyLexer.h"
#include "../grammar/HuskyExpr.h"

using namespace husky;

std::string husky::to_string(BinaryExpr::Operation op) {
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

std::string husky::to_string(UnaryExpr::Operation op) {
    switch (op) {
        case husky::UnaryExpr::Positive:
            return "+";
        case husky::UnaryExpr::Negative:
            return "-";
        case husky::UnaryExpr::Not:
            return "!";
    }
}

BinaryExpr::Operation parseBinaryOperation(const std::string &str) {
    if (str == "+") {
        return BinaryExpr::Add;
    } else if (str == "-") {
        return BinaryExpr::Sub;
    } else if (str == "*") {
        return BinaryExpr::Mul;
    } else if (str == "/") {
        return BinaryExpr::Div;
    } else if (str == "|") {
        return BinaryExpr::Or;
    } else if (str == "&") {
        return BinaryExpr::And;
    } else if (str == ">") {
        return BinaryExpr::Gt;
    } else if (str == "<") {
        return BinaryExpr::Lt;
    } else if (str == ">=") {
        return BinaryExpr::Ge;
    } else if (str == "<=") {
        return BinaryExpr::Le;
    } else if (str == "!=") {
        return BinaryExpr::NotEqual;
    } else if (str == "=") {
        return BinaryExpr::Equal;
    } else if (str == "^") {
        return BinaryExpr::Power;
    } else {
        throw std::runtime_error("unexpected binary operator " + str);
    }
}

UnaryExpr::Operation parseUnaryOperation(const std::string &str) {
    switch (str[0]) {
        case '+':
            return UnaryExpr::Positive;
        case '-':
            return UnaryExpr::Negative;
        case '!':
            return UnaryExpr::Not;
        default:
            throw std::runtime_error("unexpected unary operator " + str);
    }
}


void husky::ErrorListener::syntaxError(antlr4::Recognizer *recognizer, antlr4::Token *offendingSymbol, size_t line,
                                       size_t charPositionInLine, const std::string &msg, std::exception_ptr e) {
    errors.emplace_back(ANTLRError{(int) line, (int) charPositionInLine, msg});
}

void
husky::ErrorListener::reportAmbiguity(antlr4::Parser *recognizer, const antlr4::dfa::DFA &dfa, size_t startIndex,
                                      size_t stopIndex, bool exact, const antlrcpp::BitSet &ambigAlts,
                                      antlr4::atn::ATNConfigSet *configs) {
}

void husky::ErrorListener::reportAttemptingFullContext(antlr4::Parser *recognizer, const antlr4::dfa::DFA &dfa,
                                                       size_t startIndex, size_t stopIndex,
                                                       const antlrcpp::BitSet &conflictingAlts,
                                                       antlr4::atn::ATNConfigSet *configs) {

}

void husky::ErrorListener::reportContextSensitivity(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex,
                                                    size_t stopIndex, size_t prediction,
                                                    atn::ATNConfigSet *configs) {

}

bool ErrorListener::hasError() const {
    return !errors.empty();
}

const std::vector<ErrorListener::ANTLRError> &ErrorListener::getErrors() const {
    return errors;
}

husky::HuskyCompiler::HuskyCompiler(std::shared_ptr<CompileTime> compileTime)
        : _compileTime(std::move(compileTime)) {}

antlrcpp::Any husky::HuskyCompiler::visitExpressionList(HuskyExpr::ExpressionListContext *context) {

    //  vector of Expression
    std::vector<Expression *> expressions;

    auto contexts = context->expression();
    for (auto el: contexts) {
        auto exp = visit(el);
        expressions.emplace_back(get<Expression>(exp));
    }
    return expressions;
}

antlrcpp::Any husky::HuskyCompiler::visitMethodCall(HuskyExpr::MethodCallContext *context) {

    auto args = visit(context->expressionList());
    assert(args.is<ArgList>());

    auto identName = context->IDENTIFIER()->getText();
    auto argList = args.as<ArgList>();

    std::vector<Type *> argTypes = MethodCall::typesOf(argList);

    auto type = _compileTime->findFunction(identName, argTypes);
    auto ident = new Identifier(identName, type);

    return generify(new MethodCall(ident, argList, type));
}

antlrcpp::Any husky::HuskyCompiler::visitToIntegerLiteral(HuskyExpr::ToIntegerLiteralContext *context) {
    return visit(context->integerLiteral());
}

antlrcpp::Any husky::HuskyCompiler::visitToFloatLiteral(HuskyExpr::ToFloatLiteralContext *context) {
    return visit(context->floatLiteral());
}

antlrcpp::Any husky::HuskyCompiler::visitToBoolLiteral(HuskyExpr::ToBoolLiteralContext *context) {
    auto type = _compileTime->findType("Bool");
    bool value = (context->getText() == "true");
    return generify(new BoolLiteral(value, type));
}

antlrcpp::Any husky::HuskyCompiler::visitIntegerLiteral(HuskyExpr::IntegerLiteralContext *context) {
    auto type = _compileTime->findType("Integer");
    auto text = context->DECIMAL_LITERAL()->getText();
    auto literal = (int) std::strtol(text.c_str(), nullptr, 10);
    return generify(new IntegerLiteral(literal, type));
}

antlrcpp::Any husky::HuskyCompiler::visitFloatLiteral(HuskyExpr::FloatLiteralContext *context) {
    auto type = _compileTime->findType("Float");
    auto text = context->FLOAT_LITERAL()->getText();
    auto literal = (float) std::strtod(text.c_str(), nullptr);
    return generify(new FloatLiteral(literal, type));
}

antlrcpp::Any husky::HuskyCompiler::visitToUnary(HuskyExpr::ToUnaryContext *context) {

    std::string strOp = context->prefix->getText();
    UnaryExpr::Operation op = parseUnaryOperation(strOp);

    auto expr = get<Expression>(visit(context->expression()));
    auto type = _compileTime->findFunction(to_string(op), {expr->type()});

    if (type == nullptr) {
        throw compile_error(context,
                            "unary operation '" + strOp
                            + "' on type " + expr->type()->name() + " is not supported");
    }

    return generify(new UnaryExpr(op, expr, type));
}

antlrcpp::Any husky::HuskyCompiler::visitToCall(HuskyExpr::ToCallContext *context) {
    return visit(context->methodCall());
}

antlrcpp::Any husky::HuskyCompiler::visitToPrimary(HuskyExpr::ToPrimaryContext *context) {
    return visit(context->primary());
}

antlrcpp::Any husky::HuskyCompiler::visitToParen(HuskyExpr::ToParenContext *context) {
    return visit(context->expression());
}

antlrcpp::Any husky::HuskyCompiler::visitToLiteral(HuskyExpr::ToLiteralContext *context) {
    return visit(context->literal());
}

antlrcpp::Any husky::HuskyCompiler::visitToIdentifier(HuskyExpr::ToIdentifierContext *context) {

    auto identName = context->IDENTIFIER()->getText();
    auto type = _compileTime->findIdentifier(identName);

    if (type == nullptr) {
        throw compile_error(context, "identifier '" + identName + "' is not defined");
    }

    return generify(new Identifier(identName, type));
}

antlrcpp::Any husky::HuskyCompiler::visitToBinary(HuskyExpr::ToBinaryContext *context) {

    auto stringOp = context->bop->getText();
    BinaryExpr::Operation op = parseBinaryOperation(stringOp);

    auto left = get<Expression>(visit(context->expression(0)));
    auto right = get<Expression>(visit(context->expression(1)));

    auto type = _compileTime->findFunction(to_string(op), {left->type(), right->type()});

    if (type == nullptr) {
        throw compile_error(context, "binary operation '" + stringOp + "' on "
                                     + left->type()->name() + " and " + right->type()->name() + " is not defined");
    }

    return generify(new BinaryExpr(op, left, right, type));
}

antlrcpp::Any husky::HuskyCompiler::visitToArrayRef(HuskyExpr::ToArrayRefContext *context) {

    auto arr = get<Expression>(visit(context->expression(0)));
    auto index = get<Expression>(visit(context->expression(1)));

    auto arrayType = arr->type();
    auto indexType = index->type();
    auto returnType = arrayType->findMember("[]", {indexType});

    if (returnType == nullptr) {
        throw compile_error(context,
                            "operator [](" + indexType->name() + ") of " + arrayType->name() + " is not defined");
    }

    return generify(new ArrayRef(arr, index, returnType));
}

antlrcpp::Any HuskyCompiler::visitToArraySlice(HuskyExpr::ToArraySliceContext *context) {

    auto arr = get<Expression>(visit(context->expression(0)));
    auto begin = get<Expression>(visit(context->begin));
    auto end = get<Expression>(visit(context->end));

    auto arrayType = arr->type();
    auto beginType = begin->type(), endType = end->type();
    auto returnType = arrayType->findMember("[:]", {beginType, endType});

    if (returnType == nullptr) {
        throw compile_error(context,
                            "operator [:](" + beginType->name() + "," + endType->name() + ") of "
                            + arrayType->name() + " is not supported");
    }

    return generify(new ArraySlice(arr, begin, end, returnType));
}

antlrcpp::Any husky::HuskyCompiler::visitToAttrGet(HuskyExpr::ToAttrGetContext *context) {

    auto expr = get<Expression>(visit(context->expression()));
    auto prefixType = expr->type();

    if (context->methodCall() != nullptr) {

        auto method = get<MethodCall>(visit(context->methodCall()));

        auto argTypes = method->argTypes();
        auto methodName = method->identifier->name;
        auto returnType = prefixType->findMember(methodName, argTypes);

        if (returnType == nullptr) {
            throw compile_error(context,
                                "cannot find member method '" + methodName + "' of type '" + prefixType->name() + "'");
        }

        return generify(new AttrGet(expr, method, returnType));
    } else {
        auto fieldName = context->IDENTIFIER()->getText();
        auto identType = prefixType->findField(fieldName);

        if (identType == nullptr) {
            throw compile_error(context,
                                "cannot find member field '" + fieldName + "' of type '" + prefixType->name() + "'");
        }

        auto ident = new Identifier(fieldName, identType);
        return generify(new AttrGet(expr, ident, identType));
    }
}

AstBase *HuskyCompiler::compile(const std::string &code, ANTLRErrorListener *errorListener) {

    using namespace antlr4;
    using namespace antlr4::tree;
    using namespace antlrcpp;

    std::istringstream stream(code);

    ANTLRInputStream input(stream);
    HuskyLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    HuskyExpr parser(&tokens);

    parser.addErrorListener(errorListener);

    ParseTree *tree = parser.expression();

    Any visited = visit(tree);

    return visited.as<AstBase *>()->as<Expression>();
}

husky::CompileTimeBuilder::CompileTimeBuilder(std::shared_ptr<CompileTime> compileTime)
        : _compileTime(std::move(compileTime)) {}

antlrcpp::Any CompileTimeBuilder::visitStatements(HuskyDefine::StatementsContext *context) {
    for (auto stmt : context->statement()) {
        visit(stmt);
    }
    return nullptr;
}

antlrcpp::Any CompileTimeBuilder::visitStatement(HuskyDefine::StatementContext *context) {
    return visit(context->defineStatement());
}

antlrcpp::Any CompileTimeBuilder::visitArgs(HuskyDefine::ArgsContext *context) {
    std::vector<Type *> types;
    for (int i = 0; i < context->IDENTIFIER().size(); i += 1) {
        auto typeName = context->IDENTIFIER(i)->getText();
        auto type = _compileTime->findType(typeName);
        types.emplace_back(type);
    }
    return types;
}

antlrcpp::Any CompileTimeBuilder::visitTypeDefine(HuskyDefine::TypeDefineContext *context) {
    _compileTime->registerType(context->name->getText());
    return nullptr;
}

antlrcpp::Any CompileTimeBuilder::visitFuncDefine(HuskyDefine::FuncDefineContext *context) {
    std::string name;
    if (context->name != nullptr) {
        name = context->name->getText();
    } else if (context->bop() != nullptr) {
        name = context->bop()->getText();
    } else if (context->uop() != nullptr) {
        name = context->uop()->getText();
    }

    auto returnTypeName = context->returnType->getText();
    auto returnType = _compileTime->findType(returnTypeName);
    auto argTypes = visit(context->args()).as<std::vector<Type *>>();

    _compileTime->registerFunction(name, returnType, argTypes);
    return nullptr;
}

antlrcpp::Any CompileTimeBuilder::visitBop(HuskyDefine::BopContext *context) {
    return context->getText();
}

antlrcpp::Any CompileTimeBuilder::visitUop(HuskyDefine::UopContext *context) {
    return context->getText();
}

antlrcpp::Any CompileTimeBuilder::visitMemberFuncDefine(HuskyDefine::MemberFuncDefineContext *context) {
    std::string member;
    if (context->member != nullptr) {
        member = context->member->getText();
    } else if (context->bop() != nullptr) {
        member = context->bop()->getText();
    } else if (context->uop() != nullptr) {
        member = context->uop()->getText();
    } else if (context->ARRAY_INDEX() != nullptr) {
        member = context->ARRAY_INDEX()->getText();
    } else if (context->ARRAY_SLICE() != nullptr) {
        member = context->ARRAY_SLICE()->getText();
    }

    auto typeName = context->typeName->getText();
    auto returnType = _compileTime->findType(context->returnType->getText());
    auto argTypes = visit(context->args()).as<std::vector<Type *>>();

    auto type = _compileTime->findType(typeName);
    type->defineMember(member, returnType, argTypes);

    return nullptr;
}

antlrcpp::Any CompileTimeBuilder::visitValueDefine(HuskyDefine::ValueDefineContext *context) {

    auto valueType = _compileTime->findType(context->typeName->getText());
    auto name = context->name->getText();
    _compileTime->registerSymbol(name, valueType);
    return nullptr;
}

antlrcpp::Any CompileTimeBuilder::visitMemberValueDefine(HuskyDefine::MemberValueDefineContext *context) {

    auto valueType = _compileTime->findType(context->typeName->getText());
    auto typeName = context->typeName->getText();
    auto fieldName = context->fieldName->getText();
    auto type = _compileTime->findType(typeName);
    type->defineField(fieldName, valueType);
    return nullptr;
}

void CompileTimeBuilder::compile(const std::string &code) {

    using namespace antlr4;
    using namespace antlr4::tree;
    using namespace antlrcpp;

    std::istringstream stream(code);

    ANTLRInputStream input(stream);
    HuskyLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    HuskyDefine parser(&tokens);

    ParseTree *tree = parser.statements();
    this->visit(tree);
}

antlrcpp::Any CompileTimeBuilder::visitDefineStatement(HuskyDefine::DefineStatementContext *context) {
    for (auto &child: context->children) {
        visit(child);
    }
    return nullptr;
}

