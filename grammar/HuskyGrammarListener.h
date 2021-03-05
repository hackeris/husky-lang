
// Generated from grammar/HuskyGrammar.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "HuskyGrammar.h"


/**
 * This interface defines an abstract listener for a parse tree produced by HuskyGrammar.
 */
class  HuskyGrammarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterExpressionList(HuskyGrammar::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(HuskyGrammar::ExpressionListContext *ctx) = 0;

  virtual void enterMethodCall(HuskyGrammar::MethodCallContext *ctx) = 0;
  virtual void exitMethodCall(HuskyGrammar::MethodCallContext *ctx) = 0;

  virtual void enterToIntegerLiteral(HuskyGrammar::ToIntegerLiteralContext *ctx) = 0;
  virtual void exitToIntegerLiteral(HuskyGrammar::ToIntegerLiteralContext *ctx) = 0;

  virtual void enterToFloatLiteral(HuskyGrammar::ToFloatLiteralContext *ctx) = 0;
  virtual void exitToFloatLiteral(HuskyGrammar::ToFloatLiteralContext *ctx) = 0;

  virtual void enterToBoolLiteral(HuskyGrammar::ToBoolLiteralContext *ctx) = 0;
  virtual void exitToBoolLiteral(HuskyGrammar::ToBoolLiteralContext *ctx) = 0;

  virtual void enterIntegerLiteral(HuskyGrammar::IntegerLiteralContext *ctx) = 0;
  virtual void exitIntegerLiteral(HuskyGrammar::IntegerLiteralContext *ctx) = 0;

  virtual void enterFloatLiteral(HuskyGrammar::FloatLiteralContext *ctx) = 0;
  virtual void exitFloatLiteral(HuskyGrammar::FloatLiteralContext *ctx) = 0;

  virtual void enterToArraySlice(HuskyGrammar::ToArraySliceContext *ctx) = 0;
  virtual void exitToArraySlice(HuskyGrammar::ToArraySliceContext *ctx) = 0;

  virtual void enterToUnary(HuskyGrammar::ToUnaryContext *ctx) = 0;
  virtual void exitToUnary(HuskyGrammar::ToUnaryContext *ctx) = 0;

  virtual void enterToCall(HuskyGrammar::ToCallContext *ctx) = 0;
  virtual void exitToCall(HuskyGrammar::ToCallContext *ctx) = 0;

  virtual void enterToArrayRef(HuskyGrammar::ToArrayRefContext *ctx) = 0;
  virtual void exitToArrayRef(HuskyGrammar::ToArrayRefContext *ctx) = 0;

  virtual void enterToPrimary(HuskyGrammar::ToPrimaryContext *ctx) = 0;
  virtual void exitToPrimary(HuskyGrammar::ToPrimaryContext *ctx) = 0;

  virtual void enterToBinary(HuskyGrammar::ToBinaryContext *ctx) = 0;
  virtual void exitToBinary(HuskyGrammar::ToBinaryContext *ctx) = 0;

  virtual void enterToAttrGet(HuskyGrammar::ToAttrGetContext *ctx) = 0;
  virtual void exitToAttrGet(HuskyGrammar::ToAttrGetContext *ctx) = 0;

  virtual void enterToIdentifier(HuskyGrammar::ToIdentifierContext *ctx) = 0;
  virtual void exitToIdentifier(HuskyGrammar::ToIdentifierContext *ctx) = 0;

  virtual void enterToParen(HuskyGrammar::ToParenContext *ctx) = 0;
  virtual void exitToParen(HuskyGrammar::ToParenContext *ctx) = 0;

  virtual void enterToLiteral(HuskyGrammar::ToLiteralContext *ctx) = 0;
  virtual void exitToLiteral(HuskyGrammar::ToLiteralContext *ctx) = 0;


};

