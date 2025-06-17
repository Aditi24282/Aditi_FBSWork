#include <stdio.h>

int main() {
    int n = 12345;  
    int lastDigit, firstDigit;
    int temp = n;

    lastDigit = temp % 10;  

    while(temp >= 10) {
        temp = temp / 10;   
    }

    firstDigit = temp;

    int sum = firstDigit + lastDigit;

    printf("Sum of first and last digit of %d is %d\n", n, sum);

    
}
