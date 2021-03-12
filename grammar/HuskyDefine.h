
// Generated from grammar/HuskyDefine.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  HuskyDefine : public antlr4::Parser {
public:
  enum {
    DECIMAL_LITERAL = 1, FLOAT_LITERAL = 2, WS = 3, LINE_COMMENT = 4, TYPE = 5, 
    FUNC = 6, VAL = 7, DO = 8, WHILE = 9, FOR = 10, IF = 11, ELSE = 12, 
    RETURN = 13, BOOL_LITERAL = 14, IDENTIFIER = 15, LPAREN = 16, RPAREN = 17, 
    LBRACK = 18, RBRACK = 19, LBRACE = 20, RBRACE = 21, SEMI = 22, COMMA = 23, 
    DOT = 24, GT = 25, LT = 26, BANG = 27, EQUAL = 28, LE = 29, GE = 30, 
    NOTEQUAL = 31, AND = 32, OR = 33, ADD = 34, SUB = 35, MUL = 36, DIV = 37, 
    CARET = 38, COLON = 39, ASSIGN = 40, ARRAY_INDEX = 41, ARRAY_SLICE = 42
  };

  enum {
    RuleDefineStatements = 0, RuleSingleArg = 1, RuleArgs = 2, RuleBop = 3, 
    RuleUop = 4, RuleDefineStatement = 5, RuleTypeDefine = 6, RuleFuncDefine = 7, 
    RuleMemberFuncDefine = 8, RuleValueDefine = 9, RuleMemberValueDefine = 10
  };

  HuskyDefine(antlr4::TokenStream *input);
  ~HuskyDefine();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class DefineStatementsContext;
  class SingleArgContext;
  class ArgsContext;
  class BopContext;
  class UopContext;
  class DefineStatementContext;
  class TypeDefineContext;
  class FuncDefineContext;
  class MemberFuncDefineContext;
  class ValueDefineContext;
  class MemberValueDefineContext; 

  class  DefineStatementsContext : public antlr4::ParserRuleContext {
  public:
    DefineStatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<DefineStatementContext *> defineStatement();
    DefineStatementContext* defineStatement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefineStatementsContext* defineStatements();

  class  SingleArgContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *argName = nullptr;;
    antlr4::Token *argType = nullptr;;
    SingleArgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleArgContext* singleArg();

  class  ArgsContext : public antlr4::ParserRuleContext {
  public:
    ArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<SingleArgContext *> singleArg();
    SingleArgContext* singleArg(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

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
    virtual size_t getRuleIndex() const override;
    TypeDefineContext *typeDefine();
    FuncDefineContext *funcDefine();
    MemberFuncDefineContext *memberFuncDefine();
    ValueDefineContext *valueDefine();
    MemberValueDefineContext *memberValueDefine();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefineStatementContext* defineStatement();

  class  TypeDefineContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;;
    TypeDefineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeDefineContext* typeDefine();

  class  FuncDefineContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;;
    antlr4::Token *bang = nullptr;;
    antlr4::Token *returnType = nullptr;;
    FuncDefineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNC();
    ArgsContext *args();
    antlr4::tree::TerminalNode *COLON();
    BopContext *bop();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    antlr4::tree::TerminalNode *BANG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncDefineContext* funcDefine();

  class  MemberFuncDefineContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *typeName = nullptr;;
    antlr4::Token *member = nullptr;;
    antlr4::Token *bang = nullptr;;
    antlr4::Token *returnType = nullptr;;
    MemberFuncDefineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNC();
    antlr4::tree::TerminalNode *DOT();
    ArgsContext *args();
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    BopContext *bop();
    antlr4::tree::TerminalNode *ARRAY_INDEX();
    antlr4::tree::TerminalNode *ARRAY_SLICE();
    antlr4::tree::TerminalNode *BANG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberFuncDefineContext* memberFuncDefine();

  class  ValueDefineContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *name = nullptr;;
    antlr4::Token *typeName = nullptr;;
    ValueDefineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAL();
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueDefineContext* valueDefine();

  class  MemberValueDefineContext : public antlr4::ParserRuleContext {
  public:
    antlr4::Token *typeName = nullptr;;
    antlr4::Token *fieldName = nullptr;;
    MemberValueDefineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAL();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MemberValueDefineContext* memberValueDefine();


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

