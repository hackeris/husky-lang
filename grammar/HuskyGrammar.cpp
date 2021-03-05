
// Generated from grammar/HuskyGrammar.g4 by ANTLR 4.7.2


#include "HuskyGrammarListener.h"
#include "HuskyGrammarVisitor.h"

#include "HuskyGrammar.h"


using namespace antlrcpp;
using namespace antlr4;

HuskyGrammar::HuskyGrammar(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

HuskyGrammar::~HuskyGrammar() {
  delete _interpreter;
}

std::string HuskyGrammar::getGrammarFileName() const {
  return "HuskyGrammar.g4";
}

const std::vector<std::string>& HuskyGrammar::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& HuskyGrammar::getVocabulary() const {
  return _vocabulary;
}


//----------------- ExpressionListContext ------------------------------------------------------------------

HuskyGrammar::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuskyGrammar::ExpressionContext *> HuskyGrammar::ExpressionListContext::expression() {
  return getRuleContexts<HuskyGrammar::ExpressionContext>();
}

HuskyGrammar::ExpressionContext* HuskyGrammar::ExpressionListContext::expression(size_t i) {
  return getRuleContext<HuskyGrammar::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> HuskyGrammar::ExpressionListContext::COMMA() {
  return getTokens(HuskyGrammar::COMMA);
}

tree::TerminalNode* HuskyGrammar::ExpressionListContext::COMMA(size_t i) {
  return getToken(HuskyGrammar::COMMA, i);
}


size_t HuskyGrammar::ExpressionListContext::getRuleIndex() const {
  return HuskyGrammar::RuleExpressionList;
}

void HuskyGrammar::ExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionList(this);
}

void HuskyGrammar::ExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionList(this);
}


antlrcpp::Any HuskyGrammar::ExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyGrammarVisitor*>(visitor))
    return parserVisitor->visitExpressionList(this);
  else
    return visitor->visitChildren(this);
}

HuskyGrammar::ExpressionListContext* HuskyGrammar::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 0, HuskyGrammar::RuleExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(14);
    expression(0);
    setState(19);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuskyGrammar::COMMA) {
      setState(15);
      match(HuskyGrammar::COMMA);
      setState(16);
      expression(0);
      setState(21);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodCallContext ------------------------------------------------------------------

HuskyGrammar::MethodCallContext::MethodCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyGrammar::MethodCallContext::IDENTIFIER() {
  return getToken(HuskyGrammar::IDENTIFIER, 0);
}

tree::TerminalNode* HuskyGrammar::MethodCallContext::LPAREN() {
  return getToken(HuskyGrammar::LPAREN, 0);
}

tree::TerminalNode* HuskyGrammar::MethodCallContext::RPAREN() {
  return getToken(HuskyGrammar::RPAREN, 0);
}

HuskyGrammar::ExpressionListContext* HuskyGrammar::MethodCallContext::expressionList() {
  return getRuleContext<HuskyGrammar::ExpressionListContext>(0);
}


size_t HuskyGrammar::MethodCallContext::getRuleIndex() const {
  return HuskyGrammar::RuleMethodCall;
}

void HuskyGrammar::MethodCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodCall(this);
}

void HuskyGrammar::MethodCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodCall(this);
}


antlrcpp::Any HuskyGrammar::MethodCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyGrammarVisitor*>(visitor))
    return parserVisitor->visitMethodCall(this);
  else
    return visitor->visitChildren(this);
}

