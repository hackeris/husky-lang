
// Generated from grammar/HuskyScript.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "HuskyScriptListener.h"


/**
 * This class provides an empty implementation of HuskyScriptListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  HuskyScriptBaseListener : public HuskyScriptListener {
public:

  virtual void enterLang(HuskyScript::LangContext * /*ctx*/) override { }
  virtual void exitLang(HuskyScript::LangContext * /*ctx*/) override { }

  virtual void enterBasicStatement(HuskyScript::BasicStatementContext * /*ctx*/) override { }
  virtual void exitBasicStatement(HuskyScript::BasicStatementContext * /*ctx*/) override { }

  virtual void enterFunctionDeclaration(HuskyScript::FunctionDeclarationContext * /*ctx*/) override { }
  virtual void exitFunctionDeclaration(HuskyScript::FunctionDeclarationContext * /*ctx*/) override { }

  virtual void enterFormalParameterList(HuskyScript::FormalParameterListContext * /*ctx*/) override { }
  virtual void exitFormalParameterList(HuskyScript::FormalParameterListContext * /*ctx*/) override { }

  virtual void enterStatement(HuskyScript::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(HuskyScript::StatementContext * /*ctx*/) override { }

  virtual void enterBlock(HuskyScript::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(HuskyScript::BlockContext * /*ctx*/) override { }

  virtual void enterWhileStatement(HuskyScript::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(HuskyScript::WhileStatementContext * /*ctx*/) override { }

  virtual void enterReturnStatement(HuskyScript::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(HuskyScript::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterIfStatement(HuskyScript::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(HuskyScript::IfStatementContext * /*ctx*/) override { }

  virtual void enterElseStatement(HuskyScript::ElseStatementContext * /*ctx*/) override { }
  virtual void exitElseStatement(HuskyScript::ElseStatementContext * /*ctx*/) override { }

  virtual void enterExpressionList(HuskyScript::ExpressionListContext * /*ctx*/) override { }
  virtual void exitExpressionList(HuskyScript::ExpressionListContext * /*ctx*/) override { }

  virtual void enterMethodCall(HuskyScript::MethodCallContext * /*ctx*/) override { }
  virtual void exitMethodCall(HuskyScript::MethodCallContext * /*ctx*/) override { }

  virtual void enterToIntegerLiteral(HuskyScript::ToIntegerLiteralContext * /*ctx*/) override { }
  virtual void exitToIntegerLiteral(HuskyScript::ToIntegerLiteralContext * /*ctx*/) override { }

  virtual void enterToFloatLiteral(HuskyScript::ToFloatLiteralContext * /*ctx*/) override { }
  virtual void exitToFloatLiteral(HuskyScript::ToFloatLiteralContext * /*ctx*/) override { }

  virtual void enterToBoolLiteral(HuskyScript::ToBoolLiteralContext * /*ctx*/) override { }
  virtual void exitToBoolLiteral(HuskyScript::ToBoolLiteralContext * /*ctx*/) override { }

  virtual void enterIntegerLiteral(HuskyScript::IntegerLiteralContext * /*ctx*/) override { }
  virtual void exitIntegerLiteral(HuskyScript::IntegerLiteralContext * /*ctx*/) override { }

  virtual void enterFloatLiteral(HuskyScript::FloatLiteralContext * /*ctx*/) override { }
  virtual void exitFloatLiteral(HuskyScript::FloatLiteralContext * /*ctx*/) override { }

  virtual void enterToArraySlice(HuskyScript::ToArraySliceContext * /*ctx*/) override { }
  virtual void exitToArraySlice(HuskyScript::ToArraySliceContext * /*ctx*/) override { }

  virtual void enterToAssign(HuskyScript::ToAssignContext * /*ctx*/) override { }
  virtual void exitToAssign(HuskyScript::ToAssignContext * /*ctx*/) override { }

  virtual void enterToUnary(HuskyScript::ToUnaryContext * /*ctx*/) override { }
  virtual void exitToUnary(HuskyScript::ToUnaryContext * /*ctx*/) override { }

  virtual void enterToCall(HuskyScript::ToCallContext * /*ctx*/) override { }
  virtual void exitToCall(HuskyScript::ToCallContext * /*ctx*/) override { }

  virtual void enterToArrayRef(HuskyScript::ToArrayRefContext * /*ctx*/) override { }
  virtual void exitToArrayRef(HuskyScript::ToArrayRefContext * /*ctx*/) override { }

  virtual void enterToPrimary(HuskyScript::ToPrimaryContext * /*ctx*/) override { }
  virtual void exitToPrimary(HuskyScript::ToPrimaryContext * /*ctx*/) override { }

  virtual void enterToBinary(HuskyScript::ToBinaryContext * /*ctx*/) override { }
  virtual void exitToBinary(HuskyScript::ToBinaryContext * /*ctx*/) override { }

  virtual void enterToAttrGet(HuskyScript::ToAttrGetContext * /*ctx*/) override { }
  virtual void exitToAttrGet(HuskyScript::ToAttrGetContext * /*ctx*/) override { }

  virtual void enterToIdentifier(HuskyScript::ToIdentifierContext * /*ctx*/) override { }
  virtual void exitToIdentifier(HuskyScript::ToIdentifierContext * /*ctx*/) override { }

  virtual void enterToParen(HuskyScript::ToParenContext * /*ctx*/) override { }
  virtual void exitToParen(HuskyScript::ToParenContext * /*ctx*/) override { }

  virtual void enterToLiteral(HuskyScript::ToLiteralContext * /*ctx*/) override { }
  virtual void exitToLiteral(HuskyScript::ToLiteralContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

