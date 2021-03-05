
// Generated from grammar/HuskyExpr.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "HuskyExprVisitor.h"


/**
 * This class provides an empty implementation of HuskyExprVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  HuskyExprBaseVisitor : public HuskyExprVisitor {
public:

  virtual antlrcpp::Any visitToAssign(HuskyExpr::ToAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToExpression(HuskyExpr::ToExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionList(HuskyExpr::ExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodCall(HuskyExpr::MethodCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToIntegerLiteral(HuskyExpr::ToIntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToFloatLiteral(HuskyExpr::ToFloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToBoolLiteral(HuskyExpr::ToBoolLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerLiteral(HuskyExpr::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatLiteral(HuskyExpr::FloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToArraySlice(HuskyExpr::ToArraySliceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToUnary(HuskyExpr::ToUnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToCall(HuskyExpr::ToCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToArrayRef(HuskyExpr::ToArrayRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToPrimary(HuskyExpr::ToPrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToBinary(HuskyExpr::ToBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToAttrGet(HuskyExpr::ToAttrGetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssign(HuskyExpr::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToIdentifier(HuskyExpr::ToIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToParen(HuskyExpr::ToParenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToLiteral(HuskyExpr::ToLiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

