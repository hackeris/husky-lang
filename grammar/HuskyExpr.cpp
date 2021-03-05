
// Generated from grammar/HuskyExpr.g4 by ANTLR 4.8


#include "HuskyExprListener.h"
#include "HuskyExprVisitor.h"

#include "HuskyExpr.h"


using namespace antlrcpp;
using namespace antlr4;

HuskyExpr::HuskyExpr(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

HuskyExpr::~HuskyExpr() {
  delete _interpreter;
}

std::string HuskyExpr::getGrammarFileName() const {
  return "HuskyExpr.g4";
}

const std::vector<std::string>& HuskyExpr::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& HuskyExpr::getVocabulary() const {
  return _vocabulary;
}


//----------------- HuskyExprContext ------------------------------------------------------------------

HuskyExpr::HuskyExprContext::HuskyExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HuskyExpr::HuskyExprContext::getRuleIndex() const {
  return HuskyExpr::RuleHuskyExpr;
}

void HuskyExpr::HuskyExprContext::copyFrom(HuskyExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ToAssignContext ------------------------------------------------------------------

HuskyExpr::AssignContext* HuskyExpr::ToAssignContext::assign() {
  return getRuleContext<HuskyExpr::AssignContext>(0);
}

tree::TerminalNode* HuskyExpr::ToAssignContext::SEMI() {
  return getToken(HuskyExpr::SEMI, 0);
}

HuskyExpr::HuskyExprContext* HuskyExpr::ToAssignContext::huskyExpr() {
  return getRuleContext<HuskyExpr::HuskyExprContext>(0);
}

HuskyExpr::ToAssignContext::ToAssignContext(HuskyExprContext *ctx) { copyFrom(ctx); }

void HuskyExpr::ToAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToAssign(this);
}
void HuskyExpr::ToAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToAssign(this);
}

antlrcpp::Any HuskyExpr::ToAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyExprVisitor*>(visitor))
    return parserVisitor->visitToAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToExpressionContext ------------------------------------------------------------------

HuskyExpr::ExpressionContext* HuskyExpr::ToExpressionContext::expression() {
  return getRuleContext<HuskyExpr::ExpressionContext>(0);
}

tree::TerminalNode* HuskyExpr::ToExpressionContext::EOF() {
  return getToken(HuskyExpr::EOF, 0);
}

HuskyExpr::ToExpressionContext::ToExpressionContext(HuskyExprContext *ctx) { copyFrom(ctx); }

void HuskyExpr::ToExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToExpression(this);
}
void HuskyExpr::ToExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToExpression(this);
}

antlrcpp::Any HuskyExpr::ToExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyExprVisitor*>(visitor))
    return parserVisitor->visitToExpression(this);
  else
    return visitor->visitChildren(this);
}
HuskyExpr::HuskyExprContext* HuskyExpr::huskyExpr() {
  HuskyExprContext *_localctx = _tracker.createInstance<HuskyExprContext>(_ctx, getState());
  enterRule(_localctx, 0, HuskyExpr::RuleHuskyExpr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(25);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<HuskyExprContext *>(_tracker.createInstance<HuskyExpr::ToAssignContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(18);
      assign();
      setState(19);
      match(HuskyExpr::SEMI);
      setState(20);
      huskyExpr();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<HuskyExprContext *>(_tracker.createInstance<HuskyExpr::ToExpressionContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(22);
      expression(0);
      setState(23);
      match(HuskyExpr::EOF);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionListContext ------------------------------------------------------------------

HuskyExpr::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuskyExpr::ExpressionContext *> HuskyExpr::ExpressionListContext::expression() {
  return getRuleContexts<HuskyExpr::ExpressionContext>();
}

HuskyExpr::ExpressionContext* HuskyExpr::ExpressionListContext::expression(size_t i) {
  return getRuleContext<HuskyExpr::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> HuskyExpr::ExpressionListContext::COMMA() {
  return getTokens(HuskyExpr::COMMA);
}

tree::TerminalNode* HuskyExpr::ExpressionListContext::COMMA(size_t i) {
  return getToken(HuskyExpr::COMMA, i);
}


size_t HuskyExpr::ExpressionListContext::getRuleIndex() const {
  return HuskyExpr::RuleExpressionList;
}

void HuskyExpr::ExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionList(this);
}

void HuskyExpr::ExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionList(this);
}


antlrcpp::Any HuskyExpr::ExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyExprVisitor*>(visitor))
    return parserVisitor->visitExpressionList(this);
  else
    return visitor->visitChildren(this);
}

HuskyExpr::ExpressionListContext* HuskyExpr::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 2, HuskyExpr::RuleExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(27);
    expression(0);
    setState(32);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuskyExpr::COMMA) {
      setState(28);
      match(HuskyExpr::COMMA);
      setState(29);
      expression(0);
      setState(34);
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

HuskyExpr::MethodCallContext::MethodCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyExpr::MethodCallContext::IDENTIFIER() {
  return getToken(HuskyExpr::IDENTIFIER, 0);
}

tree::TerminalNode* HuskyExpr::MethodCallContext::LPAREN() {
  return getToken(HuskyExpr::LPAREN, 0);
}

tree::TerminalNode* HuskyExpr::MethodCallContext::RPAREN() {
  return getToken(HuskyExpr::RPAREN, 0);
}

HuskyExpr::ExpressionListContext* HuskyExpr::MethodCallContext::expressionList() {
  return getRuleContext<HuskyExpr::ExpressionListContext>(0);
}


size_t HuskyExpr::MethodCallContext::getRuleIndex() const {
  return HuskyExpr::RuleMethodCall;
}

void HuskyExpr::MethodCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodCall(this);
}

