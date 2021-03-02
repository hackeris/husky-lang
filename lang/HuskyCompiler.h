//
// Created by rainm on 2021/3/2.
//

#ifndef HUSKY_LANG_HUSKYCOMPILER_H
#define HUSKY_LANG_HUSKYCOMPILER_H

#include <memory>
#include <utility>
#include <vector>

#include "antlr4-runtime.h"
#include "../grammar/HuskyGrammarVisitor.h"

namespace husky {

    using namespace antlr4;

    class ASTNode {
    public:
        virtual ~ASTNode() = default;

    public:
        template<class T>
        bool is() {
            return dynamic_cast<T *>(this) != nullptr;
        }

        template<class T>
        T* as() {
            return dynamic_cast<T *>(this);
        }
    };

    class ASTHolder {
    public:
        explicit ASTHolder(ASTNode *ast) : ast(ast) {}

        template<class T>
        bool hold() {
            return ast->template is<T>();
        }

        template<class T>
        T *get() {
            return ast->template as<T>();
        }

    public:
        ASTNode *ast;
    };

    class Expression : public ASTNode {
    };

    class Primary : public Expression {
    };

    class Identifier : public Primary {
    public:
        explicit Identifier(std::string name) : name(std::move(name)) {}

    public:
        std::string name;
    };

    class Literal : public Primary {
    };

    using ArgList = std::vector<Expression *>;

    class MethodCall : public Expression {
    public:
        MethodCall(Identifier *identifier, ArgList args) :
                identifier(identifier), args(std::move(args)) {}

    public:
        Identifier *identifier;
        ArgList args;
    };

    class AttrGet : public Expression {
    public:
        Expression *expr{};

        //  either of
        Identifier *identifier{nullptr};
        MethodCall *methodCall{nullptr};

    public:
        AttrGet(Expression *expr, Identifier *identifier) : expr(expr), identifier(identifier) {}

        AttrGet(Expression *expr, MethodCall *mc) : expr(expr), methodCall(mc) {}
    };

    class ArrayRef : public Expression {
    public:
        ArrayRef(Expression *array, Expression *index) : array(array), index(index) {}

    public:
        Expression *array{};
        Expression *index{};
    };

    class UnaryExpr : public Expression {
    public:
        enum Operation {
            Positive, Negative, Not
        };
        Operation op;
        Expression *expr{};
    public:
        UnaryExpr(UnaryExpr::Operation op, Expression *exp) : op(op), expr(exp) {}
    };

    class BinaryExpr : public Expression {
    public:
        enum Operation {
            Power, Mul, Div, Add, Sub, Le, Ge, Lt, Gt, Equal, NotEqual, And, Or
        };
        Operation op;
        Expression *left{};
        Expression *right{};
    public:
        BinaryExpr(BinaryExpr::Operation op, Expression *left, Expression *right)
                : op(op), left(left), right(right) {}
    };

    class IntegerLiteral : public Literal {
    public:
        explicit IntegerLiteral(int v) : value(v) {}

    public:
        int value{};
    };

    class FloatLiteral : public Literal {
    public:
        explicit FloatLiteral(float f) : value(f) {}

    public:
        float value{};
    };

    class BoolLiteral : public Literal {
    public:
        explicit BoolLiteral(bool b) : value(b) {}

    public:
        bool value{};
    };

    class Type {
    public:
        virtual ~Type() = default;
    };

    class Value {
    public:
        virtual ~Value() = default;
    };

    class SemanticWrapper {
    public:
        std::shared_ptr<Type> type();

    private:
        std::shared_ptr<ASTNode> ast;
    };

    class Interpreter {
    public:
        std::shared_ptr<Value> evaluate();

    private:
        std::shared_ptr<ASTNode> ast;
    };

    class HuskyErrorListener : public ANTLRErrorListener {

        void syntaxError(Recognizer *recognizer, Token *offendingSymbol, size_t line,
                         size_t charPositionInLine, const std::string &msg, std::exception_ptr e) override;

        void reportAmbiguity(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex, size_t stopIndex, bool exact,
                             const antlrcpp::BitSet &ambigAlts, atn::ATNConfigSet *configs) override;

        void reportAttemptingFullContext(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex,
                                         size_t stopIndex, const antlrcpp::BitSet &conflictingAlts,
                                         atn::ATNConfigSet *configs) override;

        void reportContextSensitivity(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex,
                                      size_t stopIndex, size_t prediction, atn::ATNConfigSet *configs) override;
    };

    class HuskyCompiler : public HuskyGrammarVisitor {

        antlrcpp::Any visitExpressionList(HuskyGrammar::ExpressionListContext *context) override;

        antlrcpp::Any visitMethodCall(HuskyGrammar::MethodCallContext *context) override;

        antlrcpp::Any visitToIntegerLiteral(HuskyGrammar::ToIntegerLiteralContext *context) override;

        antlrcpp::Any visitToFloatLiteral(HuskyGrammar::ToFloatLiteralContext *context) override;

        antlrcpp::Any visitToBoolLiteral(HuskyGrammar::ToBoolLiteralContext *context) override;

        antlrcpp::Any visitIntegerLiteral(HuskyGrammar::IntegerLiteralContext *context) override;

        antlrcpp::Any visitFloatLiteral(HuskyGrammar::FloatLiteralContext *context) override;

        antlrcpp::Any visitToUnary(HuskyGrammar::ToUnaryContext *context) override;

        antlrcpp::Any visitToCall(HuskyGrammar::ToCallContext *context) override;

        antlrcpp::Any visitToPrimary(HuskyGrammar::ToPrimaryContext *context) override;

        antlrcpp::Any visitToArrayRef(HuskyGrammar::ToArrayRefContext *context) override;

        antlrcpp::Any visitToBinary(HuskyGrammar::ToBinaryContext *context) override;

        antlrcpp::Any visitToAttrGet(HuskyGrammar::ToAttrGetContext *context) override;

        antlrcpp::Any visitToParen(HuskyGrammar::ToParenContext *context) override;

        antlrcpp::Any visitToLiteral(HuskyGrammar::ToLiteralContext *context) override;

        antlrcpp::Any visitToIdentifier(HuskyGrammar::ToIdentifierContext *context) override;

        template<class T>
        T *get(antlrcpp::Any &any) {
            return dynamic_cast<T *>(any.template as<ASTHolder>().ast);
        }
    };

}


#endif //HUSKY_LANG_HUSKYCOMPILER_H