HuskyGrammar::MethodCallContext* HuskyGrammar::methodCall() {
  MethodCallContext *_localctx = _tracker.createInstance<MethodCallContext>(_ctx, getState());
  enterRule(_localctx, 2, HuskyGrammar::RuleMethodCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(22);
    match(HuskyGrammar::IDENTIFIER);
    setState(23);
    match(HuskyGrammar::LPAREN);
    setState(25);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuskyGrammar::DECIMAL_LITERAL)
      | (1ULL << HuskyGrammar::FLOAT_LITERAL)
      | (1ULL << HuskyGrammar::BOOL_LITERAL)
      | (1ULL << HuskyGrammar::IDENTIFIER)
      | (1ULL << HuskyGrammar::LPAREN)
      | (1ULL << HuskyGrammar::BANG)
      | (1ULL << HuskyGrammar::ADD)
      | (1ULL << HuskyGrammar::SUB))) != 0)) {
      setState(24);
      expressionList();
    }
    setState(27);
    match(HuskyGrammar::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

HuskyGrammar::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HuskyGrammar::LiteralContext::getRuleIndex() const {
  return HuskyGrammar::RuleLiteral;
}

void HuskyGrammar::LiteralContext::copyFrom(LiteralContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ToIntegerLiteralContext ------------------------------------------------------------------

HuskyGrammar::IntegerLiteralContext* HuskyGrammar::ToIntegerLiteralContext::integerLiteral() {
  return getRuleContext<HuskyGrammar::IntegerLiteralContext>(0);
}

HuskyGrammar::ToIntegerLiteralContext::ToIntegerLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }

void HuskyGrammar::ToIntegerLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToIntegerLiteral(this);
}
void HuskyGrammar::ToIntegerLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToIntegerLiteral(this);
}

antlrcpp::Any HuskyGrammar::ToIntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyGrammarVisitor*>(visitor))
    return parserVisitor->visitToIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToFloatLiteralContext ------------------------------------------------------------------

HuskyGrammar::FloatLiteralContext* HuskyGrammar::ToFloatLiteralContext::floatLiteral() {
  return getRuleContext<HuskyGrammar::FloatLiteralContext>(0);
}

HuskyGrammar::ToFloatLiteralContext::ToFloatLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }

void HuskyGrammar::ToFloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToFloatLiteral(this);
}
void HuskyGrammar::ToFloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToFloatLiteral(this);
}

antlrcpp::Any HuskyGrammar::ToFloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyGrammarVisitor*>(visitor))
    return parserVisitor->visitToFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToBoolLiteralContext ------------------------------------------------------------------

tree::TerminalNode* HuskyGrammar::ToBoolLiteralContext::BOOL_LITERAL() {
  return getToken(HuskyGrammar::BOOL_LITERAL, 0);
}

HuskyGrammar::ToBoolLiteralContext::ToBoolLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }

void HuskyGrammar::ToBoolLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToBoolLiteral(this);
}
void HuskyGrammar::ToBoolLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToBoolLiteral(this);
}

