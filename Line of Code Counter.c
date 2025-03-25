#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int lineCount = 0;
    
    printf("Enter the filename: ");
    scanf("%99s", filename);
    
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }
    
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lineCount++;
        }
    }
    
    fclose(file);
    printf("Number of lines: %d\n", lineCount);
    
    return 0;
}
