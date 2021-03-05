
// Generated from grammar/HuskyScript.g4 by ANTLR 4.7.2


#include "HuskyScriptListener.h"
#include "HuskyScriptVisitor.h"

#include "HuskyScript.h"


using namespace antlrcpp;
using namespace antlr4;

HuskyScript::HuskyScript(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

HuskyScript::~HuskyScript() {
  delete _interpreter;
}

std::string HuskyScript::getGrammarFileName() const {
  return "HuskyScript.g4";
}

const std::vector<std::string>& HuskyScript::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& HuskyScript::getVocabulary() const {
  return _vocabulary;
}


//----------------- LangContext ------------------------------------------------------------------

HuskyScript::LangContext::LangContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuskyScript::OuterStatementContext *> HuskyScript::LangContext::outerStatement() {
  return getRuleContexts<HuskyScript::OuterStatementContext>();
}

HuskyScript::OuterStatementContext* HuskyScript::LangContext::outerStatement(size_t i) {
  return getRuleContext<HuskyScript::OuterStatementContext>(i);
}


size_t HuskyScript::LangContext::getRuleIndex() const {
  return HuskyScript::RuleLang;
}

void HuskyScript::LangContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLang(this);
}

void HuskyScript::LangContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLang(this);
}


antlrcpp::Any HuskyScript::LangContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitLang(this);
  else
    return visitor->visitChildren(this);
}

HuskyScript::LangContext* HuskyScript::lang() {
  LangContext *_localctx = _tracker.createInstance<LangContext>(_ctx, getState());
  enterRule(_localctx, 0, HuskyScript::RuleLang);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(39);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuskyScript::DECIMAL_LITERAL)
      | (1ULL << HuskyScript::FLOAT_LITERAL)
      | (1ULL << HuskyScript::FUNC)
      | (1ULL << HuskyScript::BOOL_LITERAL)
      | (1ULL << HuskyScript::IDENTIFIER)
      | (1ULL << HuskyScript::LPAREN)
      | (1ULL << HuskyScript::BANG)
      | (1ULL << HuskyScript::ADD)
      | (1ULL << HuskyScript::SUB)
      | (1ULL << HuskyScript::WHILE)
      | (1ULL << HuskyScript::IF)
      | (1ULL << HuskyScript::RETURN))) != 0)) {
      setState(36);
      outerStatement();
      setState(41);
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

//----------------- OuterStatementContext ------------------------------------------------------------------

HuskyScript::OuterStatementContext::OuterStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuskyScript::StatementContext* HuskyScript::OuterStatementContext::statement() {
  return getRuleContext<HuskyScript::StatementContext>(0);
}

HuskyScript::DeclarationContext* HuskyScript::OuterStatementContext::declaration() {
  return getRuleContext<HuskyScript::DeclarationContext>(0);
}


size_t HuskyScript::OuterStatementContext::getRuleIndex() const {
  return HuskyScript::RuleOuterStatement;
}

void HuskyScript::OuterStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOuterStatement(this);
}

void HuskyScript::OuterStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOuterStatement(this);
}


antlrcpp::Any HuskyScript::OuterStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitOuterStatement(this);
  else
    return visitor->visitChildren(this);
}

HuskyScript::OuterStatementContext* HuskyScript::outerStatement() {
  OuterStatementContext *_localctx = _tracker.createInstance<OuterStatementContext>(_ctx, getState());
  enterRule(_localctx, 2, HuskyScript::RuleOuterStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(44);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuskyScript::DECIMAL_LITERAL:
      case HuskyScript::FLOAT_LITERAL:
      case HuskyScript::BOOL_LITERAL:
      case HuskyScript::IDENTIFIER:
      case HuskyScript::LPAREN:
      case HuskyScript::BANG:
      case HuskyScript::ADD:
      case HuskyScript::SUB:
      case HuskyScript::WHILE:
      case HuskyScript::IF:
      case HuskyScript::RETURN: {
        enterOuterAlt(_localctx, 1);
        setState(42);
        statement();
        break;
      }

      case HuskyScript::FUNC: {
        enterOuterAlt(_localctx, 2);
        setState(43);
        declaration();
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

//----------------- DeclarationContext ------------------------------------------------------------------

HuskyScript::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuskyScript::FunctionDeclarationContext* HuskyScript::DeclarationContext::functionDeclaration() {
  return getRuleContext<HuskyScript::FunctionDeclarationContext>(0);
}


size_t HuskyScript::DeclarationContext::getRuleIndex() const {
  return HuskyScript::RuleDeclaration;
}

void HuskyScript::DeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclaration(this);
}

void HuskyScript::DeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclaration(this);
}


antlrcpp::Any HuskyScript::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

HuskyScript::DeclarationContext* HuskyScript::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 4, HuskyScript::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    functionDeclaration();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclarationContext ------------------------------------------------------------------

HuskyScript::FunctionDeclarationContext::FunctionDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyScript::FunctionDeclarationContext::FUNC() {
  return getToken(HuskyScript::FUNC, 0);
}

tree::TerminalNode* HuskyScript::FunctionDeclarationContext::LPAREN() {
  return getToken(HuskyScript::LPAREN, 0);
}

tree::TerminalNode* HuskyScript::FunctionDeclarationContext::RPAREN() {
  return getToken(HuskyScript::RPAREN, 0);
}

HuskyScript::BlockContext* HuskyScript::FunctionDeclarationContext::block() {
  return getRuleContext<HuskyScript::BlockContext>(0);
}

tree::TerminalNode* HuskyScript::FunctionDeclarationContext::IDENTIFIER() {
  return getToken(HuskyScript::IDENTIFIER, 0);
}

HuskyScript::FormalParameterListContext* HuskyScript::FunctionDeclarationContext::formalParameterList() {
  return getRuleContext<HuskyScript::FormalParameterListContext>(0);
}


size_t HuskyScript::FunctionDeclarationContext::getRuleIndex() const {
  return HuskyScript::RuleFunctionDeclaration;
}

void HuskyScript::FunctionDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDeclaration(this);
}

void HuskyScript::FunctionDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDeclaration(this);
}


antlrcpp::Any HuskyScript::FunctionDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitFunctionDeclaration(this);
  else
    return visitor->visitChildren(this);
}

HuskyScript::FunctionDeclarationContext* HuskyScript::functionDeclaration() {
  FunctionDeclarationContext *_localctx = _tracker.createInstance<FunctionDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, HuskyScript::RuleFunctionDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48);
    match(HuskyScript::FUNC);
    setState(49);
    dynamic_cast<FunctionDeclarationContext *>(_localctx)->name = match(HuskyScript::IDENTIFIER);
    setState(50);
    match(HuskyScript::LPAREN);
    setState(52);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuskyScript::IDENTIFIER) {
      setState(51);
      formalParameterList();
    }
    setState(54);
    match(HuskyScript::RPAREN);
    setState(55);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormalParameterListContext ------------------------------------------------------------------

HuskyScript::FormalParameterListContext::FormalParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> HuskyScript::FormalParameterListContext::IDENTIFIER() {
  return getTokens(HuskyScript::IDENTIFIER);
}

