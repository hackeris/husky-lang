
// Generated from grammar/HuskyDefine.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "HuskyDefine.h"


/**
 * This interface defines an abstract listener for a parse tree produced by HuskyDefine.
 */
class  HuskyDefineListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStatements(HuskyDefine::StatementsContext *ctx) = 0;
  virtual void exitStatements(HuskyDefine::StatementsContext *ctx) = 0;

  virtual void enterStatement(HuskyDefine::StatementContext *ctx) = 0;
  virtual void exitStatement(HuskyDefine::StatementContext *ctx) = 0;

  virtual void enterArgs(HuskyDefine::ArgsContext *ctx) = 0;
  virtual void exitArgs(HuskyDefine::ArgsContext *ctx) = 0;

  virtual void enterBop(HuskyDefine::BopContext *ctx) = 0;
  virtual void exitBop(HuskyDefine::BopContext *ctx) = 0;

  virtual void enterUop(HuskyDefine::UopContext *ctx) = 0;
  virtual void exitUop(HuskyDefine::UopContext *ctx) = 0;

  virtual void enterTypeDef(HuskyDefine::TypeDefContext *ctx) = 0;
  virtual void exitTypeDef(HuskyDefine::TypeDefContext *ctx) = 0;

  virtual void enterFuncDef(HuskyDefine::FuncDefContext *ctx) = 0;
  virtual void exitFuncDef(HuskyDefine::FuncDefContext *ctx) = 0;

  virtual void enterMemberFuncDef(HuskyDefine::MemberFuncDefContext *ctx) = 0;
  virtual void exitMemberFuncDef(HuskyDefine::MemberFuncDefContext *ctx) = 0;

  virtual void enterValueDef(HuskyDefine::ValueDefContext *ctx) = 0;
  virtual void exitValueDef(HuskyDefine::ValueDefContext *ctx) = 0;

  virtual void enterMemberValueDef(HuskyDefine::MemberValueDefContext *ctx) = 0;
  virtual void exitMemberValueDef(HuskyDefine::MemberValueDefContext *ctx) = 0;


};

