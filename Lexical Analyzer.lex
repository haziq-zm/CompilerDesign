%{
#include <stdio.h>
%}

%%
[a-zA-Z_][a-zA-Z0-9_]*    { printf("Identifier: %s\n", yytext); }
[0-9]+                     { printf("Integer: %s\n", yytext); }
"+"|"-"|"*"|"/"            { printf("Operator: %s\n", yytext); }
";"|","|"."               { printf("Punctuation: %s\n", yytext); }
[ \t\n]+                    ;
.                           { printf("Unknown: %s\n", yytext); }
%%

int main() {
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}

