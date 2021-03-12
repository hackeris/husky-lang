parser grammar HuskyDefine;

options { tokenVocab=HuskyLexer; }

defineStatements
    : (defineStatement)* EOF
    ;

singleArg
    : (argName=IDENTIFIER COLON argType=IDENTIFIER);

args
    : LPAREN (singleArg (COMMA singleArg)*)? RPAREN;

bop:  GT | LT | EQUAL | LE | GE | NOTEQUAL | AND | OR | ADD | SUB | MUL | DIV CARET ;

defineStatement
    : typeDefine
    | funcDefine
    | memberFuncDefine
    | valueDefine
    | memberValueDefine
    ;

typeDefine
    : TYPE name=IDENTIFIER
    ;

funcDefine
    : FUNC (name=IDENTIFIER | bop | bang=BANG)
        args COLON (returnType=IDENTIFIER)
    ;

memberFuncDefine
    : FUNC typeName=IDENTIFIER
          DOT (member=IDENTIFIER | bop | bang=BANG | ARRAY_INDEX | ARRAY_SLICE)
            args COLON returnType=IDENTIFIER
    ;

valueDefine
    : VAL name=IDENTIFIER
              COLON typeName=IDENTIFIER
    ;

memberValueDefine
    : VAL typeName=IDENTIFIER
              DOT fieldName=IDENTIFIER
                  COLON typeName=IDENTIFIER
    ;
