#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isKeyword(const char *word) {

    const char *keywords[] = {
        "auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum", "extern",
        "float", "for", "goto", "if", "inline", "int", "long", "register", "restrict", "return", "short", "signed", 
        "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while", "_Alignas", 
        "_Alignof", "_Atomic", "_Bool", "_Complex", "_Generic", "_Imaginary", "_Noreturn", "_Static_assert", "_Thread_local"
    };
    
    int numKeywords = sizeof(keywords) / sizeof(keywords[0]);
    

    for (int i = 0; i < numKeywords; i++) {
        if (strcmp(word, keywords[i]) == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    char input[50];
    
    printf("Enter a word: ");
    scanf("%49s", input);
    
    if (isKeyword(input)) {
        printf("'%s' is a valid C keyword.\n", input);
    } else {
        printf("'%s' is not a C keyword.\n", input);
    }
    
    return 0;
}
