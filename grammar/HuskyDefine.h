
// Generated from grammar/HuskyDefine.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  HuskyDefine : public antlr4::Parser {
public:
  enum {
    DECIMAL_LITERAL = 1, FLOAT_LITERAL = 2, WS = 3, LINE_COMMENT = 4, IDENTIFIER = 5, 
    BOOL_LITERAL = 6, TYPE = 7, FUNC = 8, VAL = 9, LPAREN = 10, RPAREN = 11, 
    LBRACK = 12, RBRACK = 13, SEMI = 14, COMMA = 15, DOT = 16, GT = 17, 
    LT = 18, BANG = 19, EQUAL = 20, LE = 21, GE = 22, NOTEQUAL = 23, AND = 24, 
    OR = 25, ADD = 26, SUB = 27, MUL = 28, DIV = 29, CARET = 30, COLON = 31
  };

  enum {
    RuleStatements = 0, RuleStatement = 1, RuleArgs = 2, RuleBop = 3, RuleUop = 4, 
    RuleDefineStatement = 5
  };

  HuskyDefine(antlr4::TokenStream *input);
  ~HuskyDefine();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class StatementsContext;
  class StatementContext;
  class ArgsContext;
  class BopContext;
  class UopContext;
  class DefineStatementContext; 

  class  StatementsContext : public antlr4::ParserRuleContext {
  public:
    StatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementsContext* statements();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefineStatementContext *defineStatement();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  ArgsContext : public antlr4::ParserRuleContext {
  public:
    ArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgsContext* args();

  class  BopContext : public antlr4::ParserRuleContext {
  public:
    BopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *NOTEQUAL();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *CARET();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BopContext* bop();

  class  UopContext : public antlr4::ParserRuleContext {
  public:
    UopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *BANG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UopContext* uop();

  class  DefineStatementContext : public antlr4::ParserRuleContext {
  public:
    DefineStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DefineStatementContext() = default;
    void copyFrom(DefineStatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  TypeDefContext : public DefineStatementContext {
  public:
    TypeDefContext(DefineStatementContext *ctx);

    antlr4::Token *name = nullptr;
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *IDENTIFIER();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FuncDefContext : public DefineStatementContext {
  public:
    FuncDefContext(DefineStatementContext *ctx);

    antlr4::Token *name = nullptr;
    antlr4::Token *returnType = nullptr;
    antlr4::tree::TerminalNode *FUNC();
    antlr4::tree::TerminalNode *LPAREN();
    ArgsContext *args();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    BopContext *bop();
    UopContext *uop();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ValueDefContext : public DefineStatementContext {
  public:
    ValueDefContext(DefineStatementContext *ctx);

    antlr4::Token *name = nullptr;
    antlr4::Token *typeName = nullptr;
    antlr4::tree::TerminalNode *VAL();
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MemberValueDefContext : public DefineStatementContext {
  public:
    MemberValueDefContext(DefineStatementContext *ctx);

    antlr4::Token *typeName = nullptr;
    antlr4::Token *fieldName = nullptr;
    antlr4::tree::TerminalNode *VAL();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MemberFuncDefContext : public DefineStatementContext {
  public:
    MemberFuncDefContext(DefineStatementContext *ctx);

    antlr4::Token *typeName = nullptr;
    antlr4::Token *member = nullptr;
    antlr4::Token *returnType = nullptr;
    antlr4::tree::TerminalNode *FUNC();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *LPAREN();
    ArgsContext *args();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    BopContext *bop();
    UopContext *uop();
    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DefineStatementContext* defineStatement();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

