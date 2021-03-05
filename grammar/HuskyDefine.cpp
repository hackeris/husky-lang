
// Generated from grammar/HuskyDefine.g4 by ANTLR 4.8


#include "HuskyDefineListener.h"
#include "HuskyDefineVisitor.h"

#include "HuskyDefine.h"


using namespace antlrcpp;
using namespace antlr4;

HuskyDefine::HuskyDefine(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

HuskyDefine::~HuskyDefine() {
  delete _interpreter;
}

std::string HuskyDefine::getGrammarFileName() const {
  return "HuskyDefine.g4";
}

const std::vector<std::string>& HuskyDefine::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& HuskyDefine::getVocabulary() const {
  return _vocabulary;
}


//----------------- StatementsContext ------------------------------------------------------------------

HuskyDefine::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuskyDefine::StatementContext *> HuskyDefine::StatementsContext::statement() {
  return getRuleContexts<HuskyDefine::StatementContext>();
}

HuskyDefine::StatementContext* HuskyDefine::StatementsContext::statement(size_t i) {
  return getRuleContext<HuskyDefine::StatementContext>(i);
}


size_t HuskyDefine::StatementsContext::getRuleIndex() const {
  return HuskyDefine::RuleStatements;
}

void HuskyDefine::StatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatements(this);
}

void HuskyDefine::StatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatements(this);
}


antlrcpp::Any HuskyDefine::StatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyDefineVisitor*>(visitor))
    return parserVisitor->visitStatements(this);
  else
    return visitor->visitChildren(this);
}

HuskyDefine::StatementsContext* HuskyDefine::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 0, HuskyDefine::RuleStatements);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(15);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuskyDefine::TYPE)
      | (1ULL << HuskyDefine::FUNC)
      | (1ULL << HuskyDefine::VAL))) != 0)) {
      setState(12);
      statement();
      setState(17);
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

//----------------- StatementContext ------------------------------------------------------------------

HuskyDefine::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuskyDefine::DefineStatementContext* HuskyDefine::StatementContext::defineStatement() {
  return getRuleContext<HuskyDefine::DefineStatementContext>(0);
}

tree::TerminalNode* HuskyDefine::StatementContext::SEMI() {
  return getToken(HuskyDefine::SEMI, 0);
}


size_t HuskyDefine::StatementContext::getRuleIndex() const {
  return HuskyDefine::RuleStatement;
}

void HuskyDefine::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void HuskyDefine::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any HuskyDefine::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyDefineVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

HuskyDefine::StatementContext* HuskyDefine::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, HuskyDefine::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(18);
    defineStatement();
    setState(19);
    match(HuskyDefine::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

HuskyDefine::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HuskyDefine::ArgsContext::IDENTIFIER() {
  return getTokens(HuskyDefine::IDENTIFIER);
}

tree::TerminalNode* HuskyDefine::ArgsContext::IDENTIFIER(size_t i) {
  return getToken(HuskyDefine::IDENTIFIER, i);
}


size_t HuskyDefine::ArgsContext::getRuleIndex() const {
  return HuskyDefine::RuleArgs;
}

void HuskyDefine::ArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgs(this);
}

void HuskyDefine::ArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgs(this);
}


antlrcpp::Any HuskyDefine::ArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyDefineVisitor*>(visitor))
    return parserVisitor->visitArgs(this);
  else
    return visitor->visitChildren(this);
}

