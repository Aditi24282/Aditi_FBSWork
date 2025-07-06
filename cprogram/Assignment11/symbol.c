#include <stdio.h>

void main() {
    char str[20];
    char symbol;

    printf("Enter String: ");
    scanf(" %[^\n]", str);  

    printf("\nEnter Symbol To Replace the spaces: ");
    scanf(" %c", &symbol);  

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = symbol;
        }
    }

    printf("Modified String: %s\n", str);
}
