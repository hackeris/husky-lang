parser grammar HuskyExpr;

options { tokenVocab=HuskyLexer; }


expressionList
    : expression (COMMA expression)*
    ;

methodCall
    : IDENTIFIER LPAREN expressionList? RPAREN
    ;

literal
    : integerLiteral                         # ToIntegerLiteral
    | floatLiteral                           # ToFloatLiteral
    | BOOL_LITERAL                           # ToBoolLiteral
    ;

integerLiteral
    : DECIMAL_LITERAL
    ;

floatLiteral
    : FLOAT_LITERAL
    ;

expression
    : primary                                   # ToPrimary
    | expression dot=DOT
      ( IDENTIFIER | methodCall )               # ToAttrGet
    | expression LBRACK expression RBRACK       # ToArrayRef
    | expression
      LBRACK begin=expression
      COLON end=expression RBRACK                   # ToArraySlice
    | methodCall                                # ToCall
    | prefix=(ADD|SUB) expression               # ToUnary
    | prefix=BANG expression                    # ToUnary
    | expression bop=CARET expression           # ToBinary
    | expression bop=(MUL|DIV) expression       # ToBinary
    | expression bop=(ADD|SUB) expression       # ToBinary
    | expression bop=(LE | GE | GT | LT) expression # ToBinary
    | expression bop=(EQUAL | NOTEQUAL) expression  # ToBinary
    | expression bop=AND expression                 # ToBinary
    | expression bop=OR expression                  # ToBinary
    ;

primary
    : IDENTIFIER                            #  ToIdentifier
    | LPAREN expression RPAREN              #  ToParen
    | literal                               #  ToLiteral
    ;
