//
// Created by rainm on 2021/3/2.
//

#include "HuskyCompiler.h"

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

    auto ident = new Identifier(context->IDENTIFIER()->getText());

    return generify(new MethodCall(ident, args.as<ArgList>()));
}

antlrcpp::Any husky::HuskyCompiler::visitToIntegerLiteral(HuskyGrammar::ToIntegerLiteralContext *context) {
    return visit(context->integerLiteral());
}

antlrcpp::Any husky::HuskyCompiler::visitToFloatLiteral(HuskyGrammar::ToFloatLiteralContext *context) {
    return visit(context->floatLiteral());
}

antlrcpp::Any husky::HuskyCompiler::visitToBoolLiteral(HuskyGrammar::ToBoolLiteralContext *context) {
    std::string s = context->getText();
    return generify(new BoolLiteral(s == "true"));
}

antlrcpp::Any husky::HuskyCompiler::visitIntegerLiteral(HuskyGrammar::IntegerLiteralContext *context) {
    return generify(new IntegerLiteral((int) std::strtol(context->DECIMAL_LITERAL()->getText().c_str(), nullptr, 10)));
}

antlrcpp::Any husky::HuskyCompiler::visitFloatLiteral(HuskyGrammar::FloatLiteralContext *context) {
    return generify(new FloatLiteral((float) std::strtod(context->FLOAT_LITERAL()->getText().c_str(), nullptr)));
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

    auto expr = visit(context->expression());
    return generify(new UnaryExpr(op, get<Expression>(expr)));
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
    return generify(new Identifier(context->IDENTIFIER()->getText()));
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
    } else {
        throw std::runtime_error("unexpected binary operator " + stringOp);
    }
    //  TODO:   more operation support

    auto left = visit(context->expression(0));
    auto right = visit(context->expression(1));

    return generify(new BinaryExpr(op, get<Expression>(left), get<Expression>(right)));
}

antlrcpp::Any husky::HuskyCompiler::visitToArrayRef(HuskyGrammar::ToArrayRefContext *context) {

    auto arr = visit(context->expression(0));
    auto index = visit(context->expression(1));

    return generify(new ArrayRef(get<Expression>(arr), get<Expression>(index)));
}

antlrcpp::Any husky::HuskyCompiler::visitToAttrGet(HuskyGrammar::ToAttrGetContext *context) {

    auto expr = visit(context->expression());

    if (context->methodCall() != nullptr) {
        auto method = visit(context->methodCall());
        return generify(new AttrGet(get<Expression>(expr), get<MethodCall>(method)));
    } else {
        auto ident = new Identifier(context->IDENTIFIER()->getText());
        return generify(new AttrGet(get<Expression>(expr), ident));
    }
}