tree::TerminalNode* HuskyScript::FormalParameterListContext::IDENTIFIER(size_t i) {
  return getToken(HuskyScript::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> HuskyScript::FormalParameterListContext::COMMA() {
  return getTokens(HuskyScript::COMMA);
}

tree::TerminalNode* HuskyScript::FormalParameterListContext::COMMA(size_t i) {
  return getToken(HuskyScript::COMMA, i);
}


size_t HuskyScript::FormalParameterListContext::getRuleIndex() const {
  return HuskyScript::RuleFormalParameterList;
}

void HuskyScript::FormalParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFormalParameterList(this);
}

void HuskyScript::FormalParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFormalParameterList(this);
}


antlrcpp::Any HuskyScript::FormalParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitFormalParameterList(this);
  else
    return visitor->visitChildren(this);
}

HuskyScript::FormalParameterListContext* HuskyScript::formalParameterList() {
  FormalParameterListContext *_localctx = _tracker.createInstance<FormalParameterListContext>(_ctx, getState());
  enterRule(_localctx, 8, HuskyScript::RuleFormalParameterList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(57);
    match(HuskyScript::IDENTIFIER);
    setState(62);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuskyScript::COMMA) {
      setState(58);
      match(HuskyScript::COMMA);
      setState(59);
      match(HuskyScript::IDENTIFIER);
      setState(64);
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

HuskyScript::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HuskyScript::IfStatementContext* HuskyScript::StatementContext::ifStatement() {
  return getRuleContext<HuskyScript::IfStatementContext>(0);
}

HuskyScript::WhileStatementContext* HuskyScript::StatementContext::whileStatement() {
  return getRuleContext<HuskyScript::WhileStatementContext>(0);
}

HuskyScript::ReturnStatementContext* HuskyScript::StatementContext::returnStatement() {
  return getRuleContext<HuskyScript::ReturnStatementContext>(0);
}

HuskyScript::ExpressionContext* HuskyScript::StatementContext::expression() {
  return getRuleContext<HuskyScript::ExpressionContext>(0);
}


size_t HuskyScript::StatementContext::getRuleIndex() const {
  return HuskyScript::RuleStatement;
}

void HuskyScript::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void HuskyScript::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any HuskyScript::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

HuskyScript::StatementContext* HuskyScript::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 10, HuskyScript::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(69);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuskyScript::IF: {
        enterOuterAlt(_localctx, 1);
        setState(65);
        ifStatement();
        break;
      }

      case HuskyScript::WHILE: {
        enterOuterAlt(_localctx, 2);
        setState(66);
        whileStatement();
        break;
      }

      case HuskyScript::RETURN: {
        enterOuterAlt(_localctx, 3);
        setState(67);
        returnStatement();
        break;
      }

      case HuskyScript::DECIMAL_LITERAL:
      case HuskyScript::FLOAT_LITERAL:
      case HuskyScript::BOOL_LITERAL:
      case HuskyScript::IDENTIFIER:
      case HuskyScript::LPAREN:
      case HuskyScript::BANG:
      case HuskyScript::ADD:
      case HuskyScript::SUB: {
        enterOuterAlt(_localctx, 4);
        setState(68);
        expression(0);
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

//----------------- BlockContext ------------------------------------------------------------------

HuskyScript::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyScript::BlockContext::LBRACE() {
  return getToken(HuskyScript::LBRACE, 0);
}

tree::TerminalNode* HuskyScript::BlockContext::RBRACE() {
  return getToken(HuskyScript::RBRACE, 0);
}

std::vector<HuskyScript::StatementContext *> HuskyScript::BlockContext::statement() {
  return getRuleContexts<HuskyScript::StatementContext>();
}

HuskyScript::StatementContext* HuskyScript::BlockContext::statement(size_t i) {
  return getRuleContext<HuskyScript::StatementContext>(i);
}


size_t HuskyScript::BlockContext::getRuleIndex() const {
  return HuskyScript::RuleBlock;
}

void HuskyScript::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void HuskyScript::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any HuskyScript::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

HuskyScript::BlockContext* HuskyScript::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 12, HuskyScript::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    match(HuskyScript::LBRACE);
    setState(75);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuskyScript::DECIMAL_LITERAL)
      | (1ULL << HuskyScript::FLOAT_LITERAL)
      | (1ULL << HuskyScript::BOOL_LITERAL)
      | (1ULL << HuskyScript::IDENTIFIER)
      | (1ULL << HuskyScript::LPAREN)
      | (1ULL << HuskyScript::BANG)
      | (1ULL << HuskyScript::ADD)
      | (1ULL << HuskyScript::SUB)
      | (1ULL << HuskyScript::WHILE)
      | (1ULL << HuskyScript::IF)
      | (1ULL << HuskyScript::RETURN))) != 0)) {
      setState(72);
      statement();
      setState(77);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(78);
    match(HuskyScript::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

HuskyScript::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyScript::WhileStatementContext::WHILE() {
  return getToken(HuskyScript::WHILE, 0);
}

tree::TerminalNode* HuskyScript::WhileStatementContext::LPAREN() {
  return getToken(HuskyScript::LPAREN, 0);
}

tree::TerminalNode* HuskyScript::WhileStatementContext::RPAREN() {
  return getToken(HuskyScript::RPAREN, 0);
}

HuskyScript::BlockContext* HuskyScript::WhileStatementContext::block() {
  return getRuleContext<HuskyScript::BlockContext>(0);
}

HuskyScript::ExpressionContext* HuskyScript::WhileStatementContext::expression() {
  return getRuleContext<HuskyScript::ExpressionContext>(0);
}


size_t HuskyScript::WhileStatementContext::getRuleIndex() const {
  return HuskyScript::RuleWhileStatement;
}

void HuskyScript::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void HuskyScript::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


antlrcpp::Any HuskyScript::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

HuskyScript::WhileStatementContext* HuskyScript::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, HuskyScript::RuleWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    match(HuskyScript::WHILE);
    setState(81);
    match(HuskyScript::LPAREN);
    setState(82);
    dynamic_cast<WhileStatementContext *>(_localctx)->condition = expression(0);
    setState(83);
    match(HuskyScript::RPAREN);
    setState(84);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

HuskyScript::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyScript::ReturnStatementContext::RETURN() {
  return getToken(HuskyScript::RETURN, 0);
}

HuskyScript::ExpressionContext* HuskyScript::ReturnStatementContext::expression() {
  return getRuleContext<HuskyScript::ExpressionContext>(0);
}


size_t HuskyScript::ReturnStatementContext::getRuleIndex() const {
  return HuskyScript::RuleReturnStatement;
}

void HuskyScript::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void HuskyScript::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}


antlrcpp::Any HuskyScript::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

HuskyScript::ReturnStatementContext* HuskyScript::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, HuskyScript::RuleReturnStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(HuskyScript::RETURN);
    setState(88);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(87);
      expression(0);
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

//----------------- IfStatementContext ------------------------------------------------------------------

HuskyScript::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyScript::IfStatementContext::IF() {
  return getToken(HuskyScript::IF, 0);
}

tree::TerminalNode* HuskyScript::IfStatementContext::LPAREN() {
  return getToken(HuskyScript::LPAREN, 0);
}

tree::TerminalNode* HuskyScript::IfStatementContext::RPAREN() {
  return getToken(HuskyScript::RPAREN, 0);
}

HuskyScript::BlockContext* HuskyScript::IfStatementContext::block() {
  return getRuleContext<HuskyScript::BlockContext>(0);
}

HuskyScript::ExpressionContext* HuskyScript::IfStatementContext::expression() {
  return getRuleContext<HuskyScript::ExpressionContext>(0);
}

HuskyScript::ElseStatementContext* HuskyScript::IfStatementContext::elseStatement() {
  return getRuleContext<HuskyScript::ElseStatementContext>(0);
}


size_t HuskyScript::IfStatementContext::getRuleIndex() const {
  return HuskyScript::RuleIfStatement;
}

void HuskyScript::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void HuskyScript::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


antlrcpp::Any HuskyScript::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

HuskyScript::IfStatementContext* HuskyScript::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, HuskyScript::RuleIfStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    match(HuskyScript::IF);
    setState(91);
    match(HuskyScript::LPAREN);
    setState(92);
    dynamic_cast<IfStatementContext *>(_localctx)->condition = expression(0);
    setState(93);
    match(HuskyScript::RPAREN);
    setState(94);
    block();
    setState(97);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HuskyScript::ELSE) {
      setState(96);
      elseStatement();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStatementContext ------------------------------------------------------------------

HuskyScript::ElseStatementContext::ElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyScript::ElseStatementContext::ELSE() {
  return getToken(HuskyScript::ELSE, 0);
}

tree::TerminalNode* HuskyScript::ElseStatementContext::IF() {
  return getToken(HuskyScript::IF, 0);
}

tree::TerminalNode* HuskyScript::ElseStatementContext::LPAREN() {
  return getToken(HuskyScript::LPAREN, 0);
}

tree::TerminalNode* HuskyScript::ElseStatementContext::RPAREN() {
  return getToken(HuskyScript::RPAREN, 0);
}

HuskyScript::BlockContext* HuskyScript::ElseStatementContext::block() {
  return getRuleContext<HuskyScript::BlockContext>(0);
}

HuskyScript::ExpressionContext* HuskyScript::ElseStatementContext::expression() {
  return getRuleContext<HuskyScript::ExpressionContext>(0);
}

HuskyScript::ElseStatementContext* HuskyScript::ElseStatementContext::elseStatement() {
  return getRuleContext<HuskyScript::ElseStatementContext>(0);
}


size_t HuskyScript::ElseStatementContext::getRuleIndex() const {
  return HuskyScript::RuleElseStatement;
}

void HuskyScript::ElseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseStatement(this);
}