void HuskyExpr::MethodCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodCall(this);
}


antlrcpp::Any HuskyExpr::MethodCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyExprVisitor*>(visitor))
    return parserVisitor->visitMethodCall(this);
  else
    return visitor->visitChildren(this);
}

HuskyExpr::MethodCallContext* HuskyExpr::methodCall() {
  MethodCallContext *_localctx = _tracker.createInstance<MethodCallContext>(_ctx, getState());
  enterRule(_localctx, 4, HuskyExpr::RuleMethodCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
    match(HuskyExpr::IDENTIFIER);
    setState(36);
    match(HuskyExpr::LPAREN);
    setState(38);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuskyExpr::DECIMAL_LITERAL)
      | (1ULL << HuskyExpr::FLOAT_LITERAL)
      | (1ULL << HuskyExpr::BOOL_LITERAL)
      | (1ULL << HuskyExpr::IDENTIFIER)
      | (1ULL << HuskyExpr::LPAREN)
      | (1ULL << HuskyExpr::BANG)
      | (1ULL << HuskyExpr::ADD)
      | (1ULL << HuskyExpr::SUB))) != 0)) {
      setState(37);
      expressionList();
    }
    setState(40);
    match(HuskyExpr::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

HuskyExpr::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HuskyExpr::LiteralContext::getRuleIndex() const {
  return HuskyExpr::RuleLiteral;
}

void HuskyExpr::LiteralContext::copyFrom(LiteralContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ToIntegerLiteralContext ------------------------------------------------------------------

HuskyExpr::IntegerLiteralContext* HuskyExpr::ToIntegerLiteralContext::integerLiteral() {
  return getRuleContext<HuskyExpr::IntegerLiteralContext>(0);
}

HuskyExpr::ToIntegerLiteralContext::ToIntegerLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }

void HuskyExpr::ToIntegerLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToIntegerLiteral(this);
}
void HuskyExpr::ToIntegerLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToIntegerLiteral(this);
}

antlrcpp::Any HuskyExpr::ToIntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyExprVisitor*>(visitor))
    return parserVisitor->visitToIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToFloatLiteralContext ------------------------------------------------------------------

HuskyExpr::FloatLiteralContext* HuskyExpr::ToFloatLiteralContext::floatLiteral() {
  return getRuleContext<HuskyExpr::FloatLiteralContext>(0);
}

HuskyExpr::ToFloatLiteralContext::ToFloatLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }

void HuskyExpr::ToFloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToFloatLiteral(this);
}
void HuskyExpr::ToFloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToFloatLiteral(this);
}

antlrcpp::Any HuskyExpr::ToFloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyExprVisitor*>(visitor))
    return parserVisitor->visitToFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToBoolLiteralContext ------------------------------------------------------------------

tree::TerminalNode* HuskyExpr::ToBoolLiteralContext::BOOL_LITERAL() {
  return getToken(HuskyExpr::BOOL_LITERAL, 0);
}

HuskyExpr::ToBoolLiteralContext::ToBoolLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }

void HuskyExpr::ToBoolLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToBoolLiteral(this);
}
void HuskyExpr::ToBoolLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToBoolLiteral(this);
}

