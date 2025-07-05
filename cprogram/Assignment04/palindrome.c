#include <stdio.h>

int main() {
    int num, rev = 0, digit, temp;
    int i, j;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    
    for (i = 0; i < 1; i++) {
        
        for (j = temp; j > 0; j = j / 10) {
            digit = j % 10;
            rev = rev * 10 + digit;
        }
    }
+
    if (rev == num)
        printf("%d is a Palindrome number.\n", num);
    else
        printf("%d is Not a Palindrome number.\n", num);

    return 0;
}
