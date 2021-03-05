
// Generated from grammar/HuskyDefine.g4 by ANTLR 4.8

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

  virtual antlrcpp::Any visitTypeDef(HuskyDefine::TypeDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncDef(HuskyDefine::FuncDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberFuncDef(HuskyDefine::MemberFuncDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValueDef(HuskyDefine::ValueDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMemberValueDef(HuskyDefine::MemberValueDefContext *ctx) override {
    return visitChildren(ctx);
  }


};