antlrcpp::Any HuskyExpr::ToBoolLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyExprVisitor*>(visitor))
    return parserVisitor->visitToBoolLiteral(this);
  else
    return visitor->visitChildren(this);
}
HuskyExpr::LiteralContext* HuskyExpr::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 6, HuskyExpr::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(45);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuskyExpr::DECIMAL_LITERAL: {
        _localctx = dynamic_cast<LiteralContext *>(_tracker.createInstance<HuskyExpr::ToIntegerLiteralContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(42);
        integerLiteral();
        break;
      }

      case HuskyExpr::FLOAT_LITERAL: {
        _localctx = dynamic_cast<LiteralContext *>(_tracker.createInstance<HuskyExpr::ToFloatLiteralContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(43);
        floatLiteral();
        break;
      }

      case HuskyExpr::BOOL_LITERAL: {
        _localctx = dynamic_cast<LiteralContext *>(_tracker.createInstance<HuskyExpr::ToBoolLiteralContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(44);
        match(HuskyExpr::BOOL_LITERAL);
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

HuskyExpr::IntegerLiteralContext::IntegerLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyExpr::IntegerLiteralContext::DECIMAL_LITERAL() {
  return getToken(HuskyExpr::DECIMAL_LITERAL, 0);
}


size_t HuskyExpr::IntegerLiteralContext::getRuleIndex() const {
  return HuskyExpr::RuleIntegerLiteral;
}

void HuskyExpr::IntegerLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerLiteral(this);
}

void HuskyExpr::IntegerLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerLiteral(this);
}


antlrcpp::Any HuskyExpr::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyExprVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}

HuskyExpr::IntegerLiteralContext* HuskyExpr::integerLiteral() {
  IntegerLiteralContext *_localctx = _tracker.createInstance<IntegerLiteralContext>(_ctx, getState());
  enterRule(_localctx, 8, HuskyExpr::RuleIntegerLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(47);
    match(HuskyExpr::DECIMAL_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatLiteralContext ------------------------------------------------------------------

HuskyExpr::FloatLiteralContext::FloatLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyExpr::FloatLiteralContext::FLOAT_LITERAL() {
  return getToken(HuskyExpr::FLOAT_LITERAL, 0);
}


size_t HuskyExpr::FloatLiteralContext::getRuleIndex() const {
  return HuskyExpr::RuleFloatLiteral;
}

void HuskyExpr::FloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatLiteral(this);
}

void HuskyExpr::FloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatLiteral(this);
}


antlrcpp::Any HuskyExpr::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyExprVisitor*>(visitor))
    return parserVisitor->visitFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}

HuskyExpr::FloatLiteralContext* HuskyExpr::floatLiteral() {
  FloatLiteralContext *_localctx = _tracker.createInstance<FloatLiteralContext>(_ctx, getState());
  enterRule(_localctx, 10, HuskyExpr::RuleFloatLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49);
    match(HuskyExpr::FLOAT_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

HuskyExpr::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HuskyExpr::ExpressionContext::getRuleIndex() const {
  return HuskyExpr::RuleExpression;
}

void HuskyExpr::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ToArraySliceContext ------------------------------------------------------------------

std::vector<HuskyExpr::ExpressionContext *> HuskyExpr::ToArraySliceContext::expression() {
  return getRuleContexts<HuskyExpr::ExpressionContext>();
}

HuskyExpr::ExpressionContext* HuskyExpr::ToArraySliceContext::expression(size_t i) {
  return getRuleContext<HuskyExpr::ExpressionContext>(i);
}

tree::TerminalNode* HuskyExpr::ToArraySliceContext::LBRACK() {
  return getToken(HuskyExpr::LBRACK, 0);
}

tree::TerminalNode* HuskyExpr::ToArraySliceContext::COLON() {
  return getToken(HuskyExpr::COLON, 0);
}

tree::TerminalNode* HuskyExpr::ToArraySliceContext::RBRACK() {
  return getToken(HuskyExpr::RBRACK, 0);
}

HuskyExpr::ToArraySliceContext::ToArraySliceContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyExpr::ToArraySliceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToArraySlice(this);
}
void HuskyExpr::ToArraySliceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToArraySlice(this);
}

antlrcpp::Any HuskyExpr::ToArraySliceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyExprVisitor*>(visitor))
    return parserVisitor->visitToArraySlice(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToUnaryContext ------------------------------------------------------------------

HuskyExpr::ExpressionContext* HuskyExpr::ToUnaryContext::expression() {
  return getRuleContext<HuskyExpr::ExpressionContext>(0);
}

tree::TerminalNode* HuskyExpr::ToUnaryContext::ADD() {
  return getToken(HuskyExpr::ADD, 0);
}

tree::TerminalNode* HuskyExpr::ToUnaryContext::SUB() {
  return getToken(HuskyExpr::SUB, 0);
}

tree::TerminalNode* HuskyExpr::ToUnaryContext::BANG() {
  return getToken(HuskyExpr::BANG, 0);
}

HuskyExpr::ToUnaryContext::ToUnaryContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyExpr::ToUnaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToUnary(this);
}
void HuskyExpr::ToUnaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToUnary(this);
}

antlrcpp::Any HuskyExpr::ToUnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyExprVisitor*>(visitor))
    return parserVisitor->visitToUnary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToCallContext ------------------------------------------------------------------

