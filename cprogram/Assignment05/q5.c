#include <stdio.h>

int main() {
    int n, i, j, space;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        // Print stars
        for (j = 0; j < n - i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