void HuskyScript::ElseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseStatement(this);
}


antlrcpp::Any HuskyScript::ElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitElseStatement(this);
  else
    return visitor->visitChildren(this);
}

HuskyScript::ElseStatementContext* HuskyScript::elseStatement() {
  ElseStatementContext *_localctx = _tracker.createInstance<ElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, HuskyScript::RuleElseStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(110);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(99);
      match(HuskyScript::ELSE);
      setState(100);
      match(HuskyScript::IF);
      setState(101);
      match(HuskyScript::LPAREN);
      setState(102);
      dynamic_cast<ElseStatementContext *>(_localctx)->condition = expression(0);
      setState(103);
      match(HuskyScript::RPAREN);
      setState(104);
      block();
      setState(106);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HuskyScript::ELSE) {
        setState(105);
        elseStatement();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(108);
      match(HuskyScript::ELSE);
      setState(109);
      block();
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

HuskyScript::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HuskyScript::ExpressionContext *> HuskyScript::ExpressionListContext::expression() {
  return getRuleContexts<HuskyScript::ExpressionContext>();
}

HuskyScript::ExpressionContext* HuskyScript::ExpressionListContext::expression(size_t i) {
  return getRuleContext<HuskyScript::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> HuskyScript::ExpressionListContext::COMMA() {
  return getTokens(HuskyScript::COMMA);
}

tree::TerminalNode* HuskyScript::ExpressionListContext::COMMA(size_t i) {
  return getToken(HuskyScript::COMMA, i);
}


size_t HuskyScript::ExpressionListContext::getRuleIndex() const {
  return HuskyScript::RuleExpressionList;
}

void HuskyScript::ExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionList(this);
}

void HuskyScript::ExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionList(this);
}


antlrcpp::Any HuskyScript::ExpressionListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitExpressionList(this);
  else
    return visitor->visitChildren(this);
}

HuskyScript::ExpressionListContext* HuskyScript::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 22, HuskyScript::RuleExpressionList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    expression(0);
    setState(117);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HuskyScript::COMMA) {
      setState(113);
      match(HuskyScript::COMMA);
      setState(114);
      expression(0);
      setState(119);
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

HuskyScript::MethodCallContext::MethodCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyScript::MethodCallContext::IDENTIFIER() {
  return getToken(HuskyScript::IDENTIFIER, 0);
}

tree::TerminalNode* HuskyScript::MethodCallContext::LPAREN() {
  return getToken(HuskyScript::LPAREN, 0);
}

tree::TerminalNode* HuskyScript::MethodCallContext::RPAREN() {
  return getToken(HuskyScript::RPAREN, 0);
}

HuskyScript::ExpressionListContext* HuskyScript::MethodCallContext::expressionList() {
  return getRuleContext<HuskyScript::ExpressionListContext>(0);
}


size_t HuskyScript::MethodCallContext::getRuleIndex() const {
  return HuskyScript::RuleMethodCall;
}

void HuskyScript::MethodCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodCall(this);
}

void HuskyScript::MethodCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodCall(this);
}


antlrcpp::Any HuskyScript::MethodCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitMethodCall(this);
  else
    return visitor->visitChildren(this);
}

HuskyScript::MethodCallContext* HuskyScript::methodCall() {
  MethodCallContext *_localctx = _tracker.createInstance<MethodCallContext>(_ctx, getState());
  enterRule(_localctx, 24, HuskyScript::RuleMethodCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
    match(HuskyScript::IDENTIFIER);
    setState(121);
    match(HuskyScript::LPAREN);
    setState(123);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << HuskyScript::DECIMAL_LITERAL)
      | (1ULL << HuskyScript::FLOAT_LITERAL)
      | (1ULL << HuskyScript::BOOL_LITERAL)
      | (1ULL << HuskyScript::IDENTIFIER)
      | (1ULL << HuskyScript::LPAREN)
      | (1ULL << HuskyScript::BANG)
      | (1ULL << HuskyScript::ADD)
      | (1ULL << HuskyScript::SUB))) != 0)) {
      setState(122);
      expressionList();
    }
    setState(125);
    match(HuskyScript::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

HuskyScript::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HuskyScript::LiteralContext::getRuleIndex() const {
  return HuskyScript::RuleLiteral;
}

void HuskyScript::LiteralContext::copyFrom(LiteralContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ToIntegerLiteralContext ------------------------------------------------------------------

HuskyScript::IntegerLiteralContext* HuskyScript::ToIntegerLiteralContext::integerLiteral() {
  return getRuleContext<HuskyScript::IntegerLiteralContext>(0);
}

HuskyScript::ToIntegerLiteralContext::ToIntegerLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }

void HuskyScript::ToIntegerLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToIntegerLiteral(this);
}
void HuskyScript::ToIntegerLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToIntegerLiteral(this);
}

