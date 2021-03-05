
// Generated from grammar/HuskyGrammar.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "HuskyGrammarVisitor.h"


/**
 * This class provides an empty implementation of HuskyGrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  HuskyGrammarBaseVisitor : public HuskyGrammarVisitor {
public:

  virtual antlrcpp::Any visitExpressionList(HuskyGrammar::ExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodCall(HuskyGrammar::MethodCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToIntegerLiteral(HuskyGrammar::ToIntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToFloatLiteral(HuskyGrammar::ToFloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToBoolLiteral(HuskyGrammar::ToBoolLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerLiteral(HuskyGrammar::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatLiteral(HuskyGrammar::FloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToArraySlice(HuskyGrammar::ToArraySliceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToUnary(HuskyGrammar::ToUnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToCall(HuskyGrammar::ToCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToArrayRef(HuskyGrammar::ToArrayRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToPrimary(HuskyGrammar::ToPrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToBinary(HuskyGrammar::ToBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToAttrGet(HuskyGrammar::ToAttrGetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToParen(HuskyGrammar::ToParenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToLiteral(HuskyGrammar::ToLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToIdentifier(HuskyGrammar::ToIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }


};

