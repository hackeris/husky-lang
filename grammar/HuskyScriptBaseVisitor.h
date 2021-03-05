
// Generated from grammar/HuskyScript.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "HuskyScriptVisitor.h"


/**
 * This class provides an empty implementation of HuskyScriptVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  HuskyScriptBaseVisitor : public HuskyScriptVisitor {
public:

  virtual antlrcpp::Any visitScript(HuskyScript::ScriptContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBasicStatement(HuskyScript::BasicStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionDeclaration(HuskyScript::FunctionDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormalParameterList(HuskyScript::FormalParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(HuskyScript::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(HuskyScript::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStatement(HuskyScript::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStatement(HuskyScript::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStatement(HuskyScript::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitElseStatement(HuskyScript::ElseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpressionList(HuskyScript::ExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMethodCall(HuskyScript::MethodCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToIntegerLiteral(HuskyScript::ToIntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToFloatLiteral(HuskyScript::ToFloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToBoolLiteral(HuskyScript::ToBoolLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerLiteral(HuskyScript::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFloatLiteral(HuskyScript::FloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToArraySlice(HuskyScript::ToArraySliceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToAssign(HuskyScript::ToAssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToUnary(HuskyScript::ToUnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToCall(HuskyScript::ToCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToArrayRef(HuskyScript::ToArrayRefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToPrimary(HuskyScript::ToPrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToBinary(HuskyScript::ToBinaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToAttrGet(HuskyScript::ToAttrGetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToIdentifier(HuskyScript::ToIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToParen(HuskyScript::ToParenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitToLiteral(HuskyScript::ToLiteralContext *ctx) override {
    return visitChildren(ctx);
  }


};