antlrcpp::Any HuskyGrammar::ToBoolLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyGrammarVisitor*>(visitor))
    return parserVisitor->visitToBoolLiteral(this);
  else
    return visitor->visitChildren(this);
}
HuskyGrammar::LiteralContext* HuskyGrammar::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 4, HuskyGrammar::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(32);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuskyGrammar::DECIMAL_LITERAL: {
        _localctx = dynamic_cast<LiteralContext *>(_tracker.createInstance<HuskyGrammar::ToIntegerLiteralContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(29);
        integerLiteral();
        break;
      }

      case HuskyGrammar::FLOAT_LITERAL: {
        _localctx = dynamic_cast<LiteralContext *>(_tracker.createInstance<HuskyGrammar::ToFloatLiteralContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(30);
        floatLiteral();
        break;
      }

      case HuskyGrammar::BOOL_LITERAL: {
        _localctx = dynamic_cast<LiteralContext *>(_tracker.createInstance<HuskyGrammar::ToBoolLiteralContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(31);
        match(HuskyGrammar::BOOL_LITERAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IntegerLiteralContext ------------------------------------------------------------------

HuskyGrammar::IntegerLiteralContext::IntegerLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyGrammar::IntegerLiteralContext::DECIMAL_LITERAL() {
  return getToken(HuskyGrammar::DECIMAL_LITERAL, 0);
}


size_t HuskyGrammar::IntegerLiteralContext::getRuleIndex() const {
  return HuskyGrammar::RuleIntegerLiteral;
}

void HuskyGrammar::IntegerLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerLiteral(this);
}

void HuskyGrammar::IntegerLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerLiteral(this);
}


antlrcpp::Any HuskyGrammar::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyGrammarVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}

HuskyGrammar::IntegerLiteralContext* HuskyGrammar::integerLiteral() {
  IntegerLiteralContext *_localctx = _tracker.createInstance<IntegerLiteralContext>(_ctx, getState());
  enterRule(_localctx, 6, HuskyGrammar::RuleIntegerLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    match(HuskyGrammar::DECIMAL_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatLiteralContext ------------------------------------------------------------------

HuskyGrammar::FloatLiteralContext::FloatLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyGrammar::FloatLiteralContext::FLOAT_LITERAL() {
  return getToken(HuskyGrammar::FLOAT_LITERAL, 0);
}


size_t HuskyGrammar::FloatLiteralContext::getRuleIndex() const {
  return HuskyGrammar::RuleFloatLiteral;
}

void HuskyGrammar::FloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatLiteral(this);
}

void HuskyGrammar::FloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatLiteral(this);
}


antlrcpp::Any HuskyGrammar::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyGrammarVisitor*>(visitor))
    return parserVisitor->visitFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}

HuskyGrammar::FloatLiteralContext* HuskyGrammar::floatLiteral() {
  FloatLiteralContext *_localctx = _tracker.createInstance<FloatLiteralContext>(_ctx, getState());
  enterRule(_localctx, 8, HuskyGrammar::RuleFloatLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    match(HuskyGrammar::FLOAT_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

HuskyGrammar::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HuskyGrammar::ExpressionContext::getRuleIndex() const {
  return HuskyGrammar::RuleExpression;
}

void HuskyGrammar::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ToArraySliceContext ------------------------------------------------------------------

std::vector<HuskyGrammar::ExpressionContext *> HuskyGrammar::ToArraySliceContext::expression() {
  return getRuleContexts<HuskyGrammar::ExpressionContext>();
}

HuskyGrammar::ExpressionContext* HuskyGrammar::ToArraySliceContext::expression(size_t i) {
  return getRuleContext<HuskyGrammar::ExpressionContext>(i);
}

tree::TerminalNode* HuskyGrammar::ToArraySliceContext::LBRACK() {
  return getToken(HuskyGrammar::LBRACK, 0);
}

tree::TerminalNode* HuskyGrammar::ToArraySliceContext::COLON() {
  return getToken(HuskyGrammar::COLON, 0);
}

tree::TerminalNode* HuskyGrammar::ToArraySliceContext::RBRACK() {
  return getToken(HuskyGrammar::RBRACK, 0);
}

HuskyGrammar::ToArraySliceContext::ToArraySliceContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyGrammar::ToArraySliceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToArraySlice(this);
}
void HuskyGrammar::ToArraySliceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToArraySlice(this);
}

antlrcpp::Any HuskyGrammar::ToArraySliceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyGrammarVisitor*>(visitor))
    return parserVisitor->visitToArraySlice(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToUnaryContext ------------------------------------------------------------------

HuskyGrammar::ExpressionContext* HuskyGrammar::ToUnaryContext::expression() {
  return getRuleContext<HuskyGrammar::ExpressionContext>(0);
}

tree::TerminalNode* HuskyGrammar::ToUnaryContext::ADD() {
  return getToken(HuskyGrammar::ADD, 0);
}

tree::TerminalNode* HuskyGrammar::ToUnaryContext::SUB() {
  return getToken(HuskyGrammar::SUB, 0);
}

tree::TerminalNode* HuskyGrammar::ToUnaryContext::BANG() {
  return getToken(HuskyGrammar::BANG, 0);
}

HuskyGrammar::ToUnaryContext::ToUnaryContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyGrammar::ToUnaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToUnary(this);
}
void HuskyGrammar::ToUnaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToUnary(this);
}

antlrcpp::Any HuskyGrammar::ToUnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyGrammarVisitor*>(visitor))
    return parserVisitor->visitToUnary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToCallContext ------------------------------------------------------------------

HuskyGrammar::MethodCallContext* HuskyGrammar::ToCallContext::methodCall() {
  return getRuleContext<HuskyGrammar::MethodCallContext>(0);
}

HuskyGrammar::ToCallContext::ToCallContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyGrammar::ToCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToCall(this);
}
void HuskyGrammar::ToCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToCall(this);
}

antlrcpp::Any HuskyGrammar::ToCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyGrammarVisitor*>(visitor))
    return parserVisitor->visitToCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToArrayRefContext ------------------------------------------------------------------

std::vector<HuskyGrammar::ExpressionContext *> HuskyGrammar::ToArrayRefContext::expression() {
  return getRuleContexts<HuskyGrammar::ExpressionContext>();
}

HuskyGrammar::ExpressionContext* HuskyGrammar::ToArrayRefContext::expression(size_t i) {
  return getRuleContext<HuskyGrammar::ExpressionContext>(i);
}

