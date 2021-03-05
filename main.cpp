#include <iostream>
#include <functional>

#include "lang/HuskyCompiler.h"

using namespace husky;

std::string read_file(const std::string &filename) {
    std::ifstream infile(filename, std::ios::in | std::ios::binary);
    if (infile.is_open()) {
        return (std::string((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>()));
    }
    return "";
}

std::shared_ptr<CompileTime> buildCompileTime(const std::string &def) {

    auto compileTime = std::make_shared<DefaultCompileTime>();

    CompileTimeBuilder builder(compileTime);

    builder.compile(def);

    return compileTime;
}

int main(int argc, char *argv[]) {

    if (argc < 3) {
        std::cout << "usage: " << argv[0]
                  << " <def file> <expr file" << std::endl;
        return -1;
    }

    auto defPath = argv[1];
    auto exprPath = argv[2];

    auto defCode = read_file(defPath);
    auto exprCode = read_file(exprPath);

    auto compileTime = buildCompileTime(defCode);
    HuskyCompiler compiler(compileTime);
    ErrorListener errorListener;

    AstBase *expr = nullptr;
    try {
        expr = compiler.compile(exprCode, &errorListener);
        auto type = expr->type();
        if (type != nullptr && !errorListener.hasError()) {
            std::cout << "Inferenced type is: " << type->name() << std::endl;
        } else {
            std::cout << "Failed to inference type." << std::endl;
            for (auto &err: errorListener.getErrors()) {
                std::cout << "Syntax error at " << err.line << ":"
                          << err.pos << ", " << err.message << std::endl;
            }
        }
    } catch (compile_error &e) {
        std::cerr << e.what() << std::endl;
    }

    delete expr;

    return 0;
}

