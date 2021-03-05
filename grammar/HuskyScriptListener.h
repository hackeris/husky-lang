
// Generated from grammar/HuskyScript.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "HuskyScript.h"


/**
 * This interface defines an abstract listener for a parse tree produced by HuskyScript.
 */
class  HuskyScriptListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterLang(HuskyScript::LangContext *ctx) = 0;
  virtual void exitLang(HuskyScript::LangContext *ctx) = 0;

  virtual void enterBasicStatement(HuskyScript::BasicStatementContext *ctx) = 0;
  virtual void exitBasicStatement(HuskyScript::BasicStatementContext *ctx) = 0;

  virtual void enterFunctionDeclaration(HuskyScript::FunctionDeclarationContext *ctx) = 0;
  virtual void exitFunctionDeclaration(HuskyScript::FunctionDeclarationContext *ctx) = 0;

  virtual void enterFormalParameterList(HuskyScript::FormalParameterListContext *ctx) = 0;
  virtual void exitFormalParameterList(HuskyScript::FormalParameterListContext *ctx) = 0;

  virtual void enterStatement(HuskyScript::StatementContext *ctx) = 0;
  virtual void exitStatement(HuskyScript::StatementContext *ctx) = 0;

  virtual void enterBlock(HuskyScript::BlockContext *ctx) = 0;
  virtual void exitBlock(HuskyScript::BlockContext *ctx) = 0;

  virtual void enterWhileStatement(HuskyScript::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(HuskyScript::WhileStatementContext *ctx) = 0;

  virtual void enterReturnStatement(HuskyScript::ReturnStatementContext *ctx) = 0;
  virtual void exitReturnStatement(HuskyScript::ReturnStatementContext *ctx) = 0;

  virtual void enterIfStatement(HuskyScript::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(HuskyScript::IfStatementContext *ctx) = 0;

  virtual void enterElseStatement(HuskyScript::ElseStatementContext *ctx) = 0;
  virtual void exitElseStatement(HuskyScript::ElseStatementContext *ctx) = 0;

  virtual void enterExpressionList(HuskyScript::ExpressionListContext *ctx) = 0;
  virtual void exitExpressionList(HuskyScript::ExpressionListContext *ctx) = 0;

  virtual void enterMethodCall(HuskyScript::MethodCallContext *ctx) = 0;
  virtual void exitMethodCall(HuskyScript::MethodCallContext *ctx) = 0;

  virtual void enterToIntegerLiteral(HuskyScript::ToIntegerLiteralContext *ctx) = 0;
  virtual void exitToIntegerLiteral(HuskyScript::ToIntegerLiteralContext *ctx) = 0;

  virtual void enterToFloatLiteral(HuskyScript::ToFloatLiteralContext *ctx) = 0;
  virtual void exitToFloatLiteral(HuskyScript::ToFloatLiteralContext *ctx) = 0;

  virtual void enterToBoolLiteral(HuskyScript::ToBoolLiteralContext *ctx) = 0;
  virtual void exitToBoolLiteral(HuskyScript::ToBoolLiteralContext *ctx) = 0;

  virtual void enterIntegerLiteral(HuskyScript::IntegerLiteralContext *ctx) = 0;
  virtual void exitIntegerLiteral(HuskyScript::IntegerLiteralContext *ctx) = 0;

  virtual void enterFloatLiteral(HuskyScript::FloatLiteralContext *ctx) = 0;
  virtual void exitFloatLiteral(HuskyScript::FloatLiteralContext *ctx) = 0;

  virtual void enterToArraySlice(HuskyScript::ToArraySliceContext *ctx) = 0;
  virtual void exitToArraySlice(HuskyScript::ToArraySliceContext *ctx) = 0;

  virtual void enterToAssign(HuskyScript::ToAssignContext *ctx) = 0;
  virtual void exitToAssign(HuskyScript::ToAssignContext *ctx) = 0;

  virtual void enterToUnary(HuskyScript::ToUnaryContext *ctx) = 0;
  virtual void exitToUnary(HuskyScript::ToUnaryContext *ctx) = 0;

  virtual void enterToCall(HuskyScript::ToCallContext *ctx) = 0;
  virtual void exitToCall(HuskyScript::ToCallContext *ctx) = 0;

  virtual void enterToArrayRef(HuskyScript::ToArrayRefContext *ctx) = 0;
  virtual void exitToArrayRef(HuskyScript::ToArrayRefContext *ctx) = 0;

  virtual void enterToPrimary(HuskyScript::ToPrimaryContext *ctx) = 0;
  virtual void exitToPrimary(HuskyScript::ToPrimaryContext *ctx) = 0;

  virtual void enterToBinary(HuskyScript::ToBinaryContext *ctx) = 0;
  virtual void exitToBinary(HuskyScript::ToBinaryContext *ctx) = 0;

  virtual void enterToAttrGet(HuskyScript::ToAttrGetContext *ctx) = 0;
  virtual void exitToAttrGet(HuskyScript::ToAttrGetContext *ctx) = 0;

  virtual void enterToIdentifier(HuskyScript::ToIdentifierContext *ctx) = 0;
  virtual void exitToIdentifier(HuskyScript::ToIdentifierContext *ctx) = 0;

  virtual void enterToParen(HuskyScript::ToParenContext *ctx) = 0;
  virtual void exitToParen(HuskyScript::ToParenContext *ctx) = 0;

  virtual void enterToLiteral(HuskyScript::ToLiteralContext *ctx) = 0;
  virtual void exitToLiteral(HuskyScript::ToLiteralContext *ctx) = 0;


};