HuskyDefine::ArgsContext* HuskyDefine::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 4, HuskyDefine::RuleArgs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuskyDefine::IDENTIFIER) {
      setState(21);
      match(HuskyDefine::IDENTIFIER);
      setState(26);
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

//----------------- BopContext ------------------------------------------------------------------

HuskyDefine::BopContext::BopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyDefine::BopContext::GT() {
  return getToken(HuskyDefine::GT, 0);
}

tree::TerminalNode* HuskyDefine::BopContext::LT() {
  return getToken(HuskyDefine::LT, 0);
}

tree::TerminalNode* HuskyDefine::BopContext::EQUAL() {
  return getToken(HuskyDefine::EQUAL, 0);
}

tree::TerminalNode* HuskyDefine::BopContext::LE() {
  return getToken(HuskyDefine::LE, 0);
}

tree::TerminalNode* HuskyDefine::BopContext::GE() {
  return getToken(HuskyDefine::GE, 0);
}

tree::TerminalNode* HuskyDefine::BopContext::NOTEQUAL() {
  return getToken(HuskyDefine::NOTEQUAL, 0);
}

tree::TerminalNode* HuskyDefine::BopContext::AND() {
  return getToken(HuskyDefine::AND, 0);
}

tree::TerminalNode* HuskyDefine::BopContext::OR() {
  return getToken(HuskyDefine::OR, 0);
}

tree::TerminalNode* HuskyDefine::BopContext::ADD() {
  return getToken(HuskyDefine::ADD, 0);
}

tree::TerminalNode* HuskyDefine::BopContext::SUB() {
  return getToken(HuskyDefine::SUB, 0);
}

tree::TerminalNode* HuskyDefine::BopContext::MUL() {
  return getToken(HuskyDefine::MUL, 0);
}

tree::TerminalNode* HuskyDefine::BopContext::DIV() {
  return getToken(HuskyDefine::DIV, 0);
}

tree::TerminalNode* HuskyDefine::BopContext::CARET() {
  return getToken(HuskyDefine::CARET, 0);
}


size_t HuskyDefine::BopContext::getRuleIndex() const {
  return HuskyDefine::RuleBop;
}

void HuskyDefine::BopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBop(this);
}

void HuskyDefine::BopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBop(this);
}


antlrcpp::Any HuskyDefine::BopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyDefineVisitor*>(visitor))
    return parserVisitor->visitBop(this);
  else
    return visitor->visitChildren(this);
}

HuskyDefine::BopContext* HuskyDefine::bop() {
  BopContext *_localctx = _tracker.createInstance<BopContext>(_ctx, getState());
  enterRule(_localctx, 6, HuskyDefine::RuleBop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(40);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuskyDefine::GT: {
        enterOuterAlt(_localctx, 1);
        setState(27);
        match(HuskyDefine::GT);
        break;
      }

      case HuskyDefine::LT: {
        enterOuterAlt(_localctx, 2);
        setState(28);
        match(HuskyDefine::LT);
        break;
      }

      case HuskyDefine::EQUAL: {
        enterOuterAlt(_localctx, 3);
        setState(29);
        match(HuskyDefine::EQUAL);
        break;
      }

      case HuskyDefine::LE: {
        enterOuterAlt(_localctx, 4);
        setState(30);
        match(HuskyDefine::LE);
        break;
      }

      case HuskyDefine::GE: {
        enterOuterAlt(_localctx, 5);
        setState(31);
        match(HuskyDefine::GE);
        break;
      }

      case HuskyDefine::NOTEQUAL: {
        enterOuterAlt(_localctx, 6);
        setState(32);
        match(HuskyDefine::NOTEQUAL);
        break;
      }

      case HuskyDefine::AND: {
        enterOuterAlt(_localctx, 7);
        setState(33);
        match(HuskyDefine::AND);
        break;
      }

      case HuskyDefine::OR: {
        enterOuterAlt(_localctx, 8);
        setState(34);
        match(HuskyDefine::OR);
        break;
      }

      case HuskyDefine::ADD: {
        enterOuterAlt(_localctx, 9);
        setState(35);
        match(HuskyDefine::ADD);
        break;
      }

      case HuskyDefine::SUB: {
        enterOuterAlt(_localctx, 10);
        setState(36);
        match(HuskyDefine::SUB);
        break;
      }

      case HuskyDefine::MUL: {
        enterOuterAlt(_localctx, 11);
        setState(37);
        match(HuskyDefine::MUL);
        break;
      }

      case HuskyDefine::DIV: {
        enterOuterAlt(_localctx, 12);
        setState(38);
        match(HuskyDefine::DIV);
        setState(39);
        match(HuskyDefine::CARET);
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

//----------------- UopContext ------------------------------------------------------------------

HuskyDefine::UopContext::UopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyDefine::UopContext::ADD() {
  return getToken(HuskyDefine::ADD, 0);
}

tree::TerminalNode* HuskyDefine::UopContext::SUB() {
  return getToken(HuskyDefine::SUB, 0);
}

tree::TerminalNode* HuskyDefine::UopContext::BANG() {
  return getToken(HuskyDefine::BANG, 0);
}


size_t HuskyDefine::UopContext::getRuleIndex() const {
  return HuskyDefine::RuleUop;
}

void HuskyDefine::UopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUop(this);
}

void HuskyDefine::UopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUop(this);
}


antlrcpp::Any HuskyDefine::UopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyDefineVisitor*>(visitor))
    return parserVisitor->visitUop(this);
  else
    return visitor->visitChildren(this);
}

