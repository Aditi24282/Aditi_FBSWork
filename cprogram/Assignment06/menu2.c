#include <stdio.h>
void evenodd();
void prime();
void palindrome();
void posneg();
void rev();

void main() {
    int choice, n, temp, reverse = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nMenu:\n");
    printf("1. Check even or odd\n");
    printf("2. Check prime or not\n");
    printf("3. Check palindrome or not\n");
    printf("4. Check positive, negative or zero\n");
    printf("5. Reverse the number\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        evenodd();
    }

    else if (choice == 2) {
        prime();
        
    }
    else if (choice == 3) {
       palindrome();
    }

    else if (choice == 4) {
       posneg();
    }

    else if (choice == 5) {
        rev();
    }
    else{
    	printf("Invalid Number");
	}

}
void evenodd(){
	int n;
	if (n % 2 == 0)
           return 1;
        else
           return 0;
}
void prime(){
	 int isPrime = 1;
	 int n;
        if (n <= 1)
            isPrime = 0;
        else {
            for (int i = 2; i <= n / 2; i++) {
                if (n % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime)
            printf("%d is a prime number.\n", n);
            else
            printf("%d is not a prime number.\n", n);
}
void palindrome(){
	 int original = n;
        int reverse = 0;
        while (n != 0) {
            reverse = reverse * 10 + n % 10;
            n /= 10;
        }
        if (reverse == original)
            printf("%d is a palindrome number.\n", original);
        else
            printf("%d is not a palindrome number.\n", original);
}
void posneg(){
	 if (n > 0)
            printf("%d is positive.\n", n);
        else if (n < 0)
            printf("%d is negative.\n", n);
        else
            printf("The number is zero.\n");
}
void rev(){
	int original = n;
        int reverse = 0;
        while (n != 0) {
            reverse = reverse * 10 + n % 10;
            n /= 10;
        }
        printf("Reversed number is: %d\n", reverse);
}



   


