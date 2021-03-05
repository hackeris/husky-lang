
// Generated from grammar/HuskyLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  HuskyLexer : public antlr4::Lexer {
public:
  enum {
    DECIMAL_LITERAL = 1, FLOAT_LITERAL = 2, WS = 3, LINE_COMMENT = 4, TYPE = 5, 
    FUNC = 6, VAL = 7, BOOL_LITERAL = 8, IDENTIFIER = 9, LPAREN = 10, RPAREN = 11, 
    LBRACK = 12, RBRACK = 13, SEMI = 14, COMMA = 15, DOT = 16, GT = 17, 
    LT = 18, BANG = 19, EQUAL = 20, LE = 21, GE = 22, NOTEQUAL = 23, AND = 24, 
    OR = 25, ADD = 26, SUB = 27, MUL = 28, DIV = 29, CARET = 30, COLON = 31
  };

  HuskyLexer(antlr4::CharStream *input);
  ~HuskyLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

