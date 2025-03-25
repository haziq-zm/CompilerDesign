#include <stdio.h>
#include <stdbool.h>

bool isValidIdentifier(const char *str) {
    if (str[0] == '\0') return false;
    

    if (!((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z') || str[0] == '_')) {
        return false;
    }
    

    for (int i = 1; str[i] != '\0'; i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') ||
              (str[i] >= '0' && str[i] <= '9') || str[i] == '_')) {
            return false;
        }
    }
    return true;
}

int main() {
    char input[50];
    
    printf("Enter an identifier: ");
    scanf("%49s", input);
    
    if (isValidIdentifier(input)) {
        printf("'%s' is a valid identifier.\n", input);
    } else {
        printf("'%s' is not a valid identifier.\n", input);
    }
    
    return 0;
}
