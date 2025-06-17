#include <stdio.h>

int main() {
    int n = 121;  
    int temp = n;
    int rev= 0, rem;

    while(n > 0) {
        rem = n % 10;
        rev= rev* 10 + rem;
        n = n / 10;
    }

    if(temp == rev)
        printf("%d is a Palindrome number\n", temp);
    else
        printf("%d is not a Palindrome number\n", temp);

    
}
