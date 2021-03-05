
// Generated from grammar/HuskyExpr.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "HuskyExpr.h"


/**
 * This interface defines an abstract listener for a parse tree produced by HuskyExpr.
 */
class  HuskyExprListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterToAssign(HuskyExpr::ToAssignContext *ctx) = 0;
  virtual void exitToAssign(HuskyExpr::ToAssignContext *ctx) = 0;

  virtual void enterToExpression(HuskyExpr::ToExpressionContext *ctx) = 0;
  virtual void exitToExpression(HuskyExpr::ToExpressionContext *ctx) = 0;

  virtual void enterExpressionList(HuskyExpr::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(HuskyExpr::ExpressionListContext *ctx) = 0;

  virtual void enterMethodCall(HuskyExpr::MethodCallContext *ctx) = 0;
  virtual void exitMethodCall(HuskyExpr::MethodCallContext *ctx) = 0;

  virtual void enterToIntegerLiteral(HuskyExpr::ToIntegerLiteralContext *ctx) = 0;
  virtual void exitToIntegerLiteral(HuskyExpr::ToIntegerLiteralContext *ctx) = 0;

  virtual void enterToFloatLiteral(HuskyExpr::ToFloatLiteralContext *ctx) = 0;
  virtual void exitToFloatLiteral(HuskyExpr::ToFloatLiteralContext *ctx) = 0;

  virtual void enterToBoolLiteral(HuskyExpr::ToBoolLiteralContext *ctx) = 0;
  virtual void exitToBoolLiteral(HuskyExpr::ToBoolLiteralContext *ctx) = 0;

  virtual void enterIntegerLiteral(HuskyExpr::IntegerLiteralContext *ctx) = 0;
  virtual void exitIntegerLiteral(HuskyExpr::IntegerLiteralContext *ctx) = 0;

  virtual void enterFloatLiteral(HuskyExpr::FloatLiteralContext *ctx) = 0;
  virtual void exitFloatLiteral(HuskyExpr::FloatLiteralContext *ctx) = 0;

  virtual void enterToArraySlice(HuskyExpr::ToArraySliceContext *ctx) = 0;
  virtual void exitToArraySlice(HuskyExpr::ToArraySliceContext *ctx) = 0;

  virtual void enterToUnary(HuskyExpr::ToUnaryContext *ctx) = 0;
  virtual void exitToUnary(HuskyExpr::ToUnaryContext *ctx) = 0;

  virtual void enterToCall(HuskyExpr::ToCallContext *ctx) = 0;
  virtual void exitToCall(HuskyExpr::ToCallContext *ctx) = 0;

  virtual void enterToArrayRef(HuskyExpr::ToArrayRefContext *ctx) = 0;
  virtual void exitToArrayRef(HuskyExpr::ToArrayRefContext *ctx) = 0;

  virtual void enterToPrimary(HuskyExpr::ToPrimaryContext *ctx) = 0;
  virtual void exitToPrimary(HuskyExpr::ToPrimaryContext *ctx) = 0;

  virtual void enterToBinary(HuskyExpr::ToBinaryContext *ctx) = 0;
  virtual void exitToBinary(HuskyExpr::ToBinaryContext *ctx) = 0;

  virtual void enterToAttrGet(HuskyExpr::ToAttrGetContext *ctx) = 0;
  virtual void exitToAttrGet(HuskyExpr::ToAttrGetContext *ctx) = 0;

  virtual void enterAssign(HuskyExpr::AssignContext *ctx) = 0;
  virtual void exitAssign(HuskyExpr::AssignContext *ctx) = 0;

  virtual void enterToIdentifier(HuskyExpr::ToIdentifierContext *ctx) = 0;
  virtual void exitToIdentifier(HuskyExpr::ToIdentifierContext *ctx) = 0;

  virtual void enterToParen(HuskyExpr::ToParenContext *ctx) = 0;
  virtual void exitToParen(HuskyExpr::ToParenContext *ctx) = 0;

  virtual void enterToLiteral(HuskyExpr::ToLiteralContext *ctx) = 0;
  virtual void exitToLiteral(HuskyExpr::ToLiteralContext *ctx) = 0;


};

