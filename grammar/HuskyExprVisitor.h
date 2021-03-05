
// Generated from grammar/HuskyExpr.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "HuskyExpr.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by HuskyExpr.
 */
class  HuskyExprVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by HuskyExpr.
   */
    virtual antlrcpp::Any visitExpressionList(HuskyExpr::ExpressionListContext *context) = 0;

    virtual antlrcpp::Any visitMethodCall(HuskyExpr::MethodCallContext *context) = 0;

    virtual antlrcpp::Any visitToIntegerLiteral(HuskyExpr::ToIntegerLiteralContext *context) = 0;

    virtual antlrcpp::Any visitToFloatLiteral(HuskyExpr::ToFloatLiteralContext *context) = 0;

    virtual antlrcpp::Any visitToBoolLiteral(HuskyExpr::ToBoolLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIntegerLiteral(HuskyExpr::IntegerLiteralContext *context) = 0;

    virtual antlrcpp::Any visitFloatLiteral(HuskyExpr::FloatLiteralContext *context) = 0;

    virtual antlrcpp::Any visitToArraySlice(HuskyExpr::ToArraySliceContext *context) = 0;

    virtual antlrcpp::Any visitToUnary(HuskyExpr::ToUnaryContext *context) = 0;

    virtual antlrcpp::Any visitToCall(HuskyExpr::ToCallContext *context) = 0;

    virtual antlrcpp::Any visitToArrayRef(HuskyExpr::ToArrayRefContext *context) = 0;

    virtual antlrcpp::Any visitToPrimary(HuskyExpr::ToPrimaryContext *context) = 0;

    virtual antlrcpp::Any visitToBinary(HuskyExpr::ToBinaryContext *context) = 0;

    virtual antlrcpp::Any visitToAttrGet(HuskyExpr::ToAttrGetContext *context) = 0;

    virtual antlrcpp::Any visitToIdentifier(HuskyExpr::ToIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitToParen(HuskyExpr::ToParenContext *context) = 0;

    virtual antlrcpp::Any visitToLiteral(HuskyExpr::ToLiteralContext *context) = 0;


};

