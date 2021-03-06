
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


//----------------- DefineStatementsContext ------------------------------------------------------------------

HuskyDefine::DefineStatementsContext::DefineStatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyDefine::DefineStatementsContext::EOF() {
  return getToken(HuskyDefine::EOF, 0);
}

std::vector<HuskyDefine::DefineStatementContext *> HuskyDefine::DefineStatementsContext::defineStatement() {
  return getRuleContexts<HuskyDefine::DefineStatementContext>();
}

HuskyDefine::DefineStatementContext* HuskyDefine::DefineStatementsContext::defineStatement(size_t i) {
  return getRuleContext<HuskyDefine::DefineStatementContext>(i);
}


size_t HuskyDefine::DefineStatementsContext::getRuleIndex() const {
  return HuskyDefine::RuleDefineStatements;
}

void HuskyDefine::DefineStatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefineStatements(this);
}

void HuskyDefine::DefineStatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefineStatements(this);
}


antlrcpp::Any HuskyDefine::DefineStatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyDefineVisitor*>(visitor))
    return parserVisitor->visitDefineStatements(this);
  else
    return visitor->visitChildren(this);
}

HuskyDefine::DefineStatementsContext* HuskyDefine::defineStatements() {
  DefineStatementsContext *_localctx = _tracker.createInstance<DefineStatementsContext>(_ctx, getState());
  enterRule(_localctx, 0, HuskyDefine::RuleDefineStatements);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(25);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuskyDefine::TYPE)
      | (1ULL << HuskyDefine::FUNC)
      | (1ULL << HuskyDefine::VAL))) != 0)) {
      setState(22);
      defineStatement();
      setState(27);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(28);
    match(HuskyDefine::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleArgContext ------------------------------------------------------------------

HuskyDefine::SingleArgContext::SingleArgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyDefine::SingleArgContext::COLON() {
  return getToken(HuskyDefine::COLON, 0);
}

std::vector<tree::TerminalNode *> HuskyDefine::SingleArgContext::IDENTIFIER() {
  return getTokens(HuskyDefine::IDENTIFIER);
}

tree::TerminalNode* HuskyDefine::SingleArgContext::IDENTIFIER(size_t i) {
  return getToken(HuskyDefine::IDENTIFIER, i);
}


size_t HuskyDefine::SingleArgContext::getRuleIndex() const {
  return HuskyDefine::RuleSingleArg;
}

void HuskyDefine::SingleArgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleArg(this);
}

void HuskyDefine::SingleArgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleArg(this);
}


antlrcpp::Any HuskyDefine::SingleArgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyDefineVisitor*>(visitor))
    return parserVisitor->visitSingleArg(this);
  else
    return visitor->visitChildren(this);
}

