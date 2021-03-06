cmake_minimum_required(VERSION 3.17)
project(husky_lang)

set(CMAKE_CXX_STANDARD 17)

set(common_files
        lang/HuskyCompiler.cpp
        lang/HuskyCompiler.h
        grammar/HuskyExpr.cpp
        grammar/HuskyExpr.h
        grammar/HuskyExprBaseListener.cpp
        grammar/HuskyExprBaseListener.h
        grammar/HuskyExprBaseVisitor.cpp
        grammar/HuskyExprBaseVisitor.h
        grammar/HuskyExprListener.cpp
        grammar/HuskyExprListener.h
        grammar/HuskyExprVisitor.cpp
        grammar/HuskyExprVisitor.h
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
        grammar/HuskyLexer.h
        utils/File.h)

add_executable(husky_lang main.cpp ${common_files})
add_executable(husky_compiler main.cpp ${common_files})
add_executable(husky_executor executor.cpp ${common_files})

target_include_directories(husky_lang PUBLIC
        /usr/local/include/antlr4-runtime)
target_link_directories(husky_lang PUBLIC
        /usr/local/lib)
target_link_libraries(husky_lang
        antlr4-runtime)

target_include_directories(husky_compiler PUBLIC
        /usr/local/include/antlr4-runtime)
target_link_directories(husky_compiler PUBLIC
        /usr/local/lib)
target_link_libraries(husky_compiler
        antlr4-runtime)

target_include_directories(husky_executor PUBLIC
        /usr/local/include/antlr4-runtime)
target_link_directories(husky_executor PUBLIC
        /usr/local/lib)
target_link_libraries(husky_executor
        antlr4-runtime)