antlrcpp::Any HuskyScript::ToIntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitToIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToFloatLiteralContext ------------------------------------------------------------------

HuskyScript::FloatLiteralContext* HuskyScript::ToFloatLiteralContext::floatLiteral() {
  return getRuleContext<HuskyScript::FloatLiteralContext>(0);
}

HuskyScript::ToFloatLiteralContext::ToFloatLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }

void HuskyScript::ToFloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToFloatLiteral(this);
}
void HuskyScript::ToFloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToFloatLiteral(this);
}

antlrcpp::Any HuskyScript::ToFloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitToFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToBoolLiteralContext ------------------------------------------------------------------

tree::TerminalNode* HuskyScript::ToBoolLiteralContext::BOOL_LITERAL() {
  return getToken(HuskyScript::BOOL_LITERAL, 0);
}

HuskyScript::ToBoolLiteralContext::ToBoolLiteralContext(LiteralContext *ctx) { copyFrom(ctx); }

void HuskyScript::ToBoolLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToBoolLiteral(this);
}
void HuskyScript::ToBoolLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToBoolLiteral(this);
}

antlrcpp::Any HuskyScript::ToBoolLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitToBoolLiteral(this);
  else
    return visitor->visitChildren(this);
}
HuskyScript::LiteralContext* HuskyScript::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 26, HuskyScript::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(130);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuskyScript::DECIMAL_LITERAL: {
        _localctx = dynamic_cast<LiteralContext *>(_tracker.createInstance<HuskyScript::ToIntegerLiteralContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(127);
        integerLiteral();
        break;
      }

      case HuskyScript::FLOAT_LITERAL: {
        _localctx = dynamic_cast<LiteralContext *>(_tracker.createInstance<HuskyScript::ToFloatLiteralContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(128);
        floatLiteral();
        break;
      }

      case HuskyScript::BOOL_LITERAL: {
        _localctx = dynamic_cast<LiteralContext *>(_tracker.createInstance<HuskyScript::ToBoolLiteralContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(129);
        match(HuskyScript::BOOL_LITERAL);
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

HuskyScript::IntegerLiteralContext::IntegerLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyScript::IntegerLiteralContext::DECIMAL_LITERAL() {
  return getToken(HuskyScript::DECIMAL_LITERAL, 0);
}


size_t HuskyScript::IntegerLiteralContext::getRuleIndex() const {
  return HuskyScript::RuleIntegerLiteral;
}

void HuskyScript::IntegerLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerLiteral(this);
}

void HuskyScript::IntegerLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerLiteral(this);
}


antlrcpp::Any HuskyScript::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}

HuskyScript::IntegerLiteralContext* HuskyScript::integerLiteral() {
  IntegerLiteralContext *_localctx = _tracker.createInstance<IntegerLiteralContext>(_ctx, getState());
  enterRule(_localctx, 28, HuskyScript::RuleIntegerLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(HuskyScript::DECIMAL_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FloatLiteralContext ------------------------------------------------------------------

HuskyScript::FloatLiteralContext::FloatLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HuskyScript::FloatLiteralContext::FLOAT_LITERAL() {
  return getToken(HuskyScript::FLOAT_LITERAL, 0);
}


size_t HuskyScript::FloatLiteralContext::getRuleIndex() const {
  return HuskyScript::RuleFloatLiteral;
}

void HuskyScript::FloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatLiteral(this);
}

void HuskyScript::FloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatLiteral(this);
}


antlrcpp::Any HuskyScript::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}

HuskyScript::FloatLiteralContext* HuskyScript::floatLiteral() {
  FloatLiteralContext *_localctx = _tracker.createInstance<FloatLiteralContext>(_ctx, getState());
  enterRule(_localctx, 30, HuskyScript::RuleFloatLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    match(HuskyScript::FLOAT_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

HuskyScript::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HuskyScript::ExpressionContext::getRuleIndex() const {
  return HuskyScript::RuleExpression;
}

void HuskyScript::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ToArraySliceContext ------------------------------------------------------------------

std::vector<HuskyScript::ExpressionContext *> HuskyScript::ToArraySliceContext::expression() {
  return getRuleContexts<HuskyScript::ExpressionContext>();
}

HuskyScript::ExpressionContext* HuskyScript::ToArraySliceContext::expression(size_t i) {
  return getRuleContext<HuskyScript::ExpressionContext>(i);
}

tree::TerminalNode* HuskyScript::ToArraySliceContext::LBRACK() {
  return getToken(HuskyScript::LBRACK, 0);
}

tree::TerminalNode* HuskyScript::ToArraySliceContext::COLON() {
  return getToken(HuskyScript::COLON, 0);
}

tree::TerminalNode* HuskyScript::ToArraySliceContext::RBRACK() {
  return getToken(HuskyScript::RBRACK, 0);
}

HuskyScript::ToArraySliceContext::ToArraySliceContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyScript::ToArraySliceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToArraySlice(this);
}
void HuskyScript::ToArraySliceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToArraySlice(this);
}

antlrcpp::Any HuskyScript::ToArraySliceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitToArraySlice(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToAssignContext ------------------------------------------------------------------

std::vector<HuskyScript::ExpressionContext *> HuskyScript::ToAssignContext::expression() {
  return getRuleContexts<HuskyScript::ExpressionContext>();
}

HuskyScript::ExpressionContext* HuskyScript::ToAssignContext::expression(size_t i) {
  return getRuleContext<HuskyScript::ExpressionContext>(i);
}

tree::TerminalNode* HuskyScript::ToAssignContext::ASSIGN() {
  return getToken(HuskyScript::ASSIGN, 0);
}

HuskyScript::ToAssignContext::ToAssignContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyScript::ToAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToAssign(this);
}
void HuskyScript::ToAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToAssign(this);
}

antlrcpp::Any HuskyScript::ToAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitToAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToUnaryContext ------------------------------------------------------------------

HuskyScript::ExpressionContext* HuskyScript::ToUnaryContext::expression() {
  return getRuleContext<HuskyScript::ExpressionContext>(0);
}

tree::TerminalNode* HuskyScript::ToUnaryContext::ADD() {
  return getToken(HuskyScript::ADD, 0);
}

tree::TerminalNode* HuskyScript::ToUnaryContext::SUB() {
  return getToken(HuskyScript::SUB, 0);
}

tree::TerminalNode* HuskyScript::ToUnaryContext::BANG() {
  return getToken(HuskyScript::BANG, 0);
}

HuskyScript::ToUnaryContext::ToUnaryContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyScript::ToUnaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToUnary(this);
}
void HuskyScript::ToUnaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToUnary(this);
}