HuskyDefine::SingleArgContext* HuskyDefine::singleArg() {
  SingleArgContext *_localctx = _tracker.createInstance<SingleArgContext>(_ctx, getState());
  enterRule(_localctx, 2, HuskyDefine::RuleSingleArg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(30);
    dynamic_cast<SingleArgContext *>(_localctx)->argName = match(HuskyDefine::IDENTIFIER);
    setState(31);
    match(HuskyDefine::COLON);
    setState(32);
    dynamic_cast<SingleArgContext *>(_localctx)->argType = match(HuskyDefine::IDENTIFIER);
   
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

tree::TerminalNode* HuskyDefine::ArgsContext::LPAREN() {
  return getToken(HuskyDefine::LPAREN, 0);
}

tree::TerminalNode* HuskyDefine::ArgsContext::RPAREN() {
  return getToken(HuskyDefine::RPAREN, 0);
}

std::vector<HuskyDefine::SingleArgContext *> HuskyDefine::ArgsContext::singleArg() {
  return getRuleContexts<HuskyDefine::SingleArgContext>();
}

HuskyDefine::SingleArgContext* HuskyDefine::ArgsContext::singleArg(size_t i) {
  return getRuleContext<HuskyDefine::SingleArgContext>(i);
}

std::vector<tree::TerminalNode *> HuskyDefine::ArgsContext::COMMA() {
  return getTokens(HuskyDefine::COMMA);
}

tree::TerminalNode* HuskyDefine::ArgsContext::COMMA(size_t i) {
  return getToken(HuskyDefine::COMMA, i);
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
    setState(34);
    match(HuskyDefine::LPAREN);
    setState(43);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuskyDefine::IDENTIFIER) {
      setState(35);
      singleArg();
      setState(40);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == HuskyDefine::COMMA) {
        setState(36);
        match(HuskyDefine::COMMA);
        setState(37);
        singleArg();
        setState(42);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(45);
    match(HuskyDefine::RPAREN);
   
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
    setState(60);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuskyDefine::GT: {
        enterOuterAlt(_localctx, 1);
        setState(47);
        match(HuskyDefine::GT);
        break;
      }

      case HuskyDefine::LT: {
        enterOuterAlt(_localctx, 2);
        setState(48);
        match(HuskyDefine::LT);
        break;
      }

      case HuskyDefine::EQUAL: {
        enterOuterAlt(_localctx, 3);
        setState(49);
        match(HuskyDefine::EQUAL);
        break;
      }

      case HuskyDefine::LE: {
        enterOuterAlt(_localctx, 4);
        setState(50);
        match(HuskyDefine::LE);
        break;
      }

      case HuskyDefine::GE: {
        enterOuterAlt(_localctx, 5);
        setState(51);
        match(HuskyDefine::GE);
        break;
      }

      case HuskyDefine::NOTEQUAL: {
        enterOuterAlt(_localctx, 6);
        setState(52);
        match(HuskyDefine::NOTEQUAL);
        break;
      }

      case HuskyDefine::AND: {
        enterOuterAlt(_localctx, 7);
        setState(53);
        match(HuskyDefine::AND);
        break;
      }

      case HuskyDefine::OR: {
        enterOuterAlt(_localctx, 8);
        setState(54);
        match(HuskyDefine::OR);
        break;
      }

      case HuskyDefine::ADD: {
        enterOuterAlt(_localctx, 9);
        setState(55);
        match(HuskyDefine::ADD);
        break;
      }

      case HuskyDefine::SUB: {
        enterOuterAlt(_localctx, 10);
        setState(56);
        match(HuskyDefine::SUB);
        break;
      }

      case HuskyDefine::MUL: {
        enterOuterAlt(_localctx, 11);
        setState(57);
        match(HuskyDefine::MUL);
        break;
      }

      case HuskyDefine::DIV: {
        enterOuterAlt(_localctx, 12);
        setState(58);
        match(HuskyDefine::DIV);
        setState(59);
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
    setState(62);
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

HuskyDefine::TypeDefineContext* HuskyDefine::DefineStatementContext::typeDefine() {
  return getRuleContext<HuskyDefine::TypeDefineContext>(0);
}

HuskyDefine::FuncDefineContext* HuskyDefine::DefineStatementContext::funcDefine() {
  return getRuleContext<HuskyDefine::FuncDefineContext>(0);
}

HuskyDefine::MemberFuncDefineContext* HuskyDefine::DefineStatementContext::memberFuncDefine() {
  return getRuleContext<HuskyDefine::MemberFuncDefineContext>(0);
}

HuskyDefine::ValueDefineContext* HuskyDefine::DefineStatementContext::valueDefine() {
  return getRuleContext<HuskyDefine::ValueDefineContext>(0);
}

HuskyDefine::MemberValueDefineContext* HuskyDefine::DefineStatementContext::memberValueDefine() {
  return getRuleContext<HuskyDefine::MemberValueDefineContext>(0);
}


size_t HuskyDefine::DefineStatementContext::getRuleIndex() const {
  return HuskyDefine::RuleDefineStatement;
}

void HuskyDefine::DefineStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefineStatement(this);
}

void HuskyDefine::DefineStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefineStatement(this);
}


antlrcpp::Any HuskyDefine::DefineStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyDefineVisitor*>(visitor))
    return parserVisitor->visitDefineStatement(this);
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
    setState(69);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(64);
      typeDefine();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(65);
      funcDefine();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(66);
      memberFuncDefine();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(67);
      valueDefine();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(68);
      memberValueDefine();
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

//----------------- TypeDefineContext ------------------------------------------------------------------

HuskyDefine::TypeDefineContext::TypeDefineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyDefine::TypeDefineContext::TYPE() {
  return getToken(HuskyDefine::TYPE, 0);
}

tree::TerminalNode* HuskyDefine::TypeDefineContext::IDENTIFIER() {
  return getToken(HuskyDefine::IDENTIFIER, 0);
}


size_t HuskyDefine::TypeDefineContext::getRuleIndex() const {
  return HuskyDefine::RuleTypeDefine;
}

void HuskyDefine::TypeDefineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeDefine(this);
}

