
// Generated from grammar/HuskyGrammar.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "HuskyGrammar.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by HuskyGrammar.
 */
class  HuskyGrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by HuskyGrammar.
   */
    virtual antlrcpp::Any visitExpressionList(HuskyGrammar::ExpressionListContext *context) = 0;

    virtual antlrcpp::Any visitMethodCall(HuskyGrammar::MethodCallContext *context) = 0;

    virtual antlrcpp::Any visitToIntegerLiteral(HuskyGrammar::ToIntegerLiteralContext *context) = 0;

    virtual antlrcpp::Any visitToFloatLiteral(HuskyGrammar::ToFloatLiteralContext *context) = 0;

    virtual antlrcpp::Any visitToBoolLiteral(HuskyGrammar::ToBoolLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIntegerLiteral(HuskyGrammar::IntegerLiteralContext *context) = 0;

    virtual antlrcpp::Any visitFloatLiteral(HuskyGrammar::FloatLiteralContext *context) = 0;

    virtual antlrcpp::Any visitToUnary(HuskyGrammar::ToUnaryContext *context) = 0;

    virtual antlrcpp::Any visitToCall(HuskyGrammar::ToCallContext *context) = 0;

    virtual antlrcpp::Any visitToArrayRef(HuskyGrammar::ToArrayRefContext *context) = 0;

    virtual antlrcpp::Any visitToPrimary(HuskyGrammar::ToPrimaryContext *context) = 0;

    virtual antlrcpp::Any visitToBinary(HuskyGrammar::ToBinaryContext *context) = 0;

    virtual antlrcpp::Any visitToAttrGet(HuskyGrammar::ToAttrGetContext *context) = 0;

    virtual antlrcpp::Any visitToParen(HuskyGrammar::ToParenContext *context) = 0;

    virtual antlrcpp::Any visitToLiteral(HuskyGrammar::ToLiteralContext *context) = 0;

    virtual antlrcpp::Any visitToIdentifier(HuskyGrammar::ToIdentifierContext *context) = 0;


};