HuskyDefine::UopContext* HuskyDefine::uop() {
  UopContext *_localctx = _tracker.createInstance<UopContext>(_ctx, getState());
  enterRule(_localctx, 8, HuskyDefine::RuleUop);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuskyDefine::BANG)
      | (1ULL << HuskyDefine::ADD)
      | (1ULL << HuskyDefine::SUB))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefineStatementContext ------------------------------------------------------------------

HuskyDefine::DefineStatementContext::DefineStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HuskyDefine::DefineStatementContext::getRuleIndex() const {
  return HuskyDefine::RuleDefineStatement;
}

void HuskyDefine::DefineStatementContext::copyFrom(DefineStatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TypeDefContext ------------------------------------------------------------------

tree::TerminalNode* HuskyDefine::TypeDefContext::TYPE() {
  return getToken(HuskyDefine::TYPE, 0);
}

tree::TerminalNode* HuskyDefine::TypeDefContext::IDENTIFIER() {
  return getToken(HuskyDefine::IDENTIFIER, 0);
}

HuskyDefine::TypeDefContext::TypeDefContext(DefineStatementContext *ctx) { copyFrom(ctx); }

void HuskyDefine::TypeDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDef(this);
}
void HuskyDefine::TypeDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDef(this);
}

antlrcpp::Any HuskyDefine::TypeDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyDefineVisitor*>(visitor))
    return parserVisitor->visitTypeDef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncDefContext ------------------------------------------------------------------

tree::TerminalNode* HuskyDefine::FuncDefContext::FUNC() {
  return getToken(HuskyDefine::FUNC, 0);
}

tree::TerminalNode* HuskyDefine::FuncDefContext::LPAREN() {
  return getToken(HuskyDefine::LPAREN, 0);
}

HuskyDefine::ArgsContext* HuskyDefine::FuncDefContext::args() {
  return getRuleContext<HuskyDefine::ArgsContext>(0);
}

tree::TerminalNode* HuskyDefine::FuncDefContext::RPAREN() {
  return getToken(HuskyDefine::RPAREN, 0);
}

tree::TerminalNode* HuskyDefine::FuncDefContext::COLON() {
  return getToken(HuskyDefine::COLON, 0);
}

std::vector<tree::TerminalNode *> HuskyDefine::FuncDefContext::IDENTIFIER() {
  return getTokens(HuskyDefine::IDENTIFIER);
}

tree::TerminalNode* HuskyDefine::FuncDefContext::IDENTIFIER(size_t i) {
  return getToken(HuskyDefine::IDENTIFIER, i);
}

HuskyDefine::BopContext* HuskyDefine::FuncDefContext::bop() {
  return getRuleContext<HuskyDefine::BopContext>(0);
}

HuskyDefine::UopContext* HuskyDefine::FuncDefContext::uop() {
  return getRuleContext<HuskyDefine::UopContext>(0);
}