void HuskyDefine::TypeDefineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeDefine(this);
}


antlrcpp::Any HuskyDefine::TypeDefineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyDefineVisitor*>(visitor))
    return parserVisitor->visitTypeDefine(this);
  else
    return visitor->visitChildren(this);
}

HuskyDefine::TypeDefineContext* HuskyDefine::typeDefine() {
  TypeDefineContext *_localctx = _tracker.createInstance<TypeDefineContext>(_ctx, getState());
  enterRule(_localctx, 12, HuskyDefine::RuleTypeDefine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(HuskyDefine::TYPE);
    setState(72);
    dynamic_cast<TypeDefineContext *>(_localctx)->name = match(HuskyDefine::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDefineContext ------------------------------------------------------------------

HuskyDefine::FuncDefineContext::FuncDefineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyDefine::FuncDefineContext::FUNC() {
  return getToken(HuskyDefine::FUNC, 0);
}

HuskyDefine::ArgsContext* HuskyDefine::FuncDefineContext::args() {
  return getRuleContext<HuskyDefine::ArgsContext>(0);
}

tree::TerminalNode* HuskyDefine::FuncDefineContext::COLON() {
  return getToken(HuskyDefine::COLON, 0);
}

HuskyDefine::BopContext* HuskyDefine::FuncDefineContext::bop() {
  return getRuleContext<HuskyDefine::BopContext>(0);
}

std::vector<tree::TerminalNode *> HuskyDefine::FuncDefineContext::IDENTIFIER() {
  return getTokens(HuskyDefine::IDENTIFIER);
}

tree::TerminalNode* HuskyDefine::FuncDefineContext::IDENTIFIER(size_t i) {
  return getToken(HuskyDefine::IDENTIFIER, i);
}

tree::TerminalNode* HuskyDefine::FuncDefineContext::BANG() {
  return getToken(HuskyDefine::BANG, 0);
}


size_t HuskyDefine::FuncDefineContext::getRuleIndex() const {
  return HuskyDefine::RuleFuncDefine;
}

void HuskyDefine::FuncDefineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncDefine(this);
}

void HuskyDefine::FuncDefineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncDefine(this);
}


antlrcpp::Any HuskyDefine::FuncDefineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyDefineVisitor*>(visitor))
    return parserVisitor->visitFuncDefine(this);
  else
    return visitor->visitChildren(this);
}

