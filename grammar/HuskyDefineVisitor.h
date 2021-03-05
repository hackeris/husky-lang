
// Generated from grammar/HuskyDefine.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "HuskyDefine.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by HuskyDefine.
 */
class  HuskyDefineVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by HuskyDefine.
   */
    virtual antlrcpp::Any visitStatements(HuskyDefine::StatementsContext *context) = 0;

    virtual antlrcpp::Any visitStatement(HuskyDefine::StatementContext *context) = 0;

    virtual antlrcpp::Any visitArgs(HuskyDefine::ArgsContext *context) = 0;

    virtual antlrcpp::Any visitBop(HuskyDefine::BopContext *context) = 0;

    virtual antlrcpp::Any visitUop(HuskyDefine::UopContext *context) = 0;

    virtual antlrcpp::Any visitDefineStatement(HuskyDefine::DefineStatementContext *context) = 0;

    virtual antlrcpp::Any visitTypeDefine(HuskyDefine::TypeDefineContext *context) = 0;

    virtual antlrcpp::Any visitFuncDefine(HuskyDefine::FuncDefineContext *context) = 0;

    virtual antlrcpp::Any visitMemberFuncDefine(HuskyDefine::MemberFuncDefineContext *context) = 0;

    virtual antlrcpp::Any visitValueDefine(HuskyDefine::ValueDefineContext *context) = 0;

    virtual antlrcpp::Any visitMemberValueDefine(HuskyDefine::MemberValueDefineContext *context) = 0;


};