tree::TerminalNode* HuskyGrammar::ToArrayRefContext::LBRACK() {
  return getToken(HuskyGrammar::LBRACK, 0);
}

tree::TerminalNode* HuskyGrammar::ToArrayRefContext::RBRACK() {
  return getToken(HuskyGrammar::RBRACK, 0);
}

HuskyGrammar::ToArrayRefContext::ToArrayRefContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyGrammar::ToArrayRefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToArrayRef(this);
}
void HuskyGrammar::ToArrayRefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToArrayRef(this);
}

antlrcpp::Any HuskyGrammar::ToArrayRefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyGrammarVisitor*>(visitor))
    return parserVisitor->visitToArrayRef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToPrimaryContext ------------------------------------------------------------------

HuskyGrammar::PrimaryContext* HuskyGrammar::ToPrimaryContext::primary() {
  return getRuleContext<HuskyGrammar::PrimaryContext>(0);
}

HuskyGrammar::ToPrimaryContext::ToPrimaryContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyGrammar::ToPrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToPrimary(this);
}
void HuskyGrammar::ToPrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToPrimary(this);
}

antlrcpp::Any HuskyGrammar::ToPrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyGrammarVisitor*>(visitor))
    return parserVisitor->visitToPrimary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToBinaryContext ------------------------------------------------------------------

std::vector<HuskyGrammar::ExpressionContext *> HuskyGrammar::ToBinaryContext::expression() {
  return getRuleContexts<HuskyGrammar::ExpressionContext>();
}

HuskyGrammar::ExpressionContext* HuskyGrammar::ToBinaryContext::expression(size_t i) {
  return getRuleContext<HuskyGrammar::ExpressionContext>(i);
}

tree::TerminalNode* HuskyGrammar::ToBinaryContext::CARET() {
  return getToken(HuskyGrammar::CARET, 0);
}

tree::TerminalNode* HuskyGrammar::ToBinaryContext::MUL() {
  return getToken(HuskyGrammar::MUL, 0);
}

tree::TerminalNode* HuskyGrammar::ToBinaryContext::DIV() {
  return getToken(HuskyGrammar::DIV, 0);
}

tree::TerminalNode* HuskyGrammar::ToBinaryContext::ADD() {
  return getToken(HuskyGrammar::ADD, 0);
}

tree::TerminalNode* HuskyGrammar::ToBinaryContext::SUB() {
  return getToken(HuskyGrammar::SUB, 0);
}

tree::TerminalNode* HuskyGrammar::ToBinaryContext::LE() {
  return getToken(HuskyGrammar::LE, 0);
}

tree::TerminalNode* HuskyGrammar::ToBinaryContext::GE() {
  return getToken(HuskyGrammar::GE, 0);
}

tree::TerminalNode* HuskyGrammar::ToBinaryContext::GT() {
  return getToken(HuskyGrammar::GT, 0);
}

tree::TerminalNode* HuskyGrammar::ToBinaryContext::LT() {
  return getToken(HuskyGrammar::LT, 0);
}

tree::TerminalNode* HuskyGrammar::ToBinaryContext::EQUAL() {
  return getToken(HuskyGrammar::EQUAL, 0);
}

tree::TerminalNode* HuskyGrammar::ToBinaryContext::NOTEQUAL() {
  return getToken(HuskyGrammar::NOTEQUAL, 0);
}

tree::TerminalNode* HuskyGrammar::ToBinaryContext::AND() {
  return getToken(HuskyGrammar::AND, 0);
}

tree::TerminalNode* HuskyGrammar::ToBinaryContext::OR() {
  return getToken(HuskyGrammar::OR, 0);
}

HuskyGrammar::ToBinaryContext::ToBinaryContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyGrammar::ToBinaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToBinary(this);
}
void HuskyGrammar::ToBinaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToBinary(this);
}

antlrcpp::Any HuskyGrammar::ToBinaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyGrammarVisitor*>(visitor))
    return parserVisitor->visitToBinary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToAttrGetContext ------------------------------------------------------------------

HuskyGrammar::ExpressionContext* HuskyGrammar::ToAttrGetContext::expression() {
  return getRuleContext<HuskyGrammar::ExpressionContext>(0);
}

