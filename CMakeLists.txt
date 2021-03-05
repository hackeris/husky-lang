cmake_minimum_required(VERSION 3.17)
project(husky_lang)

set(CMAKE_CXX_STANDARD 17)

add_executable(husky_lang main.cpp
        lang/HuskyCompiler.cpp
        lang/HuskyCompiler.h
        grammar/HuskyGrammar.cpp
        grammar/HuskyGrammar.h
        grammar/HuskyGrammarBaseListener.cpp
        grammar/HuskyGrammarBaseListener.h
        grammar/HuskyGrammarBaseVisitor.cpp
        grammar/HuskyGrammarBaseVisitor.h
        grammar/HuskyGrammarListener.cpp
        grammar/HuskyGrammarListener.h
        grammar/HuskyGrammarVisitor.cpp
        grammar/HuskyGrammarVisitor.h
        grammar/HuskyDefine.cpp
        grammar/HuskyDefine.h
        grammar/HuskyDefineBaseListener.cpp
        grammar/HuskyDefineBaseListener.h
        grammar/HuskyDefineBaseVisitor.cpp
        grammar/HuskyDefineBaseVisitor.h
        grammar/HuskyDefineListener.cpp
        grammar/HuskyDefineListener.h
        grammar/HuskyDefineVisitor.cpp
        grammar/HuskyDefineVisitor.h
        grammar/HuskyLexer.cpp
        grammar/HuskyLexer.h)

target_include_directories(husky_lang PUBLIC
        /usr/local/include/antlr4-runtime)

target_link_directories(husky_lang PUBLIC
        /usr/local/lib)

target_link_libraries(husky_lang
        antlr4-runtime)