HuskyExpr::MethodCallContext* HuskyExpr::ToCallContext::methodCall() {
  return getRuleContext<HuskyExpr::MethodCallContext>(0);
}

HuskyExpr::ToCallContext::ToCallContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyExpr::ToCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToCall(this);
}
void HuskyExpr::ToCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToCall(this);
}

antlrcpp::Any HuskyExpr::ToCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyExprVisitor*>(visitor))
    return parserVisitor->visitToCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToArrayRefContext ------------------------------------------------------------------

std::vector<HuskyExpr::ExpressionContext *> HuskyExpr::ToArrayRefContext::expression() {
  return getRuleContexts<HuskyExpr::ExpressionContext>();
}

HuskyExpr::ExpressionContext* HuskyExpr::ToArrayRefContext::expression(size_t i) {
  return getRuleContext<HuskyExpr::ExpressionContext>(i);
}

tree::TerminalNode* HuskyExpr::ToArrayRefContext::LBRACK() {
  return getToken(HuskyExpr::LBRACK, 0);
}

tree::TerminalNode* HuskyExpr::ToArrayRefContext::RBRACK() {
  return getToken(HuskyExpr::RBRACK, 0);
}

HuskyExpr::ToArrayRefContext::ToArrayRefContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyExpr::ToArrayRefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToArrayRef(this);
}
void HuskyExpr::ToArrayRefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToArrayRef(this);
}

antlrcpp::Any HuskyExpr::ToArrayRefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyExprVisitor*>(visitor))
    return parserVisitor->visitToArrayRef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToPrimaryContext ------------------------------------------------------------------

HuskyExpr::PrimaryContext* HuskyExpr::ToPrimaryContext::primary() {
  return getRuleContext<HuskyExpr::PrimaryContext>(0);
}

HuskyExpr::ToPrimaryContext::ToPrimaryContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyExpr::ToPrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToPrimary(this);
}
void HuskyExpr::ToPrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToPrimary(this);
}

antlrcpp::Any HuskyExpr::ToPrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyExprVisitor*>(visitor))
    return parserVisitor->visitToPrimary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToBinaryContext ------------------------------------------------------------------

std::vector<HuskyExpr::ExpressionContext *> HuskyExpr::ToBinaryContext::expression() {
  return getRuleContexts<HuskyExpr::ExpressionContext>();
}

HuskyExpr::ExpressionContext* HuskyExpr::ToBinaryContext::expression(size_t i) {
  return getRuleContext<HuskyExpr::ExpressionContext>(i);
}

tree::TerminalNode* HuskyExpr::ToBinaryContext::CARET() {
  return getToken(HuskyExpr::CARET, 0);
}

tree::TerminalNode* HuskyExpr::ToBinaryContext::MUL() {
  return getToken(HuskyExpr::MUL, 0);
}

tree::TerminalNode* HuskyExpr::ToBinaryContext::DIV() {
  return getToken(HuskyExpr::DIV, 0);
}

tree::TerminalNode* HuskyExpr::ToBinaryContext::ADD() {
  return getToken(HuskyExpr::ADD, 0);
}

tree::TerminalNode* HuskyExpr::ToBinaryContext::SUB() {
  return getToken(HuskyExpr::SUB, 0);
}

tree::TerminalNode* HuskyExpr::ToBinaryContext::LE() {
  return getToken(HuskyExpr::LE, 0);
}

tree::TerminalNode* HuskyExpr::ToBinaryContext::GE() {
  return getToken(HuskyExpr::GE, 0);
}

tree::TerminalNode* HuskyExpr::ToBinaryContext::GT() {
  return getToken(HuskyExpr::GT, 0);
}

tree::TerminalNode* HuskyExpr::ToBinaryContext::LT() {
  return getToken(HuskyExpr::LT, 0);
}

tree::TerminalNode* HuskyExpr::ToBinaryContext::EQUAL() {
  return getToken(HuskyExpr::EQUAL, 0);
}

tree::TerminalNode* HuskyExpr::ToBinaryContext::NOTEQUAL() {
  return getToken(HuskyExpr::NOTEQUAL, 0);
}

tree::TerminalNode* HuskyExpr::ToBinaryContext::AND() {
  return getToken(HuskyExpr::AND, 0);
}

tree::TerminalNode* HuskyExpr::ToBinaryContext::OR() {
  return getToken(HuskyExpr::OR, 0);
}

HuskyExpr::ToBinaryContext::ToBinaryContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyExpr::ToBinaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToBinary(this);
}
void HuskyExpr::ToBinaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToBinary(this);
}

antlrcpp::Any HuskyExpr::ToBinaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyExprVisitor*>(visitor))
    return parserVisitor->visitToBinary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToAttrGetContext ------------------------------------------------------------------

HuskyExpr::ExpressionContext* HuskyExpr::ToAttrGetContext::expression() {
  return getRuleContext<HuskyExpr::ExpressionContext>(0);
}

tree::TerminalNode* HuskyExpr::ToAttrGetContext::DOT() {
  return getToken(HuskyExpr::DOT, 0);
}

tree::TerminalNode* HuskyExpr::ToAttrGetContext::IDENTIFIER() {
  return getToken(HuskyExpr::IDENTIFIER, 0);
}

HuskyExpr::MethodCallContext* HuskyExpr::ToAttrGetContext::methodCall() {
  return getRuleContext<HuskyExpr::MethodCallContext>(0);
}

HuskyExpr::ToAttrGetContext::ToAttrGetContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyExpr::ToAttrGetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToAttrGet(this);
}
void HuskyExpr::ToAttrGetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToAttrGet(this);
}

antlrcpp::Any HuskyExpr::ToAttrGetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyExprVisitor*>(visitor))
    return parserVisitor->visitToAttrGet(this);
  else
    return visitor->visitChildren(this);
}

HuskyExpr::ExpressionContext* HuskyExpr::expression() {
   return expression(0);
}

HuskyExpr::ExpressionContext* HuskyExpr::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  HuskyExpr::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  HuskyExpr::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, HuskyExpr::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(58);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ToPrimaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(52);
      primary();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ToCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(53);
      methodCall();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ToUnaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(54);
      dynamic_cast<ToUnaryContext *>(_localctx)->prefix = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == HuskyExpr::ADD

      || _la == HuskyExpr::SUB)) {
        dynamic_cast<ToUnaryContext *>(_localctx)->prefix = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(55);
      expression(9);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ToUnaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(56);
      dynamic_cast<ToUnaryContext *>(_localctx)->prefix = match(HuskyExpr::BANG);
      setState(57);
      expression(8);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(101);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(99);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ToBinaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(60);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(61);
          dynamic_cast<ToBinaryContext *>(_localctx)->bop = match(HuskyExpr::CARET);
          setState(62);
          expression(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ToBinaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(63);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(64);
          dynamic_cast<ToBinaryContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == HuskyExpr::MUL

          || _la == HuskyExpr::DIV)) {
            dynamic_cast<ToBinaryContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(65);
          expression(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ToBinaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(66);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(67);
          dynamic_cast<ToBinaryContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == HuskyExpr::ADD

          || _la == HuskyExpr::SUB)) {
            dynamic_cast<ToBinaryContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(68);
          expression(6);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ToBinaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(69);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(70);
          dynamic_cast<ToBinaryContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << HuskyExpr::GT)
            | (1ULL << HuskyExpr::LT)
            | (1ULL << HuskyExpr::LE)
            | (1ULL << HuskyExpr::GE))) != 0))) {
            dynamic_cast<ToBinaryContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(71);
          expression(5);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ToBinaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(72);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(73);
          dynamic_cast<ToBinaryContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == HuskyExpr::EQUAL

          || _la == HuskyExpr::NOTEQUAL)) {
            dynamic_cast<ToBinaryContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(74);
          expression(4);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<ToBinaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(75);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(76);
          dynamic_cast<ToBinaryContext *>(_localctx)->bop = match(HuskyExpr::AND);
          setState(77);
          expression(3);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<ToBinaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(78);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(79);
          dynamic_cast<ToBinaryContext *>(_localctx)->bop = match(HuskyExpr::OR);
          setState(80);
          expression(2);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<ToAttrGetContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(81);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(82);
          dynamic_cast<ToAttrGetContext *>(_localctx)->dot = match(HuskyExpr::DOT);
          setState(85);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
          case 1: {
            setState(83);
            match(HuskyExpr::IDENTIFIER);
            break;
          }

          case 2: {
            setState(84);
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
          setState(87);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(88);
          match(HuskyExpr::LBRACK);
          setState(89);
          expression(0);
          setState(90);
          match(HuskyExpr::RBRACK);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<ToArraySliceContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(92);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(93);
          match(HuskyExpr::LBRACK);
          setState(94);
          dynamic_cast<ToArraySliceContext *>(_localctx)->begin = expression(0);
          setState(95);
          match(HuskyExpr::COLON);
          setState(96);
          dynamic_cast<ToArraySliceContext *>(_localctx)->end = expression(0);
          setState(97);
          match(HuskyExpr::RBRACK);
          break;
        }

        } 
      }
      setState(103);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

HuskyExpr::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyExpr::AssignContext::IDENTIFIER() {
  return getToken(HuskyExpr::IDENTIFIER, 0);
}

HuskyExpr::ExpressionContext* HuskyExpr::AssignContext::expression() {
  return getRuleContext<HuskyExpr::ExpressionContext>(0);
}

tree::TerminalNode* HuskyExpr::AssignContext::ASSIGN() {
  return getToken(HuskyExpr::ASSIGN, 0);
}