tree::TerminalNode* HuskyGrammar::ToAttrGetContext::DOT() {
  return getToken(HuskyGrammar::DOT, 0);
}

tree::TerminalNode* HuskyGrammar::ToAttrGetContext::IDENTIFIER() {
  return getToken(HuskyGrammar::IDENTIFIER, 0);
}

HuskyGrammar::MethodCallContext* HuskyGrammar::ToAttrGetContext::methodCall() {
  return getRuleContext<HuskyGrammar::MethodCallContext>(0);
}

HuskyGrammar::ToAttrGetContext::ToAttrGetContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyGrammar::ToAttrGetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToAttrGet(this);
}
void HuskyGrammar::ToAttrGetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToAttrGet(this);
}

antlrcpp::Any HuskyGrammar::ToAttrGetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyGrammarVisitor*>(visitor))
    return parserVisitor->visitToAttrGet(this);
  else
    return visitor->visitChildren(this);
}

HuskyGrammar::ExpressionContext* HuskyGrammar::expression() {
   return expression(0);
}

HuskyGrammar::ExpressionContext* HuskyGrammar::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  HuskyGrammar::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  HuskyGrammar::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, HuskyGrammar::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(45);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ToPrimaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(39);
      primary();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ToCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(40);
      methodCall();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ToUnaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(41);
      dynamic_cast<ToUnaryContext *>(_localctx)->prefix = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == HuskyGrammar::ADD

      || _la == HuskyGrammar::SUB)) {
        dynamic_cast<ToUnaryContext *>(_localctx)->prefix = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(42);
      expression(9);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ToUnaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(43);
      dynamic_cast<ToUnaryContext *>(_localctx)->prefix = match(HuskyGrammar::BANG);
      setState(44);
      expression(8);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(88);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(86);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ToBinaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(47);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(48);
          dynamic_cast<ToBinaryContext *>(_localctx)->bop = match(HuskyGrammar::CARET);
          setState(49);
          expression(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ToBinaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(50);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(51);
          dynamic_cast<ToBinaryContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == HuskyGrammar::MUL

          || _la == HuskyGrammar::DIV)) {
            dynamic_cast<ToBinaryContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(52);
          expression(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ToBinaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(53);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(54);
          dynamic_cast<ToBinaryContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == HuskyGrammar::ADD

          || _la == HuskyGrammar::SUB)) {
            dynamic_cast<ToBinaryContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(55);
          expression(6);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ToBinaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(56);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(57);
          dynamic_cast<ToBinaryContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << HuskyGrammar::GT)
            | (1ULL << HuskyGrammar::LT)
            | (1ULL << HuskyGrammar::LE)
            | (1ULL << HuskyGrammar::GE))) != 0))) {
            dynamic_cast<ToBinaryContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(58);
          expression(5);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ToBinaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(59);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(60);
          dynamic_cast<ToBinaryContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == HuskyGrammar::EQUAL

          || _la == HuskyGrammar::NOTEQUAL)) {
            dynamic_cast<ToBinaryContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(61);
          expression(4);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<ToBinaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(62);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(63);
          dynamic_cast<ToBinaryContext *>(_localctx)->bop = match(HuskyGrammar::AND);
          setState(64);
          expression(3);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<ToBinaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(65);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(66);
          dynamic_cast<ToBinaryContext *>(_localctx)->bop = match(HuskyGrammar::OR);
          setState(67);
          expression(2);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<ToAttrGetContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(68);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(69);
          dynamic_cast<ToAttrGetContext *>(_localctx)->dot = match(HuskyGrammar::DOT);
          setState(72);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
          case 1: {
            setState(70);
            match(HuskyGrammar::IDENTIFIER);
            break;
          }

          case 2: {
            setState(71);
            methodCall();
            break;
          }

          }
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<ToArrayRefContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(74);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(75);
          match(HuskyGrammar::LBRACK);
          setState(76);
          expression(0);
          setState(77);
          match(HuskyGrammar::RBRACK);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<ToArraySliceContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(79);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(80);
          match(HuskyGrammar::LBRACK);
          setState(81);
          dynamic_cast<ToArraySliceContext *>(_localctx)->begin = expression(0);
          setState(82);
          match(HuskyGrammar::COLON);
          setState(83);
          dynamic_cast<ToArraySliceContext *>(_localctx)->end = expression(0);
          setState(84);
          match(HuskyGrammar::RBRACK);
          break;
        }

        } 
      }
      setState(90);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