antlrcpp::Any HuskyScript::ToUnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitToUnary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToCallContext ------------------------------------------------------------------

HuskyScript::MethodCallContext* HuskyScript::ToCallContext::methodCall() {
  return getRuleContext<HuskyScript::MethodCallContext>(0);
}

HuskyScript::ToCallContext::ToCallContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyScript::ToCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToCall(this);
}
void HuskyScript::ToCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToCall(this);
}

antlrcpp::Any HuskyScript::ToCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitToCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToArrayRefContext ------------------------------------------------------------------

std::vector<HuskyScript::ExpressionContext *> HuskyScript::ToArrayRefContext::expression() {
  return getRuleContexts<HuskyScript::ExpressionContext>();
}

HuskyScript::ExpressionContext* HuskyScript::ToArrayRefContext::expression(size_t i) {
  return getRuleContext<HuskyScript::ExpressionContext>(i);
}

tree::TerminalNode* HuskyScript::ToArrayRefContext::LBRACK() {
  return getToken(HuskyScript::LBRACK, 0);
}

tree::TerminalNode* HuskyScript::ToArrayRefContext::RBRACK() {
  return getToken(HuskyScript::RBRACK, 0);
}

HuskyScript::ToArrayRefContext::ToArrayRefContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyScript::ToArrayRefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToArrayRef(this);
}
void HuskyScript::ToArrayRefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToArrayRef(this);
}

antlrcpp::Any HuskyScript::ToArrayRefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitToArrayRef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToPrimaryContext ------------------------------------------------------------------

HuskyScript::PrimaryContext* HuskyScript::ToPrimaryContext::primary() {
  return getRuleContext<HuskyScript::PrimaryContext>(0);
}

HuskyScript::ToPrimaryContext::ToPrimaryContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyScript::ToPrimaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToPrimary(this);
}
void HuskyScript::ToPrimaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToPrimary(this);
}

antlrcpp::Any HuskyScript::ToPrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitToPrimary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToBinaryContext ------------------------------------------------------------------

std::vector<HuskyScript::ExpressionContext *> HuskyScript::ToBinaryContext::expression() {
  return getRuleContexts<HuskyScript::ExpressionContext>();
}

HuskyScript::ExpressionContext* HuskyScript::ToBinaryContext::expression(size_t i) {
  return getRuleContext<HuskyScript::ExpressionContext>(i);
}

tree::TerminalNode* HuskyScript::ToBinaryContext::CARET() {
  return getToken(HuskyScript::CARET, 0);
}

tree::TerminalNode* HuskyScript::ToBinaryContext::MUL() {
  return getToken(HuskyScript::MUL, 0);
}

tree::TerminalNode* HuskyScript::ToBinaryContext::DIV() {
  return getToken(HuskyScript::DIV, 0);
}

tree::TerminalNode* HuskyScript::ToBinaryContext::ADD() {
  return getToken(HuskyScript::ADD, 0);
}

tree::TerminalNode* HuskyScript::ToBinaryContext::SUB() {
  return getToken(HuskyScript::SUB, 0);
}

tree::TerminalNode* HuskyScript::ToBinaryContext::LE() {
  return getToken(HuskyScript::LE, 0);
}

tree::TerminalNode* HuskyScript::ToBinaryContext::GE() {
  return getToken(HuskyScript::GE, 0);
}

tree::TerminalNode* HuskyScript::ToBinaryContext::GT() {
  return getToken(HuskyScript::GT, 0);
}

tree::TerminalNode* HuskyScript::ToBinaryContext::LT() {
  return getToken(HuskyScript::LT, 0);
}

tree::TerminalNode* HuskyScript::ToBinaryContext::EQUAL() {
  return getToken(HuskyScript::EQUAL, 0);
}

tree::TerminalNode* HuskyScript::ToBinaryContext::NOTEQUAL() {
  return getToken(HuskyScript::NOTEQUAL, 0);
}

tree::TerminalNode* HuskyScript::ToBinaryContext::AND() {
  return getToken(HuskyScript::AND, 0);
}

tree::TerminalNode* HuskyScript::ToBinaryContext::OR() {
  return getToken(HuskyScript::OR, 0);
}

HuskyScript::ToBinaryContext::ToBinaryContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyScript::ToBinaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToBinary(this);
}
void HuskyScript::ToBinaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToBinary(this);
}

antlrcpp::Any HuskyScript::ToBinaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitToBinary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToAttrGetContext ------------------------------------------------------------------

HuskyScript::ExpressionContext* HuskyScript::ToAttrGetContext::expression() {
  return getRuleContext<HuskyScript::ExpressionContext>(0);
}

tree::TerminalNode* HuskyScript::ToAttrGetContext::DOT() {
  return getToken(HuskyScript::DOT, 0);
}

tree::TerminalNode* HuskyScript::ToAttrGetContext::IDENTIFIER() {
  return getToken(HuskyScript::IDENTIFIER, 0);
}

HuskyScript::MethodCallContext* HuskyScript::ToAttrGetContext::methodCall() {
  return getRuleContext<HuskyScript::MethodCallContext>(0);
}

HuskyScript::ToAttrGetContext::ToAttrGetContext(ExpressionContext *ctx) { copyFrom(ctx); }

void HuskyScript::ToAttrGetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToAttrGet(this);
}
void HuskyScript::ToAttrGetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToAttrGet(this);
}

antlrcpp::Any HuskyScript::ToAttrGetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitToAttrGet(this);
  else
    return visitor->visitChildren(this);
}

HuskyScript::ExpressionContext* HuskyScript::expression() {
   return expression(0);
}

