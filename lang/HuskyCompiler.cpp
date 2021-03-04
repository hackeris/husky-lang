//
// Created by rainm on 2021/3/2.
//

#include "HuskyCompiler.h"

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


void husky::ErrorListener::syntaxError(antlr4::Recognizer *recognizer, antlr4::Token *offendingSymbol, size_t line,
                                       size_t charPositionInLine, const std::string &msg, std::exception_ptr e) {

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

antlrcpp::Any husky::HuskyCompiler::visitExpressionList(HuskyGrammar::ExpressionListContext *context) {

    //  vector of Expression
    std::vector<Expression *> expressions;

    auto contexts = context->expression();
    for (auto el: contexts) {
        auto exp = visit(el);
        expressions.emplace_back(get<Expression>(exp));
    }
    return expressions;
}

antlrcpp::Any husky::HuskyCompiler::visitMethodCall(HuskyGrammar::MethodCallContext *context) {

    auto args = visit(context->expressionList());
    assert(args.is<ArgList>());

    auto identName = context->IDENTIFIER()->getText();
    auto argList = args.as<ArgList>();

    std::vector<Type*> argTypes;
    std::transform(argList.begin(), argList.end(),
		    std::back_inserter(argTypes),
		    [](Expression* exp) -> Type* {
		        return exp->type();
		    });

    auto type = _compileTime->findFunction(identName, argTypes);
    auto ident = new Identifier(identName, type);

    return generify(new MethodCall(ident, argList, type));
}

antlrcpp::Any husky::HuskyCompiler::visitToIntegerLiteral(HuskyGrammar::ToIntegerLiteralContext *context) {
    return visit(context->integerLiteral());
}

antlrcpp::Any husky::HuskyCompiler::visitToFloatLiteral(HuskyGrammar::ToFloatLiteralContext *context) {
    return visit(context->floatLiteral());
}

antlrcpp::Any husky::HuskyCompiler::visitToBoolLiteral(HuskyGrammar::ToBoolLiteralContext *context) {
    auto type = _compileTime->findType("Bool");
    std::string s = context->getText();
    return generify(new BoolLiteral(s == "true", type));
}

antlrcpp::Any husky::HuskyCompiler::visitIntegerLiteral(HuskyGrammar::IntegerLiteralContext *context) {
    auto type = _compileTime->findType("Integer");
    return generify(new IntegerLiteral((int) std::strtol(context->DECIMAL_LITERAL()->getText().c_str(), nullptr, 10), type));
}

antlrcpp::Any husky::HuskyCompiler::visitFloatLiteral(HuskyGrammar::FloatLiteralContext *context) {
    auto type = _compileTime->findType("Float");
    return generify(new FloatLiteral((float) std::strtod(context->FLOAT_LITERAL()->getText().c_str(), nullptr), type));
}

antlrcpp::Any husky::HuskyCompiler::visitToUnary(HuskyGrammar::ToUnaryContext *context) {
    char opChar = context->prefix->getText().c_str()[0];
    UnaryExpr::Operation op;
    switch (opChar) {
        case '+':
            op = UnaryExpr::Positive;
            break;
        case '-':
            op = UnaryExpr::Negative;
            break;
        case '!':
            op = UnaryExpr::Not;
            break;
        default:
            throw std::runtime_error("unexpected binary operator " + context->prefix->getText());
    }

    auto expr = get<Expression>(visit(context->expression()));
    auto type = _compileTime->findFunction(to_string(op), {expr->type()});
    return generify(new UnaryExpr(op, expr, type));
}

antlrcpp::Any husky::HuskyCompiler::visitToCall(HuskyGrammar::ToCallContext *context) {
    return visit(context->methodCall());
}

antlrcpp::Any husky::HuskyCompiler::visitToPrimary(HuskyGrammar::ToPrimaryContext *context) {
    return visit(context->primary());
}

antlrcpp::Any husky::HuskyCompiler::visitToParen(HuskyGrammar::ToParenContext *context) {
    return visit(context->expression());
}

antlrcpp::Any husky::HuskyCompiler::visitToLiteral(HuskyGrammar::ToLiteralContext *context) {
    return visit(context->literal());
}

antlrcpp::Any husky::HuskyCompiler::visitToIdentifier(HuskyGrammar::ToIdentifierContext *context) {

    auto identName = context->IDENTIFIER()->getText();
    auto type = _compileTime->findIdentifier(identName);
    return generify(new Identifier(identName, type));
}

antlrcpp::Any husky::HuskyCompiler::visitToBinary(HuskyGrammar::ToBinaryContext *context) {

    auto stringOp = context->bop->getText();
    BinaryExpr::Operation op;

    if (stringOp == "+") {
        op = BinaryExpr::Add;
    } else if (stringOp == "-") {
        op = BinaryExpr::Sub;
    } else if (stringOp == "*") {
        op = BinaryExpr::Mul;
    } else if (stringOp == "/") {
        op = BinaryExpr::Div;
    } else if (stringOp == "|") {
	op = BinaryExpr::Or;
    } else if (stringOp == "&") {
	op = BinaryExpr::And;
    } else if (stringOp == ">") {
	op = BinaryExpr::Gt;
    } else if (stringOp == "<") {
	op = BinaryExpr::Lt;
    } else if (stringOp == ">=") {
	op = BinaryExpr::Ge;
    } else if (stringOp == "<=") {
	op = BinaryExpr::Le;
    } else {
        throw std::runtime_error("unexpected binary operator " + stringOp);
    }
    //  TODO:   more operation support

    auto left = get<Expression>(visit(context->expression(0)));
    auto right = get<Expression>(visit(context->expression(1)));

    auto type = _compileTime->findFunction(to_string(op), {left->type(), right->type()});

    return generify(new BinaryExpr(op, left, right, type));
}

antlrcpp::Any husky::HuskyCompiler::visitToArrayRef(HuskyGrammar::ToArrayRefContext *context) {

    auto arr = get<Expression>(visit(context->expression(0)));
    auto index = get<Expression>(visit(context->expression(1)));

    //	TODO:	get type from type of arr
    return generify(new ArrayRef(arr, index, nullptr));
}

antlrcpp::Any husky::HuskyCompiler::visitToAttrGet(HuskyGrammar::ToAttrGetContext *context) {

    auto expr = get<Expression>(visit(context->expression()));

    if (context->methodCall() != nullptr) {
	//	TODO:	get function call type from expr
        auto method = get<MethodCall>(visit(context->methodCall()));
        return generify(new AttrGet(expr, method, method->type()));
    } else {
	auto identName = context->IDENTIFIER()->getText();
	//	TODO:	get identifier type from expr
	auto identType = nullptr;
        auto ident = new Identifier(identName, identType);
        return generify(new AttrGet(expr, ident, identType));
    }
}