HuskyDefine::FuncDefineContext* HuskyDefine::funcDefine() {
  FuncDefineContext *_localctx = _tracker.createInstance<FuncDefineContext>(_ctx, getState());
  enterRule(_localctx, 14, HuskyDefine::RuleFuncDefine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    match(HuskyDefine::FUNC);
    setState(78);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuskyDefine::IDENTIFIER: {
        setState(75);
        dynamic_cast<FuncDefineContext *>(_localctx)->name = match(HuskyDefine::IDENTIFIER);
        break;
      }

      case HuskyDefine::GT:
      case HuskyDefine::LT:
      case HuskyDefine::EQUAL:
      case HuskyDefine::LE:
      case HuskyDefine::GE:
      case HuskyDefine::NOTEQUAL:
      case HuskyDefine::AND:
      case HuskyDefine::OR:
      case HuskyDefine::ADD:
      case HuskyDefine::SUB:
      case HuskyDefine::MUL:
      case HuskyDefine::DIV: {
        setState(76);
        bop();
        break;
      }

      case HuskyDefine::BANG: {
        setState(77);
        dynamic_cast<FuncDefineContext *>(_localctx)->bang = match(HuskyDefine::BANG);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(80);
    args();
    setState(81);
    match(HuskyDefine::COLON);

    setState(82);
    dynamic_cast<FuncDefineContext *>(_localctx)->returnType = match(HuskyDefine::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberFuncDefineContext ------------------------------------------------------------------

HuskyDefine::MemberFuncDefineContext::MemberFuncDefineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyDefine::MemberFuncDefineContext::FUNC() {
  return getToken(HuskyDefine::FUNC, 0);
}

tree::TerminalNode* HuskyDefine::MemberFuncDefineContext::DOT() {
  return getToken(HuskyDefine::DOT, 0);
}

HuskyDefine::ArgsContext* HuskyDefine::MemberFuncDefineContext::args() {
  return getRuleContext<HuskyDefine::ArgsContext>(0);
}

tree::TerminalNode* HuskyDefine::MemberFuncDefineContext::COLON() {
  return getToken(HuskyDefine::COLON, 0);
}

std::vector<tree::TerminalNode *> HuskyDefine::MemberFuncDefineContext::IDENTIFIER() {
  return getTokens(HuskyDefine::IDENTIFIER);
}

tree::TerminalNode* HuskyDefine::MemberFuncDefineContext::IDENTIFIER(size_t i) {
  return getToken(HuskyDefine::IDENTIFIER, i);
}

HuskyDefine::BopContext* HuskyDefine::MemberFuncDefineContext::bop() {
  return getRuleContext<HuskyDefine::BopContext>(0);
}

tree::TerminalNode* HuskyDefine::MemberFuncDefineContext::ARRAY_INDEX() {
  return getToken(HuskyDefine::ARRAY_INDEX, 0);
}

tree::TerminalNode* HuskyDefine::MemberFuncDefineContext::ARRAY_SLICE() {
  return getToken(HuskyDefine::ARRAY_SLICE, 0);
}

tree::TerminalNode* HuskyDefine::MemberFuncDefineContext::BANG() {
  return getToken(HuskyDefine::BANG, 0);
}


size_t HuskyDefine::MemberFuncDefineContext::getRuleIndex() const {
  return HuskyDefine::RuleMemberFuncDefine;
}

void HuskyDefine::MemberFuncDefineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberFuncDefine(this);
}

void HuskyDefine::MemberFuncDefineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberFuncDefine(this);
}


antlrcpp::Any HuskyDefine::MemberFuncDefineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyDefineVisitor*>(visitor))
    return parserVisitor->visitMemberFuncDefine(this);
  else
    return visitor->visitChildren(this);
}

