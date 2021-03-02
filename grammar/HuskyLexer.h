
// Generated from grammar/HuskyLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  HuskyLexer : public antlr4::Lexer {
public:
  enum {
    DECIMAL_LITERAL = 1, FLOAT_LITERAL = 2, WS = 3, LINE_COMMENT = 4, IDENTIFIER = 5, 
    BOOL_LITERAL = 6, LPAREN = 7, RPAREN = 8, LBRACK = 9, RBRACK = 10, SEMI = 11, 
    COMMA = 12, DOT = 13, GT = 14, LT = 15, BANG = 16, EQUAL = 17, LE = 18, 
    GE = 19, NOTEQUAL = 20, AND = 21, OR = 22, ADD = 23, SUB = 24, MUL = 25, 
    DIV = 26, CARET = 27
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

