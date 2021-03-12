//
// Created by rainm on 2021/3/2.
//

#ifndef HUSKY_LANG_HUSKYCOMPILER_H
#define HUSKY_LANG_HUSKYCOMPILER_H

#include <memory>
#include <utility>
#include <vector>
#include <functional>

#include "antlr4-runtime.h"
#include "../grammar/HuskyDefineVisitor.h"
#include "../grammar/HuskyExprVisitor.h"

namespace husky {

    using namespace antlr4;

    class Type {
    public:
        explicit Type(std::string name)
                : _name(std::move(name)) {}

        [[nodiscard]]
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

    class GraphBase {
    public:
        explicit GraphBase(Type *type) : _type(type) {}

        virtual ~GraphBase() = default;

        virtual Type *type() {
            return _type;
        }

    public:
        template<class T>
        [[nodiscard]]
        bool is() const {
            return dynamic_cast<const T *>(this) != nullptr;
        }

        template<class T>
        [[nodiscard]]
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

    class Expression : public GraphBase {
    public:
        explicit Expression(Type *type) : GraphBase(type) {}
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

        [[nodiscard]]
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

    class AssignStatement : public GraphBase {
    public:
        AssignStatement(std::string identifier, Expression *right)
                : identifier(std::move(identifier)), right(right),
                  GraphBase(right->type()) {}

        ~AssignStatement() override {
            delete right;
        }

    public:
        std::string identifier;
        Expression *right;
    };

    class ExprRoot : public GraphBase {
    public:
        explicit ExprRoot(Expression *expression)
                : expression(expression), GraphBase(expression->type()) {}

        void merge(AssignStatement *assign) {
            assigns.insert(assigns.begin(), assign);
        }

        ~ExprRoot() override {
            for (auto assign: assigns) {
                delete assign;
            }
            delete expression;
        }

    public:
        std::vector<AssignStatement *> assigns;
        Expression *expression;
    };

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

    class Function;

    class Value {
    public:
        explicit Value(Type *type) : _type(type) {}

        [[nodiscard]]
        virtual Type *type() const { return _type; }

        virtual ~Value() = default;

    private:
        Type *_type;
    };

    class Function {
    public:
        virtual Type *returnType() = 0;

        virtual Value *apply(const std::vector<Value *> &args) = 0;
    };

    template<typename T>
    class TypedValue : public Value {
    public:
        TypedValue(T value, Type *type)
                : _value(value), Value(type) {}

    private:
        T _value;
    };

    using IntegerValue = TypedValue<int>;
    using FloatValue = TypedValue<float>;
    using BoolValue = TypedValue<bool>;

    template<typename V>
    class Vector : public TypedValue<std::vector<V>> {
    private:
        std::vector<int> values;
        std::vector<bool> masks;
    };

    using IntegerVector = Vector<int>;
    using FloatVector = Vector<float>;
    using BoolVector = Vector<bool>;

    class CompileError : public std::exception {
    public:
        CompileError(ParserRuleContext *context, const std::string &message) {
            line = context->start->getLine();
            pos = context->start->getCharPositionInLine();
            this->message = "error at line " + std::to_string(line)
                            + ":" + std::to_string(pos) + ": " + message;
        }

        [[nodiscard]]
        const char *what() const noexcept override { return message.c_str(); }

    private:
        int line;
        int pos;
        std::string message;
    };

    class NodeTransformer {
    public:
        virtual GraphBase *apply(GraphBase *node) = 0;

        virtual Type *returnType() = 0;

        virtual ~NodeTransformer() = default;
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

    class ExprErrorListener : public ANTLRErrorListener {
    public:
        struct SyntaxError {
        public:
            int line;
            int pos;
            std::string message;
        };

        void syntaxError(Recognizer *recognizer, Token *offendingSymbol, size_t line,
                         size_t charPositionInLine, const std::string &msg, std::exception_ptr e) override;

        void reportAmbiguity(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex, size_t stopIndex, bool exact,
                             const antlrcpp::BitSet &ambigAlts, atn::ATNConfigSet *configs) override;

        void reportAttemptingFullContext(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex,
                                         size_t stopIndex, const antlrcpp::BitSet &conflictingAlts,
                                         atn::ATNConfigSet *configs) override;

        void reportContextSensitivity(Parser *recognizer, const dfa::DFA &dfa, size_t startIndex,
                                      size_t stopIndex, size_t prediction, atn::ATNConfigSet *configs) override;

        [[nodiscard]]
        bool hasError() const;

        [[nodiscard]]
        const std::vector<SyntaxError> &getErrors() const;

    private:
        std::vector<SyntaxError> errors;
    };

    class CompileTimeBuilder : public HuskyDefineVisitor {
    public:
        explicit CompileTimeBuilder(std::shared_ptr<CompileTime> compileTime);

        antlrcpp::Any visitDefineStatements(HuskyDefine::DefineStatementsContext *context) override;

        antlrcpp::Any visitArgs(HuskyDefine::ArgsContext *context) override;

        antlrcpp::Any visitSingleArg(HuskyDefine::SingleArgContext *context) override;

        antlrcpp::Any visitBop(HuskyDefine::BopContext *context) override;

        antlrcpp::Any visitUop(HuskyDefine::UopContext *context) override;

        antlrcpp::Any visitDefineStatement(HuskyDefine::DefineStatementContext *context) override;

        antlrcpp::Any visitTypeDefine(HuskyDefine::TypeDefineContext *context) override;

        antlrcpp::Any visitFuncDefine(HuskyDefine::FuncDefineContext *context) override;

