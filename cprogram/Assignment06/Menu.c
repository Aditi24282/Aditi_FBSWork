#include <stdio.h>
void menu();
void main() {
	menu();
}
void menu(){

    int choice, n, temp, reverse = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nMenu:\n");
    printf("1. Check even or odd\n");
    printf("2. Check prime or not\n");
    printf("3. Check palindrome or not\n");
    printf("4. Check positive, negative or zero\n");
    printf("5. Reverse the number\n");
    printf("6. Find sum from 1 to n using for loop\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        if (n % 2 == 0)
            printf("%d is even.\n", n);
        else
            printf("%d is odd.\n", n);
    }

    else if (choice == 2) {
        int isPrime = 1;
        if (n <= 1)
            isPrime = 0;
        else {
            for (int i = 2; i <= n / 2; i++) {
                if (n % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime)
            printf("%d is a prime number.\n", n);
        else
            printf("%d is not a prime number.\n", n);
    }

    else if (choice == 3) {
        int original = n;
        reverse = 0;
        while (n != 0) {
            reverse = reverse * 10 + n % 10;
            n /= 10;
        }
        if (reverse == original)
            printf("%d is a palindrome number.\n", original);
        else
            printf("%d is not a palindrome number.\n", original);
    }

    else if (choice == 4) {
        if (n > 0)
            printf("%d is positive.\n", n);
        else if (n < 0)
            printf("%d is negative.\n", n);
        else
            printf("The number is zero.\n");
    }

    else if (choice == 5) {
        int original = n;
        reverse = 0;
        while (n != 0) {
            reverse = reverse * 10 + n % 10;
            n /= 10;
        }
        printf("Reversed number is: %d\n", reverse);
    }

    else if (choice == 6) {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        printf("Sum from 1 to %d is: %d\n", n, sum);
    }

    else {
        printf("Invalid choice.\n");
    }

   
}