HuskyDefine::FuncDefContext::FuncDefContext(DefineStatementContext *ctx) { copyFrom(ctx); }

void HuskyDefine::FuncDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncDef(this);
}
void HuskyDefine::FuncDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncDef(this);
}

antlrcpp::Any HuskyDefine::FuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyDefineVisitor*>(visitor))
    return parserVisitor->visitFuncDef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ValueDefContext ------------------------------------------------------------------

tree::TerminalNode* HuskyDefine::ValueDefContext::VAL() {
  return getToken(HuskyDefine::VAL, 0);
}

tree::TerminalNode* HuskyDefine::ValueDefContext::COLON() {
  return getToken(HuskyDefine::COLON, 0);
}

std::vector<tree::TerminalNode *> HuskyDefine::ValueDefContext::IDENTIFIER() {
  return getTokens(HuskyDefine::IDENTIFIER);
}

tree::TerminalNode* HuskyDefine::ValueDefContext::IDENTIFIER(size_t i) {
  return getToken(HuskyDefine::IDENTIFIER, i);
}

HuskyDefine::ValueDefContext::ValueDefContext(DefineStatementContext *ctx) { copyFrom(ctx); }

void HuskyDefine::ValueDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValueDef(this);
}
void HuskyDefine::ValueDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValueDef(this);
}

antlrcpp::Any HuskyDefine::ValueDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyDefineVisitor*>(visitor))
    return parserVisitor->visitValueDef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MemberValueDefContext ------------------------------------------------------------------

tree::TerminalNode* HuskyDefine::MemberValueDefContext::VAL() {
  return getToken(HuskyDefine::VAL, 0);
}

tree::TerminalNode* HuskyDefine::MemberValueDefContext::DOT() {
  return getToken(HuskyDefine::DOT, 0);
}

tree::TerminalNode* HuskyDefine::MemberValueDefContext::COLON() {
  return getToken(HuskyDefine::COLON, 0);
}

std::vector<tree::TerminalNode *> HuskyDefine::MemberValueDefContext::IDENTIFIER() {
  return getTokens(HuskyDefine::IDENTIFIER);
}

tree::TerminalNode* HuskyDefine::MemberValueDefContext::IDENTIFIER(size_t i) {
  return getToken(HuskyDefine::IDENTIFIER, i);
}

HuskyDefine::MemberValueDefContext::MemberValueDefContext(DefineStatementContext *ctx) { copyFrom(ctx); }

void HuskyDefine::MemberValueDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberValueDef(this);
}
void HuskyDefine::MemberValueDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberValueDef(this);
}

antlrcpp::Any HuskyDefine::MemberValueDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyDefineVisitor*>(visitor))
    return parserVisitor->visitMemberValueDef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MemberFuncDefContext ------------------------------------------------------------------

tree::TerminalNode* HuskyDefine::MemberFuncDefContext::FUNC() {
  return getToken(HuskyDefine::FUNC, 0);
}

tree::TerminalNode* HuskyDefine::MemberFuncDefContext::DOT() {
  return getToken(HuskyDefine::DOT, 0);
}

tree::TerminalNode* HuskyDefine::MemberFuncDefContext::LPAREN() {
  return getToken(HuskyDefine::LPAREN, 0);
}

HuskyDefine::ArgsContext* HuskyDefine::MemberFuncDefContext::args() {
  return getRuleContext<HuskyDefine::ArgsContext>(0);
}

tree::TerminalNode* HuskyDefine::MemberFuncDefContext::RPAREN() {
  return getToken(HuskyDefine::RPAREN, 0);
}

tree::TerminalNode* HuskyDefine::MemberFuncDefContext::COLON() {
  return getToken(HuskyDefine::COLON, 0);
}

std::vector<tree::TerminalNode *> HuskyDefine::MemberFuncDefContext::IDENTIFIER() {
  return getTokens(HuskyDefine::IDENTIFIER);
}

