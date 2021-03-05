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
#include "../grammar/HuskyDefineVisitor.h"

namespace husky {

    using namespace antlr4;

    class Type {
    public:
        explicit Type(std::string name)
                : _name(std::move(name)) {}

        std::string name() const {
            return _name;
        }

        bool defineField(const std::string &name, Type *type) {
            auto iter = _fields.find(name);
            if (iter != _fields.end()) {
                return false;
            }
            _fields.emplace(name, type);
            return true;
        }

        Type *findField(const std::string &name) {
            auto iter = _fields.find(name);
            if (iter != _fields.end()) {
                return iter->second;
            }
            return nullptr;
        }

        bool defineMember(const std::string &name, Type *returnType,
                          const std::vector<Type *> &argTypes) {
            auto symbol = name + "(" + joinNames(argTypes) + ")";
            return defineField(symbol, returnType);
        }

        Type *findMember(const std::string &name,
                         const std::vector<Type *> &argTypes) {
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
        std::map<std::string, Type *> _fields;
    };

    class AstBase {
    public:
        explicit AstBase(Type *type) : _type(type) {}

        virtual ~AstBase() = default;

        virtual Type *type() {
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

    class Expression : public AstBase {
    public:
        explicit Expression(Type *type) : AstBase(type) {}
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

        std::vector<Type *> argTypes() const {
            return typesOf(args);
        }

        static std::vector<Type *> typesOf(const ArgList &args) {
            std::vector<Type *> types;
            std::transform(args.begin(), args.end(),
                           std::back_inserter(types),
                           [](Expression *arg) -> auto { return arg->type(); });
            return types;
        }

        ~MethodCall() override {
            delete identifier;
            for (auto arg: args) {
                delete arg;
            }
        }

    public:
        Identifier *identifier;
        ArgList args;
    };

    class AttrGet : public Expression {
    public:
        AttrGet(Expression *expr, Identifier *identifier, Type *type)
                : expr(expr), identifier(identifier), Expression(type) {}

        AttrGet(Expression *expr, MethodCall *mc, Type *type)
                : expr(expr), methodCall(mc), Expression(type) {}

        ~AttrGet() override {
            delete expr;
            delete identifier;
            delete methodCall;
        }

    public:
        Expression *expr{};
        //  either of
        Identifier *identifier{nullptr};
        MethodCall *methodCall{nullptr};
    };

    class ArrayRef : public Expression {
    public:
        ArrayRef(Expression *array, Expression *index, Type *type)
                : array(array), index(index), Expression(type) {}

        ~ArrayRef() override {
            delete array;
            delete index;
        }

    public:
        Expression *array{};
        Expression *index{};
    };

    class ArraySlice : public Expression {
    public:
        ArraySlice(Expression *array, Expression *begin, Expression *end, Type *type)
                : array(array), begin(begin), end(end), Expression(type) {}

        ~ArraySlice() override {
            delete array;
            delete begin;
            delete end;
        }

    public:
        Expression *array{};
        Expression *begin{};
        Expression *end{};
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

        ~UnaryExpr() override {
            delete expr;
        }
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

        ~BinaryExpr() override {
            delete left;
            delete right;
        }
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
    private:
        std::vector<int> values;
        std::vector<bool> masks;
    };

    class FloatVector : public Vector<float> {
    private:
        std::vector<float> values;
        std::vector<bool> masks;
    };

    class BoolVector : public Vector<bool> {
    private:
        std::vector<bool> values;
        std::vector<bool> masks;
    };

    class compile_error : public std::exception {
    public:
	compile_error(ParserRuleContext* context, const std::string& message) {
	    line = context->start->getLine();
	    pos = context->start->getCharPositionInLine();
            this->message = "error at line " + std::to_string(line) 
		    + ":" + std::to_string(pos) + ": " + message;
	}

	const char* what() const throw() { return message.c_str(); }
    private:
	int line;
	int pos;
	std::string message;
    };

    class CompileTime {
    public:
        virtual Type *findIdentifier(const std::string &name) = 0;

        virtual Type *findFunction(const std::string &name,
                                   const std::vector<Type *> &argTypes) = 0;

        virtual bool registerType(const std::string &name) = 0;

        virtual Type *findType(const std::string &name) = 0;

        virtual bool registerSymbol(const std::string &name, Type *type) = 0;

        virtual bool registerFunction(const std::string &name,
                                      Type *returnType, const std::vector<Type *> &argTypes) = 0;
    };

    class DefaultCompileTime : public CompileTime {
    public:

        Type *findIdentifier(const std::string &name) override {
            auto iter = _symbols.find(name);
            if (iter != _symbols.end()) {
                return iter->second;
            }
            return nullptr;
        }

        Type *findFunction(const std::string &name,
                           const std::vector<Type *> &argTypes) override {

            std::string symbol = name + "(" + Type::joinNames(argTypes) + ")";
            return findIdentifier(symbol);
        }

        bool registerSymbol(const std::string &name, Type *type) override {

            auto iter = _symbols.find(name);
            if (iter != _symbols.end()) {
                return false;
            }

            _symbols.emplace(name, type);
            return true;
        }

        bool registerFunction(const std::string &name,
                              Type *returnType, const std::vector<Type *> &argTypes) override {

            std::string symbol = name + "(" + Type::joinNames(argTypes) + ")";
            return registerSymbol(symbol, returnType);
        }

        bool registerType(const std::string &name) override {
            auto iter = _types.find(name);
            if (iter != _types.end()) {
                return false;
            }

            _types.emplace(name, new Type(name));
            return true;
        }

        Type *findType(const std::string &name) override {
            auto iter = _types.find(name);
            if (iter != _types.end()) {
                return iter->second;
            }
            return nullptr;
        }

    public:
        ~DefaultCompileTime() {
            for (auto[name, type] : _types) {
                delete type;
                type = nullptr;
            }
        }

    private:
        std::map<std::string, Type *> _types;
        std::map<std::string, Type *> _symbols;
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

    class CompileTimeBuilder : public HuskyDefineVisitor {
    public:
        CompileTimeBuilder(std::shared_ptr<CompileTime> compileTime);

        antlrcpp::Any visitStatements(HuskyDefine::StatementsContext *context) override;

        antlrcpp::Any visitStatement(HuskyDefine::StatementContext *context) override;

        antlrcpp::Any visitArgs(HuskyDefine::ArgsContext *context) override;

        antlrcpp::Any visitBop(HuskyDefine::BopContext *context) override;

        antlrcpp::Any visitUop(HuskyDefine::UopContext *context) override;

        antlrcpp::Any visitDefineStatement(HuskyDefine::DefineStatementContext *context) override;

        antlrcpp::Any visitTypeDefine(HuskyDefine::TypeDefineContext *context) override;

        antlrcpp::Any visitFuncDefine(HuskyDefine::FuncDefineContext *context) override;

        antlrcpp::Any visitMemberFuncDefine(HuskyDefine::MemberFuncDefineContext *context) override;

        antlrcpp::Any visitValueDefine(HuskyDefine::ValueDefineContext *context) override;

        antlrcpp::Any visitMemberValueDefine(HuskyDefine::MemberValueDefineContext *context) override;

        void load(const std::string &code);

    private:
        std::shared_ptr<CompileTime> _compileTime;
    };

    class HuskyCompiler : public HuskyGrammarVisitor {
    public:

        explicit HuskyCompiler(std::shared_ptr<CompileTime> compileTime);

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

        antlrcpp::Any visitToArraySlice(HuskyGrammar::ToArraySliceContext *context) override;

        antlrcpp::Any visitToBinary(HuskyGrammar::ToBinaryContext *context) override;

        antlrcpp::Any visitToAttrGet(HuskyGrammar::ToAttrGetContext *context) override;

        antlrcpp::Any visitToParen(HuskyGrammar::ToParenContext *context) override;

        antlrcpp::Any visitToLiteral(HuskyGrammar::ToLiteralContext *context) override;

        antlrcpp::Any visitToIdentifier(HuskyGrammar::ToIdentifierContext *context) override;

        AstBase *compile(const std::string &code, ANTLRErrorListener *errorListener);

        template<class U>
        U *get(const antlrcpp::Any &any) {
            return dynamic_cast<U *>(any.template as<AstBase *>());
        }

        AstBase *generify(AstBase *ast) const {
            return ast;
        }

    private:
        std::shared_ptr<CompileTime> _compileTime;
    };

}


#endif //HUSKY_LANG_HUSKYCOMPILER_H