HuskyScript::ExpressionContext* HuskyScript::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  HuskyScript::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  HuskyScript::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, HuskyScript::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(143);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ToPrimaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(137);
      primary();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ToCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(138);
      methodCall();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ToUnaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(139);
      dynamic_cast<ToUnaryContext *>(_localctx)->prefix = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == HuskyScript::ADD

      || _la == HuskyScript::SUB)) {
        dynamic_cast<ToUnaryContext *>(_localctx)->prefix = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(140);
      expression(10);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ToUnaryContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(141);
      dynamic_cast<ToUnaryContext *>(_localctx)->prefix = match(HuskyScript::BANG);
      setState(142);
      expression(9);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(189);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(187);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ToBinaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(145);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(146);
          dynamic_cast<ToBinaryContext *>(_localctx)->bop = match(HuskyScript::CARET);
          setState(147);
          expression(9);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ToBinaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(148);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(149);
          dynamic_cast<ToBinaryContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == HuskyScript::MUL

          || _la == HuskyScript::DIV)) {
            dynamic_cast<ToBinaryContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(150);
          expression(8);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ToBinaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(151);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(152);
          dynamic_cast<ToBinaryContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == HuskyScript::ADD

          || _la == HuskyScript::SUB)) {
            dynamic_cast<ToBinaryContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(153);
          expression(7);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ToBinaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(154);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(155);
          dynamic_cast<ToBinaryContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << HuskyScript::GT)
            | (1ULL << HuskyScript::LT)
            | (1ULL << HuskyScript::LE)
            | (1ULL << HuskyScript::GE))) != 0))) {
            dynamic_cast<ToBinaryContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(156);
          expression(6);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ToBinaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(157);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(158);
          dynamic_cast<ToBinaryContext *>(_localctx)->bop = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == HuskyScript::EQUAL

          || _la == HuskyScript::NOTEQUAL)) {
            dynamic_cast<ToBinaryContext *>(_localctx)->bop = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(159);
          expression(5);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<ToBinaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(160);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(161);
          dynamic_cast<ToBinaryContext *>(_localctx)->bop = match(HuskyScript::AND);
          setState(162);
          expression(4);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<ToBinaryContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(163);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(164);
          dynamic_cast<ToBinaryContext *>(_localctx)->bop = match(HuskyScript::OR);
          setState(165);
          expression(3);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<ToAssignContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(166);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(167);
          dynamic_cast<ToAssignContext *>(_localctx)->bop = match(HuskyScript::ASSIGN);
          setState(168);
          expression(2);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<ToAttrGetContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(169);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(170);
          dynamic_cast<ToAttrGetContext *>(_localctx)->dot = match(HuskyScript::DOT);
          setState(173);
          _errHandler->sync(this);
          switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
          case 1: {
            setState(171);
            match(HuskyScript::IDENTIFIER);
            break;
          }

          case 2: {
            setState(172);
            methodCall();
            break;
          }

          }
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<ToArrayRefContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(175);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(176);
          match(HuskyScript::LBRACK);
          setState(177);
          expression(0);
          setState(178);
          match(HuskyScript::RBRACK);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<ToArraySliceContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(180);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(181);
          match(HuskyScript::LBRACK);
          setState(182);
          dynamic_cast<ToArraySliceContext *>(_localctx)->begin = expression(0);
          setState(183);
          match(HuskyScript::COLON);
          setState(184);
          dynamic_cast<ToArraySliceContext *>(_localctx)->end = expression(0);
          setState(185);
          match(HuskyScript::RBRACK);
          break;
        }

        } 
      }
      setState(191);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
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

HuskyScript::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t HuskyScript::PrimaryContext::getRuleIndex() const {
  return HuskyScript::RulePrimary;
}

void HuskyScript::PrimaryContext::copyFrom(PrimaryContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ToParenContext ------------------------------------------------------------------

tree::TerminalNode* HuskyScript::ToParenContext::LPAREN() {
  return getToken(HuskyScript::LPAREN, 0);
}

HuskyScript::ExpressionContext* HuskyScript::ToParenContext::expression() {
  return getRuleContext<HuskyScript::ExpressionContext>(0);
}

tree::TerminalNode* HuskyScript::ToParenContext::RPAREN() {
  return getToken(HuskyScript::RPAREN, 0);
}

HuskyScript::ToParenContext::ToParenContext(PrimaryContext *ctx) { copyFrom(ctx); }

void HuskyScript::ToParenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToParen(this);
}
void HuskyScript::ToParenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToParen(this);
}

antlrcpp::Any HuskyScript::ToParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitToParen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToIdentifierContext ------------------------------------------------------------------

tree::TerminalNode* HuskyScript::ToIdentifierContext::IDENTIFIER() {
  return getToken(HuskyScript::IDENTIFIER, 0);
}

HuskyScript::ToIdentifierContext::ToIdentifierContext(PrimaryContext *ctx) { copyFrom(ctx); }

void HuskyScript::ToIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToIdentifier(this);
}
void HuskyScript::ToIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToIdentifier(this);
}

antlrcpp::Any HuskyScript::ToIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitToIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ToLiteralContext ------------------------------------------------------------------

HuskyScript::LiteralContext* HuskyScript::ToLiteralContext::literal() {
  return getRuleContext<HuskyScript::LiteralContext>(0);
}

HuskyScript::ToLiteralContext::ToLiteralContext(PrimaryContext *ctx) { copyFrom(ctx); }

void HuskyScript::ToLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterToLiteral(this);
}
void HuskyScript::ToLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<HuskyScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitToLiteral(this);
}

