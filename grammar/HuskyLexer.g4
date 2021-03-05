lexer grammar HuskyLexer;


DECIMAL_LITERAL:    ('0' | [1-9] (Digits? | '_'+ Digits)) ;

FLOAT_LITERAL:      (Digits '.' Digits? | '.' Digits) ;

WS:                 [ \t\r\n\u000C]+ -> channel(HIDDEN);
LINE_COMMENT:       '//' ~[\r\n]*    -> channel(HIDDEN);

TYPE:               'type';
FUNC:               'func';
VAL:                'val';

BOOL_LITERAL:       'true'
            |       'false'
            ;

// Identifiers

IDENTIFIER:         Letter LetterOrDigit*;

// Fragment rules

fragment Digits
    : [0-9] ([0-9])?
    ;
fragment LetterOrDigit
    : Letter
    | [0-9]
    ;
fragment Letter
    : [a-zA-Z$_] // these are the "java letters" below 0x7F
    ;

// Separators
LPAREN:             '(';
RPAREN:             ')';
LBRACK:             '[';
RBRACK:             ']';
SEMI:               ';';
COMMA:              ',';
DOT:                '.';
// Operators
GT:                 '>';
LT:                 '<';
BANG:               '!';
EQUAL:              '=';
LE:                 '<=';
GE:                 '>=';
NOTEQUAL:           '!=';
AND:                '&';
OR:                 '|';
ADD:                '+';
SUB:                '-';
MUL:                '*';
DIV:                '/';
CARET:              '^';
COLON:              ':';