HuskyDefine::MemberFuncDefineContext* HuskyDefine::memberFuncDefine() {
  MemberFuncDefineContext *_localctx = _tracker.createInstance<MemberFuncDefineContext>(_ctx, getState());
  enterRule(_localctx, 16, HuskyDefine::RuleMemberFuncDefine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    match(HuskyDefine::FUNC);
    setState(85);
    dynamic_cast<MemberFuncDefineContext *>(_localctx)->typeName = match(HuskyDefine::IDENTIFIER);
    setState(86);
    match(HuskyDefine::DOT);
    setState(92);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuskyDefine::IDENTIFIER: {
        setState(87);
        dynamic_cast<MemberFuncDefineContext *>(_localctx)->member = match(HuskyDefine::IDENTIFIER);
        break;
      }

      case HuskyDefine::GT:
      case HuskyDefine::LT:
      case HuskyDefine::EQUAL:
      case HuskyDefine::LE:
      case HuskyDefine::GE:
      case HuskyDefine::NOTEQUAL:
      case HuskyDefine::AND:
      case HuskyDefine::OR:
      case HuskyDefine::ADD:
      case HuskyDefine::SUB:
      case HuskyDefine::MUL:
      case HuskyDefine::DIV: {
        setState(88);
        bop();
        break;
      }

      case HuskyDefine::BANG: {
        setState(89);
        dynamic_cast<MemberFuncDefineContext *>(_localctx)->bang = match(HuskyDefine::BANG);
        break;
      }

      case HuskyDefine::ARRAY_INDEX: {
        setState(90);
        match(HuskyDefine::ARRAY_INDEX);
        break;
      }

      case HuskyDefine::ARRAY_SLICE: {
        setState(91);
        match(HuskyDefine::ARRAY_SLICE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(94);
    args();
    setState(95);
    match(HuskyDefine::COLON);
    setState(96);
    dynamic_cast<MemberFuncDefineContext *>(_localctx)->returnType = match(HuskyDefine::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueDefineContext ------------------------------------------------------------------

HuskyDefine::ValueDefineContext::ValueDefineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyDefine::ValueDefineContext::VAL() {
  return getToken(HuskyDefine::VAL, 0);
}

tree::TerminalNode* HuskyDefine::ValueDefineContext::COLON() {
  return getToken(HuskyDefine::COLON, 0);
}

std::vector<tree::TerminalNode *> HuskyDefine::ValueDefineContext::IDENTIFIER() {
  return getTokens(HuskyDefine::IDENTIFIER);
}

tree::TerminalNode* HuskyDefine::ValueDefineContext::IDENTIFIER(size_t i) {
  return getToken(HuskyDefine::IDENTIFIER, i);
}


size_t HuskyDefine::ValueDefineContext::getRuleIndex() const {
  return HuskyDefine::RuleValueDefine;
}

void HuskyDefine::ValueDefineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValueDefine(this);
}

void HuskyDefine::ValueDefineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValueDefine(this);
}


antlrcpp::Any HuskyDefine::ValueDefineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyDefineVisitor*>(visitor))
    return parserVisitor->visitValueDefine(this);
  else
    return visitor->visitChildren(this);
}

HuskyDefine::ValueDefineContext* HuskyDefine::valueDefine() {
  ValueDefineContext *_localctx = _tracker.createInstance<ValueDefineContext>(_ctx, getState());
  enterRule(_localctx, 18, HuskyDefine::RuleValueDefine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    match(HuskyDefine::VAL);
    setState(99);
    dynamic_cast<ValueDefineContext *>(_localctx)->name = match(HuskyDefine::IDENTIFIER);
    setState(100);
    match(HuskyDefine::COLON);
    setState(101);
    dynamic_cast<ValueDefineContext *>(_localctx)->typeName = match(HuskyDefine::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberValueDefineContext ------------------------------------------------------------------

HuskyDefine::MemberValueDefineContext::MemberValueDefineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyDefine::MemberValueDefineContext::VAL() {
  return getToken(HuskyDefine::VAL, 0);
}

tree::TerminalNode* HuskyDefine::MemberValueDefineContext::DOT() {
  return getToken(HuskyDefine::DOT, 0);
}

tree::TerminalNode* HuskyDefine::MemberValueDefineContext::COLON() {
  return getToken(HuskyDefine::COLON, 0);
}

std::vector<tree::TerminalNode *> HuskyDefine::MemberValueDefineContext::IDENTIFIER() {
  return getTokens(HuskyDefine::IDENTIFIER);
}

tree::TerminalNode* HuskyDefine::MemberValueDefineContext::IDENTIFIER(size_t i) {
  return getToken(HuskyDefine::IDENTIFIER, i);
}


size_t HuskyDefine::MemberValueDefineContext::getRuleIndex() const {
  return HuskyDefine::RuleMemberValueDefine;
}

void HuskyDefine::MemberValueDefineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberValueDefine(this);
}

void HuskyDefine::MemberValueDefineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyDefineListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberValueDefine(this);
}


antlrcpp::Any HuskyDefine::MemberValueDefineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyDefineVisitor*>(visitor))
    return parserVisitor->visitMemberValueDefine(this);
  else
    return visitor->visitChildren(this);
}

HuskyDefine::MemberValueDefineContext* HuskyDefine::memberValueDefine() {
  MemberValueDefineContext *_localctx = _tracker.createInstance<MemberValueDefineContext>(_ctx, getState());
  enterRule(_localctx, 20, HuskyDefine::RuleMemberValueDefine);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    match(HuskyDefine::VAL);
    setState(104);
    dynamic_cast<MemberValueDefineContext *>(_localctx)->typeName = match(HuskyDefine::IDENTIFIER);
    setState(105);
    match(HuskyDefine::DOT);
    setState(106);
    dynamic_cast<MemberValueDefineContext *>(_localctx)->fieldName = match(HuskyDefine::IDENTIFIER);
    setState(107);
    match(HuskyDefine::COLON);
    setState(108);
    dynamic_cast<MemberValueDefineContext *>(_localctx)->typeName = match(HuskyDefine::IDENTIFIER);
   
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
  "defineStatements", "singleArg", "args", "bop", "uop", "defineStatement", 
  "typeDefine", "funcDefine", "memberFuncDefine", "valueDefine", "memberValueDefine"
};

