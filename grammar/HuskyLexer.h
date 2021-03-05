
// Generated from grammar/HuskyLexer.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  HuskyLexer : public antlr4::Lexer {
public:
  enum {
    DECIMAL_LITERAL = 1, FLOAT_LITERAL = 2, WS = 3, LINE_COMMENT = 4, TYPE = 5, 
    FUNC = 6, VAL = 7, BOOL_LITERAL = 8, IDENTIFIER = 9, LPAREN = 10, RPAREN = 11, 
    LBRACK = 12, RBRACK = 13, LBRACE = 14, RBRACE = 15, SEMI = 16, COMMA = 17, 
    DOT = 18, GT = 19, LT = 20, BANG = 21, EQUAL = 22, LE = 23, GE = 24, 
    NOTEQUAL = 25, AND = 26, OR = 27, ADD = 28, SUB = 29, MUL = 30, DIV = 31, 
    CARET = 32, COLON = 33, ASSIGN = 34, ARRAY_INDEX = 35, ARRAY_SLICE = 36, 
    DO = 37, WHILE = 38, FOR = 39, IF = 40, ELSE = 41, RETURN = 42
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

