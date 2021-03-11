parser grammar HuskyDefine;

options { tokenVocab=HuskyLexer; }

defineStatements
    : (defineStatement)* EOF
    ;

args: singleArg (COMMA singleArg)*;

singleArg: (argName=IDENTIFIER COLON argType=IDENTIFIER);

bop:  GT | LT | EQUAL | LE | GE | NOTEQUAL | AND | OR | ADD | SUB | MUL | DIV CARET ;
uop:  ADD | SUB | BANG;

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
    : FUNC (name=IDENTIFIER | bop | uop)
              (LPAREN args? RPAREN)
                COLON (returnType=IDENTIFIER)
    ;

memberFuncDefine
    : FUNC typeName=IDENTIFIER
              DOT (member=IDENTIFIER | bop | uop | ARRAY_INDEX | ARRAY_SLICE)
                LPAREN args? RPAREN
                  COLON returnType=IDENTIFIER
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
