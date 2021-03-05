
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

    virtual antlrcpp::Any visitTypeDef(HuskyDefine::TypeDefContext *context) = 0;

    virtual antlrcpp::Any visitFuncDef(HuskyDefine::FuncDefContext *context) = 0;

    virtual antlrcpp::Any visitMemberFuncDef(HuskyDefine::MemberFuncDefContext *context) = 0;

    virtual antlrcpp::Any visitValueDef(HuskyDefine::ValueDefContext *context) = 0;

    virtual antlrcpp::Any visitMemberValueDef(HuskyDefine::MemberValueDefContext *context) = 0;


};