tree::TerminalNode* HuskyDefine::MemberFuncDefContext::IDENTIFIER(size_t i) {
  return getToken(HuskyDefine::IDENTIFIER, i);
}

HuskyDefine::BopContext* HuskyDefine::MemberFuncDefContext::bop() {
  return getRuleContext<HuskyDefine::BopContext>(0);
}

HuskyDefine::UopContext* HuskyDefine::MemberFuncDefContext::uop() {
  return getRuleContext<HuskyDefine::UopContext>(0);
}

HuskyDefine::MemberFuncDefContext::MemberFuncDefContext(DefineStatementContext *ctx) { copyFrom(ctx); }

void HuskyDefine::MemberFuncDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberFuncDef(this);
}
void HuskyDefine::MemberFuncDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberFuncDef(this);
}

antlrcpp::Any HuskyDefine::MemberFuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyDefineVisitor*>(visitor))
    return parserVisitor->visitMemberFuncDef(this);
  else
    return visitor->visitChildren(this);
}
HuskyDefine::DefineStatementContext* HuskyDefine::defineStatement() {
  DefineStatementContext *_localctx = _tracker.createInstance<DefineStatementContext>(_ctx, getState());
  enterRule(_localctx, 10, HuskyDefine::RuleDefineStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(82);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DefineStatementContext *>(_tracker.createInstance<HuskyDefine::TypeDefContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(44);
      match(HuskyDefine::TYPE);
      setState(45);
      dynamic_cast<TypeDefContext *>(_localctx)->name = match(HuskyDefine::IDENTIFIER);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DefineStatementContext *>(_tracker.createInstance<HuskyDefine::FuncDefContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(46);
      match(HuskyDefine::FUNC);
      setState(50);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
      case 1: {
        setState(47);
        dynamic_cast<FuncDefContext *>(_localctx)->name = match(HuskyDefine::IDENTIFIER);
        break;
      }

      case 2: {
        setState(48);
        bop();
        break;
      }

      case 3: {
        setState(49);
        uop();
        break;
      }

      }
      setState(52);
      match(HuskyDefine::LPAREN);
      setState(53);
      args();
      setState(54);
      match(HuskyDefine::RPAREN);
      setState(55);
      match(HuskyDefine::COLON);
      setState(56);
      dynamic_cast<FuncDefContext *>(_localctx)->returnType = match(HuskyDefine::IDENTIFIER);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<DefineStatementContext *>(_tracker.createInstance<HuskyDefine::MemberFuncDefContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(58);
      match(HuskyDefine::FUNC);
      setState(59);
      dynamic_cast<MemberFuncDefContext *>(_localctx)->typeName = match(HuskyDefine::IDENTIFIER);
      setState(60);
      match(HuskyDefine::DOT);
      setState(64);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
      case 1: {
        setState(61);
        dynamic_cast<MemberFuncDefContext *>(_localctx)->member = match(HuskyDefine::IDENTIFIER);
        break;
      }

      case 2: {
        setState(62);
        bop();
        break;
      }

      case 3: {
        setState(63);
        uop();
        break;
      }

      }
      setState(66);
      match(HuskyDefine::LPAREN);
      setState(67);
      args();
      setState(68);
      match(HuskyDefine::RPAREN);
      setState(69);
      match(HuskyDefine::COLON);
      setState(70);
      dynamic_cast<MemberFuncDefContext *>(_localctx)->returnType = match(HuskyDefine::IDENTIFIER);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<DefineStatementContext *>(_tracker.createInstance<HuskyDefine::ValueDefContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(72);
      match(HuskyDefine::VAL);
      setState(73);
      dynamic_cast<ValueDefContext *>(_localctx)->name = match(HuskyDefine::IDENTIFIER);
      setState(74);
      match(HuskyDefine::COLON);
      setState(75);
      dynamic_cast<ValueDefContext *>(_localctx)->typeName = match(HuskyDefine::IDENTIFIER);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<DefineStatementContext *>(_tracker.createInstance<HuskyDefine::MemberValueDefContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(76);
      match(HuskyDefine::VAL);
      setState(77);
      dynamic_cast<MemberValueDefContext *>(_localctx)->typeName = match(HuskyDefine::IDENTIFIER);
      setState(78);
      match(HuskyDefine::DOT);
      setState(79);
      dynamic_cast<MemberValueDefContext *>(_localctx)->fieldName = match(HuskyDefine::IDENTIFIER);
      setState(80);
      match(HuskyDefine::COLON);
      setState(81);
      dynamic_cast<MemberValueDefContext *>(_localctx)->typeName = match(HuskyDefine::IDENTIFIER);
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

// Static vars and initialization.
std::vector<dfa::DFA> HuskyDefine::_decisionToDFA;
atn::PredictionContextCache HuskyDefine::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN HuskyDefine::_atn;
std::vector<uint16_t> HuskyDefine::_serializedATN;

std::vector<std::string> HuskyDefine::_ruleNames = {
  "statements", "statement", "args", "bop", "uop", "defineStatement"
};

std::vector<std::string> HuskyDefine::_literalNames = {
  "", "", "", "", "", "", "", "'type'", "'func'", "'val'", "'('", "')'", 
  "'['", "']'", "';'", "','", "'.'", "'>'", "'<'", "'!'", "'='", "'<='", 
  "'>='", "'!='", "'&'", "'|'", "'+'", "'-'", "'*'", "'/'", "'^'", "':'"
};

std::vector<std::string> HuskyDefine::_symbolicNames = {
  "", "DECIMAL_LITERAL", "FLOAT_LITERAL", "WS", "LINE_COMMENT", "IDENTIFIER", 
  "BOOL_LITERAL", "TYPE", "FUNC", "VAL", "LPAREN", "RPAREN", "LBRACK", "RBRACK", 
  "SEMI", "COMMA", "DOT", "GT", "LT", "BANG", "EQUAL", "LE", "GE", "NOTEQUAL", 
  "AND", "OR", "ADD", "SUB", "MUL", "DIV", "CARET", "COLON"
};

dfa::Vocabulary HuskyDefine::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> HuskyDefine::_tokenNames;

HuskyDefine::Initializer::Initializer() {
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
    0x3, 0x21, 0x57, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x3, 
    0x2, 0x7, 0x2, 0x10, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x13, 0xb, 0x2, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x7, 0x4, 0x19, 0xa, 0x4, 0xc, 0x4, 
    0xe, 0x4, 0x1c, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x2b, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x35, 0xa, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x43, 
    0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x55, 0xa, 0x7, 0x3, 0x7, 0x2, 
    0x2, 0x8, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0x2, 0x3, 0x4, 0x2, 0x15, 0x15, 
    0x1c, 0x1d, 0x2, 0x65, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 0x4, 0x14, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2a, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x2c, 0x3, 0x2, 0x2, 0x2, 0xc, 0x54, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x10, 0x5, 0x4, 0x3, 0x2, 0xf, 0xe, 0x3, 0x2, 0x2, 0x2, 0x10, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x11, 0xf, 0x3, 0x2, 0x2, 0x2, 0x11, 0x12, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x3, 0x3, 0x2, 0x2, 0x2, 0x13, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x14, 0x15, 0x5, 0xc, 0x7, 0x2, 0x15, 0x16, 0x7, 0x10, 0x2, 
    0x2, 0x16, 0x5, 0x3, 0x2, 0x2, 0x2, 0x17, 0x19, 0x7, 0x7, 0x2, 0x2, 
    0x18, 0x17, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x18, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x1c, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x2b, 0x7, 
    0x13, 0x2, 0x2, 0x1e, 0x2b, 0x7, 0x14, 0x2, 0x2, 0x1f, 0x2b, 0x7, 0x16, 
    0x2, 0x2, 0x20, 0x2b, 0x7, 0x17, 0x2, 0x2, 0x21, 0x2b, 0x7, 0x18, 0x2, 
    0x2, 0x22, 0x2b, 0x7, 0x19, 0x2, 0x2, 0x23, 0x2b, 0x7, 0x1a, 0x2, 0x2, 
    0x24, 0x2b, 0x7, 0x1b, 0x2, 0x2, 0x25, 0x2b, 0x7, 0x1c, 0x2, 0x2, 0x26, 
    0x2b, 0x7, 0x1d, 0x2, 0x2, 0x27, 0x2b, 0x7, 0x1e, 0x2, 0x2, 0x28, 0x29, 
    0x7, 0x1f, 0x2, 0x2, 0x29, 0x2b, 0x7, 0x20, 0x2, 0x2, 0x2a, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x2a, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0x20, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0x2a, 0x22, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x24, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x25, 0x3, 0x2, 0x2, 0x2, 0x2a, 
    0x26, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x28, 
    0x3, 0x2, 0x2, 0x2, 0x2b, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x9, 
    0x2, 0x2, 0x2, 0x2d, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x9, 
    0x2, 0x2, 0x2f, 0x55, 0x7, 0x7, 0x2, 0x2, 0x30, 0x34, 0x7, 0xa, 0x2, 
    0x2, 0x31, 0x35, 0x7, 0x7, 0x2, 0x2, 0x32, 0x35, 0x5, 0x8, 0x5, 0x2, 
    0x33, 0x35, 0x5, 0xa, 0x6, 0x2, 0x34, 0x31, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 
    0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x7, 0xc, 0x2, 0x2, 0x37, 0x38, 0x5, 
    0x6, 0x4, 0x2, 0x38, 0x39, 0x7, 0xd, 0x2, 0x2, 0x39, 0x3a, 0x7, 0x21, 
    0x2, 0x2, 0x3a, 0x3b, 0x7, 0x7, 0x2, 0x2, 0x3b, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x3c, 0x3d, 0x7, 0xa, 0x2, 0x2, 0x3d, 0x3e, 0x7, 0x7, 0x2, 0x2, 
    0x3e, 0x42, 0x7, 0x12, 0x2, 0x2, 0x3f, 0x43, 0x7, 0x7, 0x2, 0x2, 0x40, 
    0x43, 0x5, 0x8, 0x5, 0x2, 0x41, 0x43, 0x5, 0xa, 0x6, 0x2, 0x42, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x41, 0x3, 
    0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x7, 0xc, 
    0x2, 0x2, 0x45, 0x46, 0x5, 0x6, 0x4, 0x2, 0x46, 0x47, 0x7, 0xd, 0x2, 
    0x2, 0x47, 0x48, 0x7, 0x21, 0x2, 0x2, 0x48, 0x49, 0x7, 0x7, 0x2, 0x2, 
    0x49, 0x55, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 0x7, 0xb, 0x2, 0x2, 0x4b, 
    0x4c, 0x7, 0x7, 0x2, 0x2, 0x4c, 0x4d, 0x7, 0x21, 0x2, 0x2, 0x4d, 0x55, 
    0x7, 0x7, 0x2, 0x2, 0x4e, 0x4f, 0x7, 0xb, 0x2, 0x2, 0x4f, 0x50, 0x7, 
    0x7, 0x2, 0x2, 0x50, 0x51, 0x7, 0x12, 0x2, 0x2, 0x51, 0x52, 0x7, 0x7, 
    0x2, 0x2, 0x52, 0x53, 0x7, 0x21, 0x2, 0x2, 0x53, 0x55, 0x7, 0x7, 0x2, 
    0x2, 0x54, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x54, 0x30, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x54, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x54, 
    0x4e, 0x3, 0x2, 0x2, 0x2, 0x55, 0xd, 0x3, 0x2, 0x2, 0x2, 0x8, 0x11, 
    0x1a, 0x2a, 0x34, 0x42, 0x54, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

HuskyDefine::Initializer HuskyDefine::_init;
