
// Generated from grammar/HuskyDefine.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "HuskyDefineVisitor.h"


/**
 * This class provides an empty implementation of HuskyDefineVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  HuskyDefineBaseVisitor : public HuskyDefineVisitor {
public:

  virtual antlrcpp::Any visitStatements(HuskyDefine::StatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(HuskyDefine::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgs(HuskyDefine::ArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBop(HuskyDefine::BopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUop(HuskyDefine::UopContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefineStatement(HuskyDefine::DefineStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeDefine(HuskyDefine::TypeDefineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncDefine(HuskyDefine::FuncDefineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberFuncDefine(HuskyDefine::MemberFuncDefineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValueDefine(HuskyDefine::ValueDefineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberValueDefine(HuskyDefine::MemberValueDefineContext *ctx) override {
    return visitChildren(ctx);
  }


};

