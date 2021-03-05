
// Generated from grammar/HuskyLexer.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"




class  HuskyLexer : public antlr4::Lexer {
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

