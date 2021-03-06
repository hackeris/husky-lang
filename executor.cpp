#include <iostream>
#include <functional>

#include "utils/File.h"
#include "lang/HuskyCompiler.h"

using namespace husky;

std::shared_ptr<CompileTime> buildCompileTime(const std::string &def) {
    auto compileTime = std::make_shared<DefaultCompileTime>();
    CompileTimeBuilder builder(compileTime);
    builder.compile(def);
    return compileTime;
}

int main(int argc, char *argv[]) {

    if (argc < 3) {
        std::cout << "usage: " << argv[0]
                  << " <def file> <root file>" << std::endl;
        return -1;
    }

    auto defPath = argv[1];
    auto exprPath = argv[2];

    auto defCode = read_file(defPath);
    auto exprCode = read_file(exprPath);

    auto compileTime = buildCompileTime(defCode);
    HuskyExprCompiler compiler(compileTime);
    ErrorListener errorListener;

    GraphBase *root = nullptr;
    try {
        root = compiler.compile(exprCode, &errorListener);

        if (!errorListener.hasError() && root != nullptr) {
            auto type = root->type();
            std::cout << "Inference type is: " << type->name() << std::endl;
        } else {
            std::cout << "Failed to inference type." << std::endl;
            for (auto &err: errorListener.getErrors()) {
                std::cout << "Syntax error at " << err.line << ":"
                          << err.pos << ", " << err.message << std::endl;
            }
        }
    } catch (CompileError &e) {
        std::cerr << e.what() << std::endl;
    }

    delete root;

    return 0;
}

