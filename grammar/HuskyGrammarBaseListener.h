
// Generated from grammar/HuskyGrammar.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "HuskyGrammarListener.h"


/**
 * This class provides an empty implementation of HuskyGrammarListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  HuskyGrammarBaseListener : public HuskyGrammarListener {
public:

  virtual void enterExpressionList(HuskyGrammar::ExpressionListContext * /*ctx*/) override { }
  virtual void exitExpressionList(HuskyGrammar::ExpressionListContext * /*ctx*/) override { }

  virtual void enterMethodCall(HuskyGrammar::MethodCallContext * /*ctx*/) override { }
  virtual void exitMethodCall(HuskyGrammar::MethodCallContext * /*ctx*/) override { }

  virtual void enterToIntegerLiteral(HuskyGrammar::ToIntegerLiteralContext * /*ctx*/) override { }
  virtual void exitToIntegerLiteral(HuskyGrammar::ToIntegerLiteralContext * /*ctx*/) override { }

  virtual void enterToFloatLiteral(HuskyGrammar::ToFloatLiteralContext * /*ctx*/) override { }
  virtual void exitToFloatLiteral(HuskyGrammar::ToFloatLiteralContext * /*ctx*/) override { }

  virtual void enterToBoolLiteral(HuskyGrammar::ToBoolLiteralContext * /*ctx*/) override { }
  virtual void exitToBoolLiteral(HuskyGrammar::ToBoolLiteralContext * /*ctx*/) override { }

  virtual void enterIntegerLiteral(HuskyGrammar::IntegerLiteralContext * /*ctx*/) override { }
  virtual void exitIntegerLiteral(HuskyGrammar::IntegerLiteralContext * /*ctx*/) override { }

  virtual void enterFloatLiteral(HuskyGrammar::FloatLiteralContext * /*ctx*/) override { }
  virtual void exitFloatLiteral(HuskyGrammar::FloatLiteralContext * /*ctx*/) override { }

  virtual void enterToArraySlice(HuskyGrammar::ToArraySliceContext * /*ctx*/) override { }
  virtual void exitToArraySlice(HuskyGrammar::ToArraySliceContext * /*ctx*/) override { }

  virtual void enterToUnary(HuskyGrammar::ToUnaryContext * /*ctx*/) override { }
  virtual void exitToUnary(HuskyGrammar::ToUnaryContext * /*ctx*/) override { }

  virtual void enterToCall(HuskyGrammar::ToCallContext * /*ctx*/) override { }
  virtual void exitToCall(HuskyGrammar::ToCallContext * /*ctx*/) override { }

  virtual void enterToArrayRef(HuskyGrammar::ToArrayRefContext * /*ctx*/) override { }
  virtual void exitToArrayRef(HuskyGrammar::ToArrayRefContext * /*ctx*/) override { }

  virtual void enterToPrimary(HuskyGrammar::ToPrimaryContext * /*ctx*/) override { }
  virtual void exitToPrimary(HuskyGrammar::ToPrimaryContext * /*ctx*/) override { }

  virtual void enterToBinary(HuskyGrammar::ToBinaryContext * /*ctx*/) override { }
  virtual void exitToBinary(HuskyGrammar::ToBinaryContext * /*ctx*/) override { }

  virtual void enterToAttrGet(HuskyGrammar::ToAttrGetContext * /*ctx*/) override { }
  virtual void exitToAttrGet(HuskyGrammar::ToAttrGetContext * /*ctx*/) override { }

  virtual void enterToIdentifier(HuskyGrammar::ToIdentifierContext * /*ctx*/) override { }
  virtual void exitToIdentifier(HuskyGrammar::ToIdentifierContext * /*ctx*/) override { }

  virtual void enterToParen(HuskyGrammar::ToParenContext * /*ctx*/) override { }
  virtual void exitToParen(HuskyGrammar::ToParenContext * /*ctx*/) override { }

  virtual void enterToLiteral(HuskyGrammar::ToLiteralContext * /*ctx*/) override { }
  virtual void exitToLiteral(HuskyGrammar::ToLiteralContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

