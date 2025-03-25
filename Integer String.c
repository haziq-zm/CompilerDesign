#include <stdio.h>
#include <stdbool.h>


bool isIntegerConstant(const char *str) {
    if (str[0] == '\0') return false;
    
    int i = 0;

    if (str[i] == '+' || str[i] == '-') {
        i++;
    }

    for (; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return false;
        }
    }
    return (i > 0);
}

int main() {
    char input[50];
    
    printf("Enter a number: ");
    scanf("%49s", input);
    
    if (isIntegerConstant(input)) {
        printf("'%s' is a valid integer constant.\n", input);
    } else {
        printf("'%s' is not a valid integer constant.\n", input);
    }
    
    return 0;
}