        antlrcpp::Any visitMemberFuncDefine(HuskyDefine::MemberFuncDefineContext *context) override;

        antlrcpp::Any visitValueDefine(HuskyDefine::ValueDefineContext *context) override;

        antlrcpp::Any visitMemberValueDefine(HuskyDefine::MemberValueDefineContext *context) override;

        void compile(const std::string &code);

    private:
        std::shared_ptr<CompileTime> _compileTime;
    };

    template<typename T>
    class HuskyExprGraphVisitor {
    public:
        virtual T visitRoot(ExprRoot *root) = 0;

        virtual T visitLiteral(Literal *literal) = 0;

        virtual T visitAssign(AssignStatement *assign) = 0;

        virtual T visitBinaryExpression(BinaryExpr *expr) = 0;

        virtual T visitUnaryExpression(UnaryExpr *expr) = 0;

        virtual T visitMethodCall(MethodCall *expr) = 0;

        virtual T visitAttrGet(AttrGet *expr) = 0;

        virtual T visitArrayRef(ArrayRef *expr) = 0;

        virtual T visitArraySlice(ArraySlice *expr) = 0;

        virtual T visitIdentifier(Identifier *identifier) = 0;

        T visit(GraphBase *graph) {
            if (graph->template is<ExprRoot>()) {
                return visitRoot(graph->template is<ExprRoot>());
            } else if (graph->template is<AssignStatement>()) {
                return visitAssign(graph->template as<AssignStatement>());
            } else if (graph->template is<Literal>()) {
                return visitLiteral(graph->template as<Literal>());
            } else if (graph->template is<BinaryExpr>()) {
                return visitBinaryExpression(graph->template as<BinaryExpr>());
            } else if (graph->template is<UnaryExpr>()) {
                return visitUnaryExpression(graph->template as<UnaryExpr>());
            } else if (graph->template is<MethodCall>()) {
                return visitMethodCall(graph->template as<MethodCall>());
            } else if (graph->template is<AttrGet>()) {
                return visitAttrGet(graph->template as<AttrGet>());
            } else if (graph->template is<ArrayRef>()) {
                return visitArrayRef(graph->template as<ArrayRef>());
            } else if (graph->template is<ArraySlice>()) {
                return visitArraySlice(graph->template as<ArraySlice>());
            } else if (graph->template is<Identifier>()) {
                return visitIdentifier(graph->template as<Identifier>());
            }
        }
    };

    class ExprRuntime {
    public:
        virtual Type *getType(const std::string &name) = 0;

        virtual Value *getValue(const std::string &name) = 0;

        virtual Value *getValue(Value *value, const std::string &name) = 0;

        virtual Function *getFunction(const std::string &name, const std::vector<Type *> &args) = 0;

        virtual Function *getFunction(Type *type, const std::string &name, const std::vector<Type *> &args) = 0;
    };

    class HuskyExprCompiler : public HuskyExprVisitor {
    public:
        explicit HuskyExprCompiler(std::shared_ptr<CompileTime> compileTime);

        antlrcpp::Any visitExtractAssign(HuskyExpr::ExtractAssignContext *context) override;

        antlrcpp::Any visitAssign(HuskyExpr::AssignContext *context) override;

        antlrcpp::Any visitToExpression(HuskyExpr::ToExpressionContext *context) override;

        antlrcpp::Any visitExpressionList(HuskyExpr::ExpressionListContext *context) override;

        antlrcpp::Any visitMethodCall(HuskyExpr::MethodCallContext *context) override;

        antlrcpp::Any visitToIntegerLiteral(HuskyExpr::ToIntegerLiteralContext *context) override;

        antlrcpp::Any visitToFloatLiteral(HuskyExpr::ToFloatLiteralContext *context) override;

        antlrcpp::Any visitToBoolLiteral(HuskyExpr::ToBoolLiteralContext *context) override;

        antlrcpp::Any visitIntegerLiteral(HuskyExpr::IntegerLiteralContext *context) override;

        antlrcpp::Any visitFloatLiteral(HuskyExpr::FloatLiteralContext *context) override;

        antlrcpp::Any visitToArraySlice(HuskyExpr::ToArraySliceContext *context) override;

        antlrcpp::Any visitToUnary(HuskyExpr::ToUnaryContext *context) override;

        antlrcpp::Any visitToCall(HuskyExpr::ToCallContext *context) override;

        antlrcpp::Any visitToArrayRef(HuskyExpr::ToArrayRefContext *context) override;

        antlrcpp::Any visitToPrimary(HuskyExpr::ToPrimaryContext *context) override;

        antlrcpp::Any visitToBinary(HuskyExpr::ToBinaryContext *context) override;

        antlrcpp::Any visitToAttrGet(HuskyExpr::ToAttrGetContext *context) override;

        antlrcpp::Any visitToIdentifier(HuskyExpr::ToIdentifierContext *context) override;

        antlrcpp::Any visitToParen(HuskyExpr::ToParenContext *context) override;

        antlrcpp::Any visitToLiteral(HuskyExpr::ToLiteralContext *context) override;

        GraphBase *compile(const std::string &code, ExprErrorListener *errorListener);

        template<class U>
        U *get(const antlrcpp::Any &any) {
            return dynamic_cast<U *>(any.template as<GraphBase *>());
        }

        inline
        static GraphBase *generify(GraphBase *ast) {
            return ast;
        }

    private:
        std::shared_ptr<CompileTime> _compileTime;
    };

}


#endif //HUSKY_LANG_HUSKYCOMPILER_H
