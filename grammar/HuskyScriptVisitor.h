
// Generated from grammar/HuskyScript.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "HuskyScript.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by HuskyScript.
 */
class  HuskyScriptVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by HuskyScript.
   */
    virtual antlrcpp::Any visitLang(HuskyScript::LangContext *context) = 0;

    virtual antlrcpp::Any visitOuterStatement(HuskyScript::OuterStatementContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(HuskyScript::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(HuskyScript::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFormalParameterList(HuskyScript::FormalParameterListContext *context) = 0;

    virtual antlrcpp::Any visitStatement(HuskyScript::StatementContext *context) = 0;

    virtual antlrcpp::Any visitBlock(HuskyScript::BlockContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(HuskyScript::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitReturnStatement(HuskyScript::ReturnStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(HuskyScript::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitElseStatement(HuskyScript::ElseStatementContext *context) = 0;

    virtual antlrcpp::Any visitExpressionList(HuskyScript::ExpressionListContext *context) = 0;

    virtual antlrcpp::Any visitMethodCall(HuskyScript::MethodCallContext *context) = 0;

    virtual antlrcpp::Any visitToIntegerLiteral(HuskyScript::ToIntegerLiteralContext *context) = 0;

    virtual antlrcpp::Any visitToFloatLiteral(HuskyScript::ToFloatLiteralContext *context) = 0;

    virtual antlrcpp::Any visitToBoolLiteral(HuskyScript::ToBoolLiteralContext *context) = 0;

    virtual antlrcpp::Any visitIntegerLiteral(HuskyScript::IntegerLiteralContext *context) = 0;

    virtual antlrcpp::Any visitFloatLiteral(HuskyScript::FloatLiteralContext *context) = 0;

    virtual antlrcpp::Any visitToArraySlice(HuskyScript::ToArraySliceContext *context) = 0;

    virtual antlrcpp::Any visitToAssign(HuskyScript::ToAssignContext *context) = 0;

    virtual antlrcpp::Any visitToUnary(HuskyScript::ToUnaryContext *context) = 0;

    virtual antlrcpp::Any visitToCall(HuskyScript::ToCallContext *context) = 0;

    virtual antlrcpp::Any visitToArrayRef(HuskyScript::ToArrayRefContext *context) = 0;

    virtual antlrcpp::Any visitToPrimary(HuskyScript::ToPrimaryContext *context) = 0;

    virtual antlrcpp::Any visitToBinary(HuskyScript::ToBinaryContext *context) = 0;

    virtual antlrcpp::Any visitToAttrGet(HuskyScript::ToAttrGetContext *context) = 0;

    virtual antlrcpp::Any visitToIdentifier(HuskyScript::ToIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitToParen(HuskyScript::ToParenContext *context) = 0;

    virtual antlrcpp::Any visitToLiteral(HuskyScript::ToLiteralContext *context) = 0;


};

