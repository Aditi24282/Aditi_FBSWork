#include <stdio.h>

void main() {
    int n, i, j;
    printf("Enter the value of n:");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
