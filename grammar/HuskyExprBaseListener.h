
// Generated from grammar/HuskyExpr.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "HuskyExprListener.h"


/**
 * This class provides an empty implementation of HuskyExprListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  HuskyExprBaseListener : public HuskyExprListener {
public:

  virtual void enterExpressionList(HuskyExpr::ExpressionListContext * /*ctx*/) override { }
  virtual void exitExpressionList(HuskyExpr::ExpressionListContext * /*ctx*/) override { }

  virtual void enterMethodCall(HuskyExpr::MethodCallContext * /*ctx*/) override { }
  virtual void exitMethodCall(HuskyExpr::MethodCallContext * /*ctx*/) override { }

  virtual void enterToIntegerLiteral(HuskyExpr::ToIntegerLiteralContext * /*ctx*/) override { }
  virtual void exitToIntegerLiteral(HuskyExpr::ToIntegerLiteralContext * /*ctx*/) override { }

  virtual void enterToFloatLiteral(HuskyExpr::ToFloatLiteralContext * /*ctx*/) override { }
  virtual void exitToFloatLiteral(HuskyExpr::ToFloatLiteralContext * /*ctx*/) override { }

  virtual void enterToBoolLiteral(HuskyExpr::ToBoolLiteralContext * /*ctx*/) override { }
  virtual void exitToBoolLiteral(HuskyExpr::ToBoolLiteralContext * /*ctx*/) override { }

  virtual void enterIntegerLiteral(HuskyExpr::IntegerLiteralContext * /*ctx*/) override { }
  virtual void exitIntegerLiteral(HuskyExpr::IntegerLiteralContext * /*ctx*/) override { }

  virtual void enterFloatLiteral(HuskyExpr::FloatLiteralContext * /*ctx*/) override { }
  virtual void exitFloatLiteral(HuskyExpr::FloatLiteralContext * /*ctx*/) override { }

  virtual void enterToArraySlice(HuskyExpr::ToArraySliceContext * /*ctx*/) override { }
  virtual void exitToArraySlice(HuskyExpr::ToArraySliceContext * /*ctx*/) override { }

  virtual void enterToUnary(HuskyExpr::ToUnaryContext * /*ctx*/) override { }
  virtual void exitToUnary(HuskyExpr::ToUnaryContext * /*ctx*/) override { }

  virtual void enterToCall(HuskyExpr::ToCallContext * /*ctx*/) override { }
  virtual void exitToCall(HuskyExpr::ToCallContext * /*ctx*/) override { }

  virtual void enterToArrayRef(HuskyExpr::ToArrayRefContext * /*ctx*/) override { }
  virtual void exitToArrayRef(HuskyExpr::ToArrayRefContext * /*ctx*/) override { }

  virtual void enterToPrimary(HuskyExpr::ToPrimaryContext * /*ctx*/) override { }
  virtual void exitToPrimary(HuskyExpr::ToPrimaryContext * /*ctx*/) override { }

  virtual void enterToBinary(HuskyExpr::ToBinaryContext * /*ctx*/) override { }
  virtual void exitToBinary(HuskyExpr::ToBinaryContext * /*ctx*/) override { }

  virtual void enterToAttrGet(HuskyExpr::ToAttrGetContext * /*ctx*/) override { }
  virtual void exitToAttrGet(HuskyExpr::ToAttrGetContext * /*ctx*/) override { }

  virtual void enterToIdentifier(HuskyExpr::ToIdentifierContext * /*ctx*/) override { }
  virtual void exitToIdentifier(HuskyExpr::ToIdentifierContext * /*ctx*/) override { }

  virtual void enterToParen(HuskyExpr::ToParenContext * /*ctx*/) override { }
  virtual void exitToParen(HuskyExpr::ToParenContext * /*ctx*/) override { }

  virtual void enterToLiteral(HuskyExpr::ToLiteralContext * /*ctx*/) override { }
  virtual void exitToLiteral(HuskyExpr::ToLiteralContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