HuskyGrammar::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HuskyGrammar::PrimaryContext::getRuleIndex() const {
  return HuskyGrammar::RulePrimary;
}

void HuskyGrammar::PrimaryContext::copyFrom(PrimaryContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ToParenContext ------------------------------------------------------------------

tree::TerminalNode* HuskyGrammar::ToParenContext::LPAREN() {
  return getToken(HuskyGrammar::LPAREN, 0);
}

HuskyGrammar::ExpressionContext* HuskyGrammar::ToParenContext::expression() {
  return getRuleContext<HuskyGrammar::ExpressionContext>(0);
}

tree::TerminalNode* HuskyGrammar::ToParenContext::RPAREN() {
  return getToken(HuskyGrammar::RPAREN, 0);
}

HuskyGrammar::ToParenContext::ToParenContext(PrimaryContext *ctx) { copyFrom(ctx); }

void HuskyGrammar::ToParenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToParen(this);
}
void HuskyGrammar::ToParenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToParen(this);
}

antlrcpp::Any HuskyGrammar::ToParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyGrammarVisitor*>(visitor))
    return parserVisitor->visitToParen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToIdentifierContext ------------------------------------------------------------------

tree::TerminalNode* HuskyGrammar::ToIdentifierContext::IDENTIFIER() {
  return getToken(HuskyGrammar::IDENTIFIER, 0);
}

HuskyGrammar::ToIdentifierContext::ToIdentifierContext(PrimaryContext *ctx) { copyFrom(ctx); }

void HuskyGrammar::ToIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToIdentifier(this);
}
void HuskyGrammar::ToIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToIdentifier(this);
}

antlrcpp::Any HuskyGrammar::ToIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyGrammarVisitor*>(visitor))
    return parserVisitor->visitToIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToLiteralContext ------------------------------------------------------------------

HuskyGrammar::LiteralContext* HuskyGrammar::ToLiteralContext::literal() {
  return getRuleContext<HuskyGrammar::LiteralContext>(0);
}

HuskyGrammar::ToLiteralContext::ToLiteralContext(PrimaryContext *ctx) { copyFrom(ctx); }

void HuskyGrammar::ToLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToLiteral(this);
}
void HuskyGrammar::ToLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToLiteral(this);
}

