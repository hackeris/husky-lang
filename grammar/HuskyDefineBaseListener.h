
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

  virtual void enterStatements(HuskyDefine::StatementsContext * /*ctx*/) override { }
  virtual void exitStatements(HuskyDefine::StatementsContext * /*ctx*/) override { }

  virtual void enterStatement(HuskyDefine::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(HuskyDefine::StatementContext * /*ctx*/) override { }

  virtual void enterArgs(HuskyDefine::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(HuskyDefine::ArgsContext * /*ctx*/) override { }

  virtual void enterBop(HuskyDefine::BopContext * /*ctx*/) override { }
  virtual void exitBop(HuskyDefine::BopContext * /*ctx*/) override { }

  virtual void enterUop(HuskyDefine::UopContext * /*ctx*/) override { }
  virtual void exitUop(HuskyDefine::UopContext * /*ctx*/) override { }

  virtual void enterTypeDef(HuskyDefine::TypeDefContext * /*ctx*/) override { }
  virtual void exitTypeDef(HuskyDefine::TypeDefContext * /*ctx*/) override { }

  virtual void enterFuncDef(HuskyDefine::FuncDefContext * /*ctx*/) override { }
  virtual void exitFuncDef(HuskyDefine::FuncDefContext * /*ctx*/) override { }

  virtual void enterMemberFuncDef(HuskyDefine::MemberFuncDefContext * /*ctx*/) override { }
  virtual void exitMemberFuncDef(HuskyDefine::MemberFuncDefContext * /*ctx*/) override { }

  virtual void enterValueDef(HuskyDefine::ValueDefContext * /*ctx*/) override { }
  virtual void exitValueDef(HuskyDefine::ValueDefContext * /*ctx*/) override { }

  virtual void enterMemberValueDef(HuskyDefine::MemberValueDefContext * /*ctx*/) override { }
  virtual void exitMemberValueDef(HuskyDefine::MemberValueDefContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