antlrcpp::Any HuskyScript::ToLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HuskyScriptVisitor*>(visitor))
    return parserVisitor->visitToLiteral(this);
  else
    return visitor->visitChildren(this);
}
HuskyScript::PrimaryContext* HuskyScript::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 34, HuskyScript::RulePrimary);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(198);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HuskyScript::IDENTIFIER: {
        _localctx = dynamic_cast<PrimaryContext *>(_tracker.createInstance<HuskyScript::ToIdentifierContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(192);
        match(HuskyScript::IDENTIFIER);
        break;
      }

      case HuskyScript::LPAREN: {
        _localctx = dynamic_cast<PrimaryContext *>(_tracker.createInstance<HuskyScript::ToParenContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(193);
        match(HuskyScript::LPAREN);
        setState(194);
        expression(0);
        setState(195);
        match(HuskyScript::RPAREN);
        break;
      }

      case HuskyScript::DECIMAL_LITERAL:
      case HuskyScript::FLOAT_LITERAL:
      case HuskyScript::BOOL_LITERAL: {
        _localctx = dynamic_cast<PrimaryContext *>(_tracker.createInstance<HuskyScript::ToLiteralContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(197);
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

bool HuskyScript::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 16: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool HuskyScript::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 8);
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);
    case 5: return precpred(_ctx, 3);
    case 6: return precpred(_ctx, 2);
    case 7: return precpred(_ctx, 1);
    case 8: return precpred(_ctx, 14);
    case 9: return precpred(_ctx, 13);
    case 10: return precpred(_ctx, 12);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> HuskyScript::_decisionToDFA;
atn::PredictionContextCache HuskyScript::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN HuskyScript::_atn;
std::vector<uint16_t> HuskyScript::_serializedATN;

std::vector<std::string> HuskyScript::_ruleNames = {
  "lang", "outerStatement", "declaration", "functionDeclaration", "formalParameterList", 
  "statement", "block", "whileStatement", "returnStatement", "ifStatement", 
  "elseStatement", "expressionList", "methodCall", "literal", "integerLiteral", 
  "floatLiteral", "expression", "primary"
};

std::vector<std::string> HuskyScript::_literalNames = {
  "", "", "", "", "", "'type'", "'func'", "'val'", "", "", "'('", "')'", 
  "'['", "']'", "'{'", "'}'", "';'", "','", "'.'", "'>'", "'<'", "'!'", 
  "'='", "'<='", "'>='", "'!='", "'&'", "'|'", "'+'", "'-'", "'*'", "'/'", 
  "'^'", "':'", "'<-'", "'[]'", "'[:]'", "'do'", "'while'", "'for'", "'if'", 
  "'else'", "'return'"
};

std::vector<std::string> HuskyScript::_symbolicNames = {
  "", "DECIMAL_LITERAL", "FLOAT_LITERAL", "WS", "LINE_COMMENT", "TYPE", 
  "FUNC", "VAL", "BOOL_LITERAL", "IDENTIFIER", "LPAREN", "RPAREN", "LBRACK", 
  "RBRACK", "LBRACE", "RBRACE", "SEMI", "COMMA", "DOT", "GT", "LT", "BANG", 
  "EQUAL", "LE", "GE", "NOTEQUAL", "AND", "OR", "ADD", "SUB", "MUL", "DIV", 
  "CARET", "COLON", "ASSIGN", "ARRAY_INDEX", "ARRAY_SLICE", "DO", "WHILE", 
  "FOR", "IF", "ELSE", "RETURN"
};

dfa::Vocabulary HuskyScript::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> HuskyScript::_tokenNames;

HuskyScript::Initializer::Initializer() {
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
    0x3, 0x2c, 0xcb, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x3, 0x2, 0x7, 0x2, 0x28, 0xa, 0x2, 
    0xc, 0x2, 0xe, 0x2, 0x2b, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2f, 
    0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x5, 0x5, 0x37, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x7, 0x6, 0x3f, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x42, 0xb, 
    0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x48, 0xa, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x4c, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x4f, 
    0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x5b, 0xa, 0xa, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 
    0xb, 0x64, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x6d, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 
    0xc, 0x71, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 0x76, 0xa, 
    0xd, 0xc, 0xd, 0xe, 0xd, 0x79, 0xb, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x5, 0xe, 0x7e, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x5, 0xf, 0x85, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x5, 0x12, 0x92, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 
    0xb0, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x7, 0x12, 0xbe, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xc1, 0xb, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 
    0x13, 0xc9, 0xa, 0x13, 0x3, 0x13, 0x2, 0x3, 0x22, 0x14, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x2, 0x6, 0x3, 0x2, 0x1e, 0x1f, 0x3, 0x2, 0x20, 0x21, 
    0x4, 0x2, 0x15, 0x16, 0x19, 0x1a, 0x4, 0x2, 0x18, 0x18, 0x1b, 0x1b, 
    0x2, 0xd9, 0x2, 0x29, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2e, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x30, 0x3, 0x2, 0x2, 0x2, 0x8, 0x32, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x3b, 0x3, 0x2, 0x2, 0x2, 0xc, 0x47, 0x3, 0x2, 0x2, 0x2, 0xe, 0x49, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x52, 0x3, 0x2, 0x2, 0x2, 0x12, 0x58, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x16, 0x70, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x72, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x7a, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x84, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x86, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x88, 0x3, 0x2, 0x2, 0x2, 0x22, 0x91, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xc8, 0x3, 0x2, 0x2, 0x2, 0x26, 0x28, 0x5, 0x4, 0x3, 0x2, 0x27, 0x26, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x29, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0x29, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x2b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2f, 0x5, 0xc, 0x7, 
    0x2, 0x2d, 0x2f, 0x5, 0x6, 0x4, 0x2, 0x2e, 0x2c, 0x3, 0x2, 0x2, 0x2, 
    0x2e, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x30, 
    0x31, 0x5, 0x8, 0x5, 0x2, 0x31, 0x7, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 
    0x7, 0x8, 0x2, 0x2, 0x33, 0x34, 0x7, 0xb, 0x2, 0x2, 0x34, 0x36, 0x7, 
    0xc, 0x2, 0x2, 0x35, 0x37, 0x5, 0xa, 0x6, 0x2, 0x36, 0x35, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x37, 0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0x3, 0x2, 0x2, 
    0x2, 0x38, 0x39, 0x7, 0xd, 0x2, 0x2, 0x39, 0x3a, 0x5, 0xe, 0x8, 0x2, 
    0x3a, 0x9, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x40, 0x7, 0xb, 0x2, 0x2, 0x3c, 
    0x3d, 0x7, 0x13, 0x2, 0x2, 0x3d, 0x3f, 0x7, 0xb, 0x2, 0x2, 0x3e, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x3f, 0x42, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3e, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x41, 0x3, 0x2, 0x2, 0x2, 0x41, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x40, 0x3, 0x2, 0x2, 0x2, 0x43, 0x48, 0x5, 0x14, 0xb, 
    0x2, 0x44, 0x48, 0x5, 0x10, 0x9, 0x2, 0x45, 0x48, 0x5, 0x12, 0xa, 0x2, 
    0x46, 0x48, 0x5, 0x22, 0x12, 0x2, 0x47, 0x43, 0x3, 0x2, 0x2, 0x2, 0x47, 
    0x44, 0x3, 0x2, 0x2, 0x2, 0x47, 0x45, 0x3, 0x2, 0x2, 0x2, 0x47, 0x46, 
    0x3, 0x2, 0x2, 0x2, 0x48, 0xd, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4d, 0x7, 
    0x10, 0x2, 0x2, 0x4a, 0x4c, 0x5, 0xc, 0x7, 0x2, 0x4b, 0x4a, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x50, 0x3, 0x2, 0x2, 0x2, 
    0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x50, 0x51, 0x7, 0x11, 0x2, 0x2, 0x51, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x7, 0x28, 0x2, 0x2, 0x53, 0x54, 
    0x7, 0xc, 0x2, 0x2, 0x54, 0x55, 0x5, 0x22, 0x12, 0x2, 0x55, 0x56, 0x7, 
    0xd, 0x2, 0x2, 0x56, 0x57, 0x5, 0xe, 0x8, 0x2, 0x57, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x58, 0x5a, 0x7, 0x2c, 0x2, 0x2, 0x59, 0x5b, 0x5, 0x22, 0x12, 
    0x2, 0x5a, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x3, 0x2, 0x2, 0x2, 
    0x5b, 0x13, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x7, 0x2a, 0x2, 0x2, 0x5d, 
    0x5e, 0x7, 0xc, 0x2, 0x2, 0x5e, 0x5f, 0x5, 0x22, 0x12, 0x2, 0x5f, 0x60, 
    0x7, 0xd, 0x2, 0x2, 0x60, 0x61, 0x5, 0xe, 0x8, 0x2, 0x61, 0x63, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x64, 0x5, 0x16, 0xc, 0x2, 0x63, 0x62, 0x3, 0x2, 
    0x2, 0x2, 0x63, 0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x65, 0x66, 0x7, 0x2b, 0x2, 0x2, 0x66, 0x67, 0x7, 0x2a, 0x2, 0x2, 
    0x67, 0x68, 0x7, 0xc, 0x2, 0x2, 0x68, 0x69, 0x5, 0x22, 0x12, 0x2, 0x69, 
    0x6a, 0x7, 0xd, 0x2, 0x2, 0x6a, 0x6c, 0x5, 0xe, 0x8, 0x2, 0x6b, 0x6d, 
    0x5, 0x16, 0xc, 0x2, 0x6c, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x3, 
    0x2, 0x2, 0x2, 0x6d, 0x71, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x2b, 
    0x2, 0x2, 0x6f, 0x71, 0x5, 0xe, 0x8, 0x2, 0x70, 0x65, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x71, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x77, 0x5, 0x22, 0x12, 0x2, 0x73, 0x74, 0x7, 0x13, 0x2, 0x2, 0x74, 
    0x76, 0x5, 0x22, 0x12, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x76, 0x79, 
    0x3, 0x2, 0x2, 0x2, 0x77, 0x75, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 
    0x2, 0x2, 0x2, 0x78, 0x19, 0x3, 0x2, 0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 
    0x2, 0x2, 0x7a, 0x7b, 0x7, 0xb, 0x2, 0x2, 0x7b, 0x7d, 0x7, 0xc, 0x2, 
    0x2, 0x7c, 0x7e, 0x5, 0x18, 0xd, 0x2, 0x7d, 0x7c, 0x3, 0x2, 0x2, 0x2, 
    0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7f, 
    0x80, 0x7, 0xd, 0x2, 0x2, 0x80, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x81, 0x85, 
    0x5, 0x1e, 0x10, 0x2, 0x82, 0x85, 0x5, 0x20, 0x11, 0x2, 0x83, 0x85, 
    0x7, 0xa, 0x2, 0x2, 0x84, 0x81, 0x3, 0x2, 0x2, 0x2, 0x84, 0x82, 0x3, 
    0x2, 0x2, 0x2, 0x84, 0x83, 0x3, 0x2, 0x2, 0x2, 0x85, 0x1d, 0x3, 0x2, 
    0x2, 0x2, 0x86, 0x87, 0x7, 0x3, 0x2, 0x2, 0x87, 0x1f, 0x3, 0x2, 0x2, 
    0x2, 0x88, 0x89, 0x7, 0x4, 0x2, 0x2, 0x89, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0x8a, 0x8b, 0x8, 0x12, 0x1, 0x2, 0x8b, 0x92, 0x5, 0x24, 0x13, 0x2, 0x8c, 
    0x92, 0x5, 0x1a, 0xe, 0x2, 0x8d, 0x8e, 0x9, 0x2, 0x2, 0x2, 0x8e, 0x92, 
    0x5, 0x22, 0x12, 0xc, 0x8f, 0x90, 0x7, 0x17, 0x2, 0x2, 0x90, 0x92, 0x5, 
    0x22, 0x12, 0xb, 0x91, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8c, 0x3, 0x2, 
    0x2, 0x2, 0x91, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x91, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x92, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0xc, 0xa, 0x2, 0x2, 
    0x94, 0x95, 0x7, 0x22, 0x2, 0x2, 0x95, 0xbe, 0x5, 0x22, 0x12, 0xb, 0x96, 
    0x97, 0xc, 0x9, 0x2, 0x2, 0x97, 0x98, 0x9, 0x3, 0x2, 0x2, 0x98, 0xbe, 
    0x5, 0x22, 0x12, 0xa, 0x99, 0x9a, 0xc, 0x8, 0x2, 0x2, 0x9a, 0x9b, 0x9, 
    0x2, 0x2, 0x2, 0x9b, 0xbe, 0x5, 0x22, 0x12, 0x9, 0x9c, 0x9d, 0xc, 0x7, 
    0x2, 0x2, 0x9d, 0x9e, 0x9, 0x4, 0x2, 0x2, 0x9e, 0xbe, 0x5, 0x22, 0x12, 
    0x8, 0x9f, 0xa0, 0xc, 0x6, 0x2, 0x2, 0xa0, 0xa1, 0x9, 0x5, 0x2, 0x2, 
    0xa1, 0xbe, 0x5, 0x22, 0x12, 0x7, 0xa2, 0xa3, 0xc, 0x5, 0x2, 0x2, 0xa3, 
    0xa4, 0x7, 0x1c, 0x2, 0x2, 0xa4, 0xbe, 0x5, 0x22, 0x12, 0x6, 0xa5, 0xa6, 
    0xc, 0x4, 0x2, 0x2, 0xa6, 0xa7, 0x7, 0x1d, 0x2, 0x2, 0xa7, 0xbe, 0x5, 
    0x22, 0x12, 0x5, 0xa8, 0xa9, 0xc, 0x3, 0x2, 0x2, 0xa9, 0xaa, 0x7, 0x24, 
    0x2, 0x2, 0xaa, 0xbe, 0x5, 0x22, 0x12, 0x4, 0xab, 0xac, 0xc, 0x10, 0x2, 
    0x2, 0xac, 0xaf, 0x7, 0x14, 0x2, 0x2, 0xad, 0xb0, 0x7, 0xb, 0x2, 0x2, 
    0xae, 0xb0, 0x5, 0x1a, 0xe, 0x2, 0xaf, 0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 
    0xae, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 
    0xc, 0xf, 0x2, 0x2, 0xb2, 0xb3, 0x7, 0xe, 0x2, 0x2, 0xb3, 0xb4, 0x5, 
    0x22, 0x12, 0x2, 0xb4, 0xb5, 0x7, 0xf, 0x2, 0x2, 0xb5, 0xbe, 0x3, 0x2, 
    0x2, 0x2, 0xb6, 0xb7, 0xc, 0xe, 0x2, 0x2, 0xb7, 0xb8, 0x7, 0xe, 0x2, 
    0x2, 0xb8, 0xb9, 0x5, 0x22, 0x12, 0x2, 0xb9, 0xba, 0x7, 0x23, 0x2, 0x2, 
    0xba, 0xbb, 0x5, 0x22, 0x12, 0x2, 0xbb, 0xbc, 0x7, 0xf, 0x2, 0x2, 0xbc, 
    0xbe, 0x3, 0x2, 0x2, 0x2, 0xbd, 0x93, 0x3, 0x2, 0x2, 0x2, 0xbd, 0x96, 
    0x3, 0x2, 0x2, 0x2, 0xbd, 0x99, 0x3, 0x2, 0x2, 0x2, 0xbd, 0x9c, 0x3, 
    0x2, 0x2, 0x2, 0xbd, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xa2, 0x3, 0x2, 
    0x2, 0x2, 0xbd, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xa8, 0x3, 0x2, 0x2, 
    0x2, 0xbd, 0xab, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xb1, 0x3, 0x2, 0x2, 0x2, 
    0xbd, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xbf, 
    0xbd, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc0, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0xc1, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc9, 0x7, 
    0xb, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0xc, 0x2, 0x2, 0xc4, 0xc5, 0x5, 0x22, 
    0x12, 0x2, 0xc5, 0xc6, 0x7, 0xd, 0x2, 0x2, 0xc6, 0xc9, 0x3, 0x2, 0x2, 
    0x2, 0xc7, 0xc9, 0x5, 0x1c, 0xf, 0x2, 0xc8, 0xc2, 0x3, 0x2, 0x2, 0x2, 
    0xc8, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc9, 
    0x25, 0x3, 0x2, 0x2, 0x2, 0x14, 0x29, 0x2e, 0x36, 0x40, 0x47, 0x4d, 
    0x5a, 0x63, 0x6c, 0x70, 0x77, 0x7d, 0x84, 0x91, 0xaf, 0xbd, 0xbf, 0xc8, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

HuskyScript::Initializer HuskyScript::_init;
