#include <stdio.h>
int factorial(int num) {
    int fact = 1;
    int i = 1;
    while(i <= num) {
        fact = fact * i;
        i++;
    }
    return fact;
}

int main() {
    int n = 145;  
    int original = n;
    int sum = 0;
    int rem;

    while(n > 0) {
        rem = n % 10;
        sum = sum + factorial(rem);
        n = n / 10;
    }

    if(sum == original)
        printf("%d is a Strong number\n", original);
    else
        printf("%d is not a Strong number\n", original);

    
}