std::vector<std::string> HuskyDefine::_literalNames = {
  "", "", "", "", "", "'type'", "'func'", "'val'", "'do'", "'while'", "'for'", 
  "'if'", "'else'", "'return'", "", "", "'('", "')'", "'['", "']'", "'{'", 
  "'}'", "';'", "','", "'.'", "'>'", "'<'", "'!'", "'='", "'<='", "'>='", 
  "'!='", "'&'", "'|'", "'+'", "'-'", "'*'", "'/'", "'^'", "':'", "'<-'", 
  "'[]'", "'[:]'"
};

std::vector<std::string> HuskyDefine::_symbolicNames = {
  "", "DECIMAL_LITERAL", "FLOAT_LITERAL", "WS", "LINE_COMMENT", "TYPE", 
  "FUNC", "VAL", "DO", "WHILE", "FOR", "IF", "ELSE", "RETURN", "BOOL_LITERAL", 
  "IDENTIFIER", "LPAREN", "RPAREN", "LBRACK", "RBRACK", "LBRACE", "RBRACE", 
  "SEMI", "COMMA", "DOT", "GT", "LT", "BANG", "EQUAL", "LE", "GE", "NOTEQUAL", 
  "AND", "OR", "ADD", "SUB", "MUL", "DIV", "CARET", "COLON", "ASSIGN", "ARRAY_INDEX", 
  "ARRAY_SLICE"
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
    0x3, 0x2c, 0x71, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x3, 0x2, 0x7, 0x2, 0x1a, 0xa, 0x2, 0xc, 0x2, 
    0xe, 0x2, 0x1d, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x29, 
    0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x2c, 0xb, 0x4, 0x5, 0x4, 0x2e, 0xa, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x5, 0x5, 0x3f, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x48, 0xa, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 
    0x51, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 
    0xa, 0x5f, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x2, 0x2, 0xd, 0x2, 
    0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x2, 0x3, 0x4, 
    0x2, 0x1d, 0x1d, 0x24, 0x25, 0x2, 0x7d, 0x2, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x20, 0x3, 0x2, 0x2, 0x2, 0x6, 0x24, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3e, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x40, 0x3, 0x2, 0x2, 0x2, 0xc, 0x47, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x49, 0x3, 0x2, 0x2, 0x2, 0x10, 0x4c, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x56, 0x3, 0x2, 0x2, 0x2, 0x14, 0x64, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x69, 0x3, 0x2, 0x2, 0x2, 0x18, 0x1a, 0x5, 0xc, 0x7, 0x2, 0x19, 
    0x18, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x1e, 0x3, 
    0x2, 0x2, 0x2, 0x1d, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x1f, 0x7, 0x2, 
    0x2, 0x3, 0x1f, 0x3, 0x3, 0x2, 0x2, 0x2, 0x20, 0x21, 0x7, 0x11, 0x2, 
    0x2, 0x21, 0x22, 0x7, 0x29, 0x2, 0x2, 0x22, 0x23, 0x7, 0x11, 0x2, 0x2, 
    0x23, 0x5, 0x3, 0x2, 0x2, 0x2, 0x24, 0x2d, 0x7, 0x12, 0x2, 0x2, 0x25, 
    0x2a, 0x5, 0x4, 0x3, 0x2, 0x26, 0x27, 0x7, 0x19, 0x2, 0x2, 0x27, 0x29, 
    0x5, 0x4, 0x3, 0x2, 0x28, 0x26, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2c, 0x3, 
    0x2, 0x2, 0x2, 0x2a, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0x2b, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 
    0x2, 0x2d, 0x25, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 
    0x2e, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x7, 0x13, 0x2, 0x2, 0x30, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x31, 0x3f, 0x7, 0x1b, 0x2, 0x2, 0x32, 0x3f, 
    0x7, 0x1c, 0x2, 0x2, 0x33, 0x3f, 0x7, 0x1e, 0x2, 0x2, 0x34, 0x3f, 0x7, 
    0x1f, 0x2, 0x2, 0x35, 0x3f, 0x7, 0x20, 0x2, 0x2, 0x36, 0x3f, 0x7, 0x21, 
    0x2, 0x2, 0x37, 0x3f, 0x7, 0x22, 0x2, 0x2, 0x38, 0x3f, 0x7, 0x23, 0x2, 
    0x2, 0x39, 0x3f, 0x7, 0x24, 0x2, 0x2, 0x3a, 0x3f, 0x7, 0x25, 0x2, 0x2, 
    0x3b, 0x3f, 0x7, 0x26, 0x2, 0x2, 0x3c, 0x3d, 0x7, 0x27, 0x2, 0x2, 0x3d, 
    0x3f, 0x7, 0x28, 0x2, 0x2, 0x3e, 0x31, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x32, 
    0x3, 0x2, 0x2, 0x2, 0x3e, 0x33, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x34, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x35, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x36, 0x3, 0x2, 
    0x2, 0x2, 0x3e, 0x37, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x38, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3a, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3f, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x9, 0x2, 0x2, 0x2, 0x41, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x48, 0x5, 0xe, 0x8, 0x2, 0x43, 0x48, 0x5, 
    0x10, 0x9, 0x2, 0x44, 0x48, 0x5, 0x12, 0xa, 0x2, 0x45, 0x48, 0x5, 0x14, 
    0xb, 0x2, 0x46, 0x48, 0x5, 0x16, 0xc, 0x2, 0x47, 0x42, 0x3, 0x2, 0x2, 
    0x2, 0x47, 0x43, 0x3, 0x2, 0x2, 0x2, 0x47, 0x44, 0x3, 0x2, 0x2, 0x2, 
    0x47, 0x45, 0x3, 0x2, 0x2, 0x2, 0x47, 0x46, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x7, 0x7, 0x2, 0x2, 0x4a, 0x4b, 
    0x7, 0x11, 0x2, 0x2, 0x4b, 0xf, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x50, 0x7, 
    0x8, 0x2, 0x2, 0x4d, 0x51, 0x7, 0x11, 0x2, 0x2, 0x4e, 0x51, 0x5, 0x8, 
    0x5, 0x2, 0x4f, 0x51, 0x7, 0x1d, 0x2, 0x2, 0x50, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4f, 0x3, 0x2, 0x2, 0x2, 
    0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x5, 0x6, 0x4, 0x2, 0x53, 
    0x54, 0x7, 0x29, 0x2, 0x2, 0x54, 0x55, 0x7, 0x11, 0x2, 0x2, 0x55, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x7, 0x8, 0x2, 0x2, 0x57, 0x58, 0x7, 
    0x11, 0x2, 0x2, 0x58, 0x5e, 0x7, 0x1a, 0x2, 0x2, 0x59, 0x5f, 0x7, 0x11, 
    0x2, 0x2, 0x5a, 0x5f, 0x5, 0x8, 0x5, 0x2, 0x5b, 0x5f, 0x7, 0x1d, 0x2, 
    0x2, 0x5c, 0x5f, 0x7, 0x2b, 0x2, 0x2, 0x5d, 0x5f, 0x7, 0x2c, 0x2, 0x2, 
    0x5e, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x5b, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5d, 
    0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x5, 
    0x6, 0x4, 0x2, 0x61, 0x62, 0x7, 0x29, 0x2, 0x2, 0x62, 0x63, 0x7, 0x11, 
    0x2, 0x2, 0x63, 0x13, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x7, 0x9, 0x2, 
    0x2, 0x65, 0x66, 0x7, 0x11, 0x2, 0x2, 0x66, 0x67, 0x7, 0x29, 0x2, 0x2, 
    0x67, 0x68, 0x7, 0x11, 0x2, 0x2, 0x68, 0x15, 0x3, 0x2, 0x2, 0x2, 0x69, 
    0x6a, 0x7, 0x9, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x11, 0x2, 0x2, 0x6b, 0x6c, 
    0x7, 0x1a, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x11, 0x2, 0x2, 0x6d, 0x6e, 0x7, 
    0x29, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x11, 0x2, 0x2, 0x6f, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x9, 0x1b, 0x2a, 0x2d, 0x3e, 0x47, 0x50, 0x5e, 
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