size_t HuskyExpr::AssignContext::getRuleIndex() const {
  return HuskyExpr::RuleAssign;
}

void HuskyExpr::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}

void HuskyExpr::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
}


antlrcpp::Any HuskyExpr::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyExprVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}

HuskyExpr::AssignContext* HuskyExpr::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 14, HuskyExpr::RuleAssign);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(HuskyExpr::IDENTIFIER);
    setState(105);
    dynamic_cast<AssignContext *>(_localctx)->bop = match(HuskyExpr::ASSIGN);
    setState(106);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

HuskyExpr::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HuskyExpr::PrimaryContext::getRuleIndex() const {
  return HuskyExpr::RulePrimary;
}

void HuskyExpr::PrimaryContext::copyFrom(PrimaryContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ToParenContext ------------------------------------------------------------------

tree::TerminalNode* HuskyExpr::ToParenContext::LPAREN() {
  return getToken(HuskyExpr::LPAREN, 0);
}

HuskyExpr::ExpressionContext* HuskyExpr::ToParenContext::expression() {
  return getRuleContext<HuskyExpr::ExpressionContext>(0);
}

tree::TerminalNode* HuskyExpr::ToParenContext::RPAREN() {
  return getToken(HuskyExpr::RPAREN, 0);
}

HuskyExpr::ToParenContext::ToParenContext(PrimaryContext *ctx) { copyFrom(ctx); }

void HuskyExpr::ToParenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToParen(this);
}
void HuskyExpr::ToParenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToParen(this);
}

antlrcpp::Any HuskyExpr::ToParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyExprVisitor*>(visitor))
    return parserVisitor->visitToParen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToIdentifierContext ------------------------------------------------------------------

tree::TerminalNode* HuskyExpr::ToIdentifierContext::IDENTIFIER() {
  return getToken(HuskyExpr::IDENTIFIER, 0);
}

HuskyExpr::ToIdentifierContext::ToIdentifierContext(PrimaryContext *ctx) { copyFrom(ctx); }

void HuskyExpr::ToIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToIdentifier(this);
}
void HuskyExpr::ToIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToIdentifier(this);
}

antlrcpp::Any HuskyExpr::ToIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyExprVisitor*>(visitor))
    return parserVisitor->visitToIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToLiteralContext ------------------------------------------------------------------

HuskyExpr::LiteralContext* HuskyExpr::ToLiteralContext::literal() {
  return getRuleContext<HuskyExpr::LiteralContext>(0);
}

HuskyExpr::ToLiteralContext::ToLiteralContext(PrimaryContext *ctx) { copyFrom(ctx); }

void HuskyExpr::ToLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToLiteral(this);
}
void HuskyExpr::ToLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToLiteral(this);
}

