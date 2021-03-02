#include <iostream>
#include <string>

#include "antlr4-runtime.h"

#include "grammar/HuskyLexer.h"
#include "grammar/HuskyGrammar.h"

#include "lang/HuskyCompiler.h"


int main() {

    using namespace antlr4;
    using namespace antlr4::tree;
    using namespace antlrcpp;

    using namespace husky;

    std::string formula = "1 + 2 + f(4, 5)";

    std::istringstream stream(formula);

    ANTLRInputStream input(stream);
    HuskyLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    HuskyGrammar parser(&tokens);

    HuskyErrorListener errorListener;
    parser.addErrorListener(&errorListener);

    ParseTree *tree = parser.expression();

    HuskyCompiler compiler;
    Any visited = compiler.visit(tree);

    auto expr = visited.as<ASTHolder>().get<Expression>();

    return 0;
}
