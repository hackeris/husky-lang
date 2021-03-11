
// Generated from grammar/HuskyDefine.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "HuskyDefine.h"


/**
 * This interface defines an abstract listener for a parse tree produced by HuskyDefine.
 */
class  HuskyDefineListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterDefineStatements(HuskyDefine::DefineStatementsContext *ctx) = 0;
  virtual void exitDefineStatements(HuskyDefine::DefineStatementsContext *ctx) = 0;

  virtual void enterArgs(HuskyDefine::ArgsContext *ctx) = 0;
  virtual void exitArgs(HuskyDefine::ArgsContext *ctx) = 0;

  virtual void enterSingleArg(HuskyDefine::SingleArgContext *ctx) = 0;
  virtual void exitSingleArg(HuskyDefine::SingleArgContext *ctx) = 0;

  virtual void enterBop(HuskyDefine::BopContext *ctx) = 0;
  virtual void exitBop(HuskyDefine::BopContext *ctx) = 0;

  virtual void enterUop(HuskyDefine::UopContext *ctx) = 0;
  virtual void exitUop(HuskyDefine::UopContext *ctx) = 0;

  virtual void enterDefineStatement(HuskyDefine::DefineStatementContext *ctx) = 0;
  virtual void exitDefineStatement(HuskyDefine::DefineStatementContext *ctx) = 0;

  virtual void enterTypeDefine(HuskyDefine::TypeDefineContext *ctx) = 0;
  virtual void exitTypeDefine(HuskyDefine::TypeDefineContext *ctx) = 0;

  virtual void enterFuncDefine(HuskyDefine::FuncDefineContext *ctx) = 0;
  virtual void exitFuncDefine(HuskyDefine::FuncDefineContext *ctx) = 0;

  virtual void enterMemberFuncDefine(HuskyDefine::MemberFuncDefineContext *ctx) = 0;
  virtual void exitMemberFuncDefine(HuskyDefine::MemberFuncDefineContext *ctx) = 0;

  virtual void enterValueDefine(HuskyDefine::ValueDefineContext *ctx) = 0;
  virtual void exitValueDefine(HuskyDefine::ValueDefineContext *ctx) = 0;

  virtual void enterMemberValueDefine(HuskyDefine::MemberValueDefineContext *ctx) = 0;
  virtual void exitMemberValueDefine(HuskyDefine::MemberValueDefineContext *ctx) = 0;


};