antlrcpp::Any HuskyExpr::ToLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyExprVisitor*>(visitor))
    return parserVisitor->visitToLiteral(this);
  else
    return visitor->visitChildren(this);
}
HuskyExpr::PrimaryContext* HuskyExpr::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 16, HuskyExpr::RulePrimary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(114);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuskyExpr::IDENTIFIER: {
        _localctx = dynamic_cast<PrimaryContext *>(_tracker.createInstance<HuskyExpr::ToIdentifierContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(108);
        match(HuskyExpr::IDENTIFIER);
        break;
      }

      case HuskyExpr::LPAREN: {
        _localctx = dynamic_cast<PrimaryContext *>(_tracker.createInstance<HuskyExpr::ToParenContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(109);
        match(HuskyExpr::LPAREN);
        setState(110);
        expression(0);
        setState(111);
        match(HuskyExpr::RPAREN);
        break;
      }

      case HuskyExpr::DECIMAL_LITERAL:
      case HuskyExpr::FLOAT_LITERAL:
      case HuskyExpr::BOOL_LITERAL: {
        _localctx = dynamic_cast<PrimaryContext *>(_tracker.createInstance<HuskyExpr::ToLiteralContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(113);
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

bool HuskyExpr::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 6: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool HuskyExpr::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
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
std::vector<dfa::DFA> HuskyExpr::_decisionToDFA;
atn::PredictionContextCache HuskyExpr::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN HuskyExpr::_atn;
std::vector<uint16_t> HuskyExpr::_serializedATN;

std::vector<std::string> HuskyExpr::_ruleNames = {
  "huskyExpr", "expressionList", "methodCall", "literal", "integerLiteral", 
  "floatLiteral", "expression", "assign", "primary"
};

std::vector<std::string> HuskyExpr::_literalNames = {
  "", "", "", "", "", "'type'", "'func'", "'val'", "'do'", "'while'", "'for'", 
  "'if'", "'else'", "'return'", "", "", "'('", "')'", "'['", "']'", "'{'", 
  "'}'", "';'", "','", "'.'", "'>'", "'<'", "'!'", "'='", "'<='", "'>='", 
  "'!='", "'&'", "'|'", "'+'", "'-'", "'*'", "'/'", "'^'", "':'", "'<-'", 
  "'[]'", "'[:]'"
};

std::vector<std::string> HuskyExpr::_symbolicNames = {
  "", "DECIMAL_LITERAL", "FLOAT_LITERAL", "WS", "LINE_COMMENT", "TYPE", 
  "FUNC", "VAL", "DO", "WHILE", "FOR", "IF", "ELSE", "RETURN", "BOOL_LITERAL", 
  "IDENTIFIER", "LPAREN", "RPAREN", "LBRACK", "RBRACK", "LBRACE", "RBRACE", 
  "SEMI", "COMMA", "DOT", "GT", "LT", "BANG", "EQUAL", "LE", "GE", "NOTEQUAL", 
  "AND", "OR", "ADD", "SUB", "MUL", "DIV", "CARET", "COLON", "ASSIGN", "ARRAY_INDEX", 
  "ARRAY_SLICE"
};

dfa::Vocabulary HuskyExpr::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> HuskyExpr::_tokenNames;

HuskyExpr::Initializer::Initializer() {
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
    0x3, 0x2c, 0x77, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x1c, 
    0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x21, 0xa, 0x3, 0xc, 
    0x3, 0xe, 0x3, 0x24, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 
    0x29, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 
    0x5, 0x30, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0x3d, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x58, 
    0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 
    0x66, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x69, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x5, 0xa, 0x75, 0xa, 0xa, 0x3, 0xa, 0x2, 0x3, 0xe, 0xb, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x2, 0x6, 0x3, 0x2, 0x24, 
    0x25, 0x3, 0x2, 0x26, 0x27, 0x4, 0x2, 0x1b, 0x1c, 0x1f, 0x20, 0x4, 0x2, 
    0x1e, 0x1e, 0x21, 0x21, 0x2, 0x82, 0x2, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0x6, 0x25, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x31, 0x3, 0x2, 0x2, 0x2, 0xc, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x10, 0x6a, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x74, 0x3, 0x2, 0x2, 0x2, 0x14, 0x15, 0x5, 0x10, 0x9, 0x2, 
    0x15, 0x16, 0x7, 0x18, 0x2, 0x2, 0x16, 0x17, 0x5, 0x2, 0x2, 0x2, 0x17, 
    0x1c, 0x3, 0x2, 0x2, 0x2, 0x18, 0x19, 0x5, 0xe, 0x8, 0x2, 0x19, 0x1a, 
    0x7, 0x2, 0x2, 0x3, 0x1a, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x14, 0x3, 
    0x2, 0x2, 0x2, 0x1b, 0x18, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x1d, 0x22, 0x5, 0xe, 0x8, 0x2, 0x1e, 0x1f, 0x7, 0x19, 0x2, 
    0x2, 0x1f, 0x21, 0x5, 0xe, 0x8, 0x2, 0x20, 0x1e, 0x3, 0x2, 0x2, 0x2, 
    0x21, 0x24, 0x3, 0x2, 0x2, 0x2, 0x22, 0x20, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x23, 0x5, 0x3, 0x2, 0x2, 0x2, 0x24, 0x22, 
    0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x7, 0x11, 0x2, 0x2, 0x26, 0x28, 0x7, 
    0x12, 0x2, 0x2, 0x27, 0x29, 0x5, 0x4, 0x3, 0x2, 0x28, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x29, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x3, 0x2, 0x2, 
    0x2, 0x2a, 0x2b, 0x7, 0x13, 0x2, 0x2, 0x2b, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x2c, 0x30, 0x5, 0xa, 0x6, 0x2, 0x2d, 0x30, 0x5, 0xc, 0x7, 0x2, 0x2e, 
    0x30, 0x7, 0x10, 0x2, 0x2, 0x2f, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x2f, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x30, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x31, 0x32, 0x7, 0x3, 0x2, 0x2, 0x32, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x33, 0x34, 0x7, 0x4, 0x2, 0x2, 0x34, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x35, 0x36, 0x8, 0x8, 0x1, 0x2, 0x36, 0x3d, 0x5, 0x12, 0xa, 0x2, 
    0x37, 0x3d, 0x5, 0x6, 0x4, 0x2, 0x38, 0x39, 0x9, 0x2, 0x2, 0x2, 0x39, 
    0x3d, 0x5, 0xe, 0x8, 0xb, 0x3a, 0x3b, 0x7, 0x1d, 0x2, 0x2, 0x3b, 0x3d, 
    0x5, 0xe, 0x8, 0xa, 0x3c, 0x35, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x3c, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 
    0x2, 0x2, 0x3d, 0x67, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0xc, 0x9, 0x2, 
    0x2, 0x3f, 0x40, 0x7, 0x28, 0x2, 0x2, 0x40, 0x66, 0x5, 0xe, 0x8, 0xa, 
    0x41, 0x42, 0xc, 0x8, 0x2, 0x2, 0x42, 0x43, 0x9, 0x3, 0x2, 0x2, 0x43, 
    0x66, 0x5, 0xe, 0x8, 0x9, 0x44, 0x45, 0xc, 0x7, 0x2, 0x2, 0x45, 0x46, 
    0x9, 0x2, 0x2, 0x2, 0x46, 0x66, 0x5, 0xe, 0x8, 0x8, 0x47, 0x48, 0xc, 
    0x6, 0x2, 0x2, 0x48, 0x49, 0x9, 0x4, 0x2, 0x2, 0x49, 0x66, 0x5, 0xe, 
    0x8, 0x7, 0x4a, 0x4b, 0xc, 0x5, 0x2, 0x2, 0x4b, 0x4c, 0x9, 0x5, 0x2, 
    0x2, 0x4c, 0x66, 0x5, 0xe, 0x8, 0x6, 0x4d, 0x4e, 0xc, 0x4, 0x2, 0x2, 
    0x4e, 0x4f, 0x7, 0x22, 0x2, 0x2, 0x4f, 0x66, 0x5, 0xe, 0x8, 0x5, 0x50, 
    0x51, 0xc, 0x3, 0x2, 0x2, 0x51, 0x52, 0x7, 0x23, 0x2, 0x2, 0x52, 0x66, 
    0x5, 0xe, 0x8, 0x4, 0x53, 0x54, 0xc, 0xf, 0x2, 0x2, 0x54, 0x57, 0x7, 
    0x1a, 0x2, 0x2, 0x55, 0x58, 0x7, 0x11, 0x2, 0x2, 0x56, 0x58, 0x5, 0x6, 
    0x4, 0x2, 0x57, 0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 0x56, 0x3, 0x2, 0x2, 
    0x2, 0x58, 0x66, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0xc, 0xe, 0x2, 0x2, 
    0x5a, 0x5b, 0x7, 0x14, 0x2, 0x2, 0x5b, 0x5c, 0x5, 0xe, 0x8, 0x2, 0x5c, 
    0x5d, 0x7, 0x15, 0x2, 0x2, 0x5d, 0x66, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 
    0xc, 0xd, 0x2, 0x2, 0x5f, 0x60, 0x7, 0x14, 0x2, 0x2, 0x60, 0x61, 0x5, 
    0xe, 0x8, 0x2, 0x61, 0x62, 0x7, 0x29, 0x2, 0x2, 0x62, 0x63, 0x5, 0xe, 
    0x8, 0x2, 0x63, 0x64, 0x7, 0x15, 0x2, 0x2, 0x64, 0x66, 0x3, 0x2, 0x2, 
    0x2, 0x65, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x65, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x65, 0x44, 0x3, 0x2, 0x2, 0x2, 0x65, 0x47, 0x3, 0x2, 0x2, 0x2, 0x65, 
    0x4a, 0x3, 0x2, 0x2, 0x2, 0x65, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x65, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x65, 0x53, 0x3, 0x2, 0x2, 0x2, 0x65, 0x59, 0x3, 
    0x2, 0x2, 0x2, 0x65, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x66, 0x69, 0x3, 0x2, 
    0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 0x3, 0x2, 0x2, 
    0x2, 0x68, 0xf, 0x3, 0x2, 0x2, 0x2, 0x69, 0x67, 0x3, 0x2, 0x2, 0x2, 
    0x6a, 0x6b, 0x7, 0x11, 0x2, 0x2, 0x6b, 0x6c, 0x7, 0x2a, 0x2, 0x2, 0x6c, 
    0x6d, 0x5, 0xe, 0x8, 0x2, 0x6d, 0x11, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x75, 
    0x7, 0x11, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x12, 0x2, 0x2, 0x70, 0x71, 0x5, 
    0xe, 0x8, 0x2, 0x71, 0x72, 0x7, 0x13, 0x2, 0x2, 0x72, 0x75, 0x3, 0x2, 
    0x2, 0x2, 0x73, 0x75, 0x5, 0x8, 0x5, 0x2, 0x74, 0x6e, 0x3, 0x2, 0x2, 
    0x2, 0x74, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x74, 0x73, 0x3, 0x2, 0x2, 0x2, 
    0x75, 0x13, 0x3, 0x2, 0x2, 0x2, 0xb, 0x1b, 0x22, 0x28, 0x2f, 0x3c, 0x57, 
    0x65, 0x67, 0x74, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

HuskyExpr::Initializer HuskyExpr::_init;
