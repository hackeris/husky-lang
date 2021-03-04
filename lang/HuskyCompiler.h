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

    class Type {
    public:
        Type(std::string name)
                : _name(std::move(name)) {}

        const std::string &name() const {
            return _name;
        }

	bool defineField(const std::string& name, Type* type) {
	    auto iter = _fields.find(name);
	    if(iter != _fields.end()) {
		return false;
	    }
	    _fields.emplace(name, type);
	    return true;
	}

	Type* findField(const std::string& name) {
	    auto iter = _fields.find(name);
	    if(iter != _fields.end()) {
		return iter->second;
	    }
	    return nullptr;
	}

	bool defineMemberFunction(const std::string& name, Type* returnType,
			const std::vector<Type*>& argTypes) {
	    auto symbol = name + "(" + joinNames(argTypes) + ")";
	    return defineField(symbol, returnType);
	}

	Type* findMemberFunction(const std::string& name,
			const std::vector<Type*>& argTypes) {
	    auto symbol = name + "(" + joinNames(argTypes) + ")";
	    return findField(symbol);
	}

        static std::string joinNames(const std::vector<Type *> &types) {
            std::string joined;
            for (int i = 0; i < types.size(); i += 1) {
                joined += types[i]->name();
                if (i < types.size() - 1) {
                    joined += ",";
                }
            }
            return joined;
        }

        ~Type() = default;

    private:
        std::string _name;
	std::map<std::string, Type*> _fields;
    };

    class HGraph {
    public:
        explicit HGraph(Type *type) : _type(type) {}

        virtual ~HGraph() = default;

	virtual Type* type() {
	    return _type;
	}

    public:
        template<class T>
        bool is() const {
            return dynamic_cast<const T *>(this) != nullptr;
        }

        template<class T>
        const T *as() const {
            return dynamic_cast<const T *>(this);
        }

        template<class T>
        T *as() {
            return dynamic_cast<T *>(this);
        }

    private:
        Type *_type;
    };

    class Expression : public HGraph {
    public:
        explicit Expression(Type *type) : HGraph(type) {}
    };

    class Primary : public Expression {
    public:
        explicit Primary(Type *type) : Expression(type) {}
    };

    class Identifier : public Primary {
    public:
        explicit Identifier(std::string name, Type *type)
                : name(std::move(name)), Primary(type) {}

    public:
        std::string name;
    };

    class Literal : public Primary {
    public:
        explicit Literal(Type *type) : Primary(type) {}
    };

    using ArgList = std::vector<Expression *>;

    class MethodCall : public Expression {
    public:
        MethodCall(Identifier *identifier, ArgList args, Type *type) :
                identifier(identifier), args(std::move(args)), Expression(type) {}

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
        AttrGet(Expression *expr, Identifier *identifier, Type *type)
                : expr(expr), identifier(identifier), Expression(type) {}

        AttrGet(Expression *expr, MethodCall *mc, Type *type)
                : expr(expr), methodCall(mc), Expression(type) {}
    };

    class ArrayRef : public Expression {
    public:
        ArrayRef(Expression *array, Expression *index, Type *type)
                : array(array), index(index), Expression(type) {}

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
        UnaryExpr(UnaryExpr::Operation op, Expression *exp, Type *type)
                : op(op), expr(exp), Expression(type) {}
    };

    std::string to_string(UnaryExpr::Operation op);

    class BinaryExpr : public Expression {
    public:
        enum Operation {
            Power, Mul, Div, Add, Sub, Le, Ge, Lt, Gt, Equal, NotEqual, And, Or
        };
        Operation op;
        Expression *left{};
        Expression *right{};
    public:
        BinaryExpr(BinaryExpr::Operation op, Expression *left, Expression *right, Type *type)
                : op(op), left(left), right(right), Expression(type) {}
    };

    std::string to_string(BinaryExpr::Operation op);

    class IntegerLiteral : public Literal {
    public:
        explicit IntegerLiteral(int v, Type *type)
                : value(v), Literal(type) {}

    public:
        int value{};
    };

    class FloatLiteral : public Literal {
    public:
        explicit FloatLiteral(float f, Type *type)
                : value(f), Literal(type) {}

    public:
        float value{};
    };

    class BoolLiteral : public Literal {
    public:
        explicit BoolLiteral(bool b, Type *type)
                : value(b), Literal(type) {}

    public:
        bool value{};
    };

    class Value {
    public:
        explicit Value(Type *type) : _type(type) {}

        virtual Type *type() const { return _type; }

        virtual ~Value() = default;

    private:
        Type *_type;
    };

    template<typename T>
    class TypedValue : public Value {
    public:
        TypedValue(T value, Type *type)
                : _value(value), Value(type) {}

    private:
        T _value;
    };

    class IntegerValue : public TypedValue<int> {
    };

    class FloatValue : public TypedValue<float> {
    };

    class BoolValue : public TypedValue<bool> {
    };

    template<typename V>
    class Vector : public TypedValue<std::vector<V>> {
    };

    class IntegerVector : public Vector<int> {
    };

    class FloatVector : public Vector<float> {
    };

    class BoolVector : public Vector<bool> {
    };


class CompileTime {
public:
    virtual Type *findIdentifier(const std::string &name) = 0;

    virtual Type *findFunction(const std::string &name,
                               const std::vector<Type *>& argTypes) = 0;

    virtual bool registerType(const std::string &name) = 0;

    virtual Type *findType(const std::string &name) = 0;

    virtual bool registerSymbol(const std::string &name, Type *type) = 0;

    virtual bool registerFunction(const std::string &name,
                                  Type *returnType, const std::vector<Type *>& argTypes) = 0;
};

    class ErrorListener : public ANTLRErrorListener {

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
    public:

	HuskyCompiler(CompileTime* compileTime);

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

        template<class U>
        U *get(const antlrcpp::Any &any) {
            return dynamic_cast<U *>(any.template as<HGraph *>());
        }

        HGraph *generify(HGraph *ast) const {
            return ast;
        }

    private:
	CompileTime *_compileTime;
    };

}


#endif //HUSKY_LANG_HUSKYCOMPILER_H
