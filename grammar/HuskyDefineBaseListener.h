
// Generated from grammar/HuskyDefine.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "HuskyDefineListener.h"


/**
 * This class provides an empty implementation of HuskyDefineListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  HuskyDefineBaseListener : public HuskyDefineListener {
public:

  virtual void enterDefineStatements(HuskyDefine::DefineStatementsContext * /*ctx*/) override { }
  virtual void exitDefineStatements(HuskyDefine::DefineStatementsContext * /*ctx*/) override { }

  virtual void enterSingleArg(HuskyDefine::SingleArgContext * /*ctx*/) override { }
  virtual void exitSingleArg(HuskyDefine::SingleArgContext * /*ctx*/) override { }

  virtual void enterArgs(HuskyDefine::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(HuskyDefine::ArgsContext * /*ctx*/) override { }

  virtual void enterBop(HuskyDefine::BopContext * /*ctx*/) override { }
  virtual void exitBop(HuskyDefine::BopContext * /*ctx*/) override { }

  virtual void enterUop(HuskyDefine::UopContext * /*ctx*/) override { }
  virtual void exitUop(HuskyDefine::UopContext * /*ctx*/) override { }

  virtual void enterDefineStatement(HuskyDefine::DefineStatementContext * /*ctx*/) override { }
  virtual void exitDefineStatement(HuskyDefine::DefineStatementContext * /*ctx*/) override { }

  virtual void enterTypeDefine(HuskyDefine::TypeDefineContext * /*ctx*/) override { }
  virtual void exitTypeDefine(HuskyDefine::TypeDefineContext * /*ctx*/) override { }

  virtual void enterFuncDefine(HuskyDefine::FuncDefineContext * /*ctx*/) override { }
  virtual void exitFuncDefine(HuskyDefine::FuncDefineContext * /*ctx*/) override { }

  virtual void enterMemberFuncDefine(HuskyDefine::MemberFuncDefineContext * /*ctx*/) override { }
  virtual void exitMemberFuncDefine(HuskyDefine::MemberFuncDefineContext * /*ctx*/) override { }

  virtual void enterValueDefine(HuskyDefine::ValueDefineContext * /*ctx*/) override { }
  virtual void exitValueDefine(HuskyDefine::ValueDefineContext * /*ctx*/) override { }

  virtual void enterMemberValueDefine(HuskyDefine::MemberValueDefineContext * /*ctx*/) override { }
  virtual void exitMemberValueDefine(HuskyDefine::MemberValueDefineContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

