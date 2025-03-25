#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    printf("Enter a string to tokenize: ");
    fgets(input, sizeof(input), stdin);

    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }
    
    char *token = strtok(input, " ,.-");
    
    printf("Tokens:\n");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ,.-");
    }
    
    return 0;
}