antlrcpp::Any HuskyGrammar::ToLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyGrammarVisitor*>(visitor))
    return parserVisitor->visitToLiteral(this);
  else
    return visitor->visitChildren(this);
}
HuskyGrammar::PrimaryContext* HuskyGrammar::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 12, HuskyGrammar::RulePrimary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(97);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuskyGrammar::IDENTIFIER: {
        _localctx = dynamic_cast<PrimaryContext *>(_tracker.createInstance<HuskyGrammar::ToIdentifierContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(91);
        match(HuskyGrammar::IDENTIFIER);
        break;
      }

      case HuskyGrammar::LPAREN: {
        _localctx = dynamic_cast<PrimaryContext *>(_tracker.createInstance<HuskyGrammar::ToParenContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(92);
        match(HuskyGrammar::LPAREN);
        setState(93);
        expression(0);
        setState(94);
        match(HuskyGrammar::RPAREN);
        break;
      }

      case HuskyGrammar::DECIMAL_LITERAL:
      case HuskyGrammar::FLOAT_LITERAL:
      case HuskyGrammar::BOOL_LITERAL: {
        _localctx = dynamic_cast<PrimaryContext *>(_tracker.createInstance<HuskyGrammar::ToLiteralContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(96);
        literal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool HuskyGrammar::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 5: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool HuskyGrammar::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 7);
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);
    case 4: return precpred(_ctx, 3);
    case 5: return precpred(_ctx, 2);
    case 6: return precpred(_ctx, 1);
    case 7: return precpred(_ctx, 13);
    case 8: return precpred(_ctx, 12);
    case 9: return precpred(_ctx, 11);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> HuskyGrammar::_decisionToDFA;
atn::PredictionContextCache HuskyGrammar::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN HuskyGrammar::_atn;
std::vector<uint16_t> HuskyGrammar::_serializedATN;

std::vector<std::string> HuskyGrammar::_ruleNames = {
  "expressionList", "methodCall", "literal", "integerLiteral", "floatLiteral", 
  "expression", "primary"
};

std::vector<std::string> HuskyGrammar::_literalNames = {
  "", "", "", "", "", "'type'", "'func'", "'val'", "", "", "'('", "')'", 
  "'['", "']'", "';'", "','", "'.'", "'>'", "'<'", "'!'", "'='", "'<='", 
  "'>='", "'!='", "'&'", "'|'", "'+'", "'-'", "'*'", "'/'", "'^'", "':'", 
  "'[]'", "'[:]'"
};

std::vector<std::string> HuskyGrammar::_symbolicNames = {
  "", "DECIMAL_LITERAL", "FLOAT_LITERAL", "WS", "LINE_COMMENT", "TYPE", 
  "FUNC", "VAL", "BOOL_LITERAL", "IDENTIFIER", "LPAREN", "RPAREN", "LBRACK", 
  "RBRACK", "SEMI", "COMMA", "DOT", "GT", "LT", "BANG", "EQUAL", "LE", "GE", 
  "NOTEQUAL", "AND", "OR", "ADD", "SUB", "MUL", "DIV", "CARET", "COLON", 
  "ARRAY_INDEX", "ARRAY_SLICE"
};

dfa::Vocabulary HuskyGrammar::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> HuskyGrammar::_tokenNames;

HuskyGrammar::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x23, 0x66, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x14, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0x17, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 
    0x3, 0x1c, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x5, 0x4, 0x23, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 
    0x7, 0x30, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 
    0x4b, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 
    0x7, 0x59, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x5c, 0xb, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x64, 0xa, 0x8, 
    0x3, 0x8, 0x2, 0x3, 0xc, 0x9, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x2, 
    0x6, 0x3, 0x2, 0x1c, 0x1d, 0x3, 0x2, 0x1e, 0x1f, 0x4, 0x2, 0x13, 0x14, 
    0x17, 0x18, 0x4, 0x2, 0x16, 0x16, 0x19, 0x19, 0x2, 0x72, 0x2, 0x10, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x18, 0x3, 0x2, 0x2, 0x2, 0x6, 0x22, 0x3, 0x2, 
    0x2, 0x2, 0x8, 0x24, 0x3, 0x2, 0x2, 0x2, 0xa, 0x26, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xe, 0x63, 0x3, 0x2, 0x2, 0x2, 0x10, 
    0x15, 0x5, 0xc, 0x7, 0x2, 0x11, 0x12, 0x7, 0x11, 0x2, 0x2, 0x12, 0x14, 
    0x5, 0xc, 0x7, 0x2, 0x13, 0x11, 0x3, 0x2, 0x2, 0x2, 0x14, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x15, 0x13, 0x3, 0x2, 0x2, 0x2, 0x15, 0x16, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x3, 0x3, 0x2, 0x2, 0x2, 0x17, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x18, 0x19, 0x7, 0xb, 0x2, 0x2, 0x19, 0x1b, 0x7, 0xc, 0x2, 0x2, 
    0x1a, 0x1c, 0x5, 0x2, 0x2, 0x2, 0x1b, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1b, 
    0x1c, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 
    0x7, 0xd, 0x2, 0x2, 0x1e, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x23, 0x5, 
    0x8, 0x5, 0x2, 0x20, 0x23, 0x5, 0xa, 0x6, 0x2, 0x21, 0x23, 0x7, 0xa, 
    0x2, 0x2, 0x22, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x22, 0x20, 0x3, 0x2, 0x2, 
    0x2, 0x22, 0x21, 0x3, 0x2, 0x2, 0x2, 0x23, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0x25, 0x7, 0x3, 0x2, 0x2, 0x25, 0x9, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0x27, 0x7, 0x4, 0x2, 0x2, 0x27, 0xb, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 
    0x8, 0x7, 0x1, 0x2, 0x29, 0x30, 0x5, 0xe, 0x8, 0x2, 0x2a, 0x30, 0x5, 
    0x4, 0x3, 0x2, 0x2b, 0x2c, 0x9, 0x2, 0x2, 0x2, 0x2c, 0x30, 0x5, 0xc, 
    0x7, 0xb, 0x2d, 0x2e, 0x7, 0x15, 0x2, 0x2, 0x2e, 0x30, 0x5, 0xc, 0x7, 
    0xa, 0x2f, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2a, 0x3, 0x2, 0x2, 0x2, 
    0x2f, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x30, 
    0x5a, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0xc, 0x9, 0x2, 0x2, 0x32, 0x33, 
    0x7, 0x20, 0x2, 0x2, 0x33, 0x59, 0x5, 0xc, 0x7, 0xa, 0x34, 0x35, 0xc, 
    0x8, 0x2, 0x2, 0x35, 0x36, 0x9, 0x3, 0x2, 0x2, 0x36, 0x59, 0x5, 0xc, 
    0x7, 0x9, 0x37, 0x38, 0xc, 0x7, 0x2, 0x2, 0x38, 0x39, 0x9, 0x2, 0x2, 
    0x2, 0x39, 0x59, 0x5, 0xc, 0x7, 0x8, 0x3a, 0x3b, 0xc, 0x6, 0x2, 0x2, 
    0x3b, 0x3c, 0x9, 0x4, 0x2, 0x2, 0x3c, 0x59, 0x5, 0xc, 0x7, 0x7, 0x3d, 
    0x3e, 0xc, 0x5, 0x2, 0x2, 0x3e, 0x3f, 0x9, 0x5, 0x2, 0x2, 0x3f, 0x59, 
    0x5, 0xc, 0x7, 0x6, 0x40, 0x41, 0xc, 0x4, 0x2, 0x2, 0x41, 0x42, 0x7, 
    0x1a, 0x2, 0x2, 0x42, 0x59, 0x5, 0xc, 0x7, 0x5, 0x43, 0x44, 0xc, 0x3, 
    0x2, 0x2, 0x44, 0x45, 0x7, 0x1b, 0x2, 0x2, 0x45, 0x59, 0x5, 0xc, 0x7, 
    0x4, 0x46, 0x47, 0xc, 0xf, 0x2, 0x2, 0x47, 0x4a, 0x7, 0x12, 0x2, 0x2, 
    0x48, 0x4b, 0x7, 0xb, 0x2, 0x2, 0x49, 0x4b, 0x5, 0x4, 0x3, 0x2, 0x4a, 
    0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x59, 
    0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0xc, 0xe, 0x2, 0x2, 0x4d, 0x4e, 0x7, 
    0xe, 0x2, 0x2, 0x4e, 0x4f, 0x5, 0xc, 0x7, 0x2, 0x4f, 0x50, 0x7, 0xf, 
    0x2, 0x2, 0x50, 0x59, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0xc, 0xd, 0x2, 
    0x2, 0x52, 0x53, 0x7, 0xe, 0x2, 0x2, 0x53, 0x54, 0x5, 0xc, 0x7, 0x2, 
    0x54, 0x55, 0x7, 0x21, 0x2, 0x2, 0x55, 0x56, 0x5, 0xc, 0x7, 0x2, 0x56, 
    0x57, 0x7, 0xf, 0x2, 0x2, 0x57, 0x59, 0x3, 0x2, 0x2, 0x2, 0x58, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0x58, 0x34, 0x3, 0x2, 0x2, 0x2, 0x58, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x58, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x58, 0x3d, 0x3, 0x2, 
    0x2, 0x2, 0x58, 0x40, 0x3, 0x2, 0x2, 0x2, 0x58, 0x43, 0x3, 0x2, 0x2, 
    0x2, 0x58, 0x46, 0x3, 0x2, 0x2, 0x2, 0x58, 0x4c, 0x3, 0x2, 0x2, 0x2, 
    0x58, 0x51, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5a, 
    0x58, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5b, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x64, 0x7, 
    0xb, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0xc, 0x2, 0x2, 0x5f, 0x60, 0x5, 0xc, 
    0x7, 0x2, 0x60, 0x61, 0x7, 0xd, 0x2, 0x2, 0x61, 0x64, 0x3, 0x2, 0x2, 
    0x2, 0x62, 0x64, 0x5, 0x6, 0x4, 0x2, 0x63, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x63, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x63, 0x62, 0x3, 0x2, 0x2, 0x2, 0x64, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0xa, 0x15, 0x1b, 0x22, 0x2f, 0x4a, 0x58, 0x5a, 
    0x63, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

HuskyGrammar::Initializer HuskyGrammar::_init;
