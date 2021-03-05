parser grammar HuskyDefine;

options { tokenVocab=HuskyLexer; }

statements
    : (statement)*
    ;

statement
    : defineStatement SEMI
    ;

args: (IDENTIFIER)*;

bop:  GT | LT | EQUAL | LE | GE | NOTEQUAL | AND | OR | ADD | SUB | MUL | DIV CARET ;
uop:  ADD | SUB | BANG;

defineStatement
    : TYPE name=IDENTIFIER                          #   TypeDef
    | FUNC (name=IDENTIFIER | bop | uop)
        LPAREN args  RPAREN
          COLON returnType=IDENTIFIER               #   FuncDef
    | FUNC typeName=IDENTIFIER
        DOT (member=IDENTIFIER | bop | uop)
          LPAREN args  RPAREN
            COLON returnType=IDENTIFIER             #   MemberFuncDef
    | VAL name=IDENTIFIER
        COLON typeName=IDENTIFIER                   #   ValueDef
    | VAL typeName=IDENTIFIER
        DOT fieldName=IDENTIFIER
            COLON typeName=IDENTIFIER               #   MemberValueDef
    ;
