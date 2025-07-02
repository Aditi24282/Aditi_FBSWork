#include <stdio.h>

float deposit(float balance, float amount) {
    if (amount > 0) {
        balance = balance + amount;
        printf("Amount deposited successfully.\n");
    } else {
        printf("Invalid deposit amount.\n");
    }
    return balance;
}

float withdraw(float balance, float amount) {
    if (balance < 3000) {
        printf("Can't withdraw the amount. Balance is less than ?3000.\n");
    } else if (amount > 0 && amount <= balance) {
        balance=balance-amount;
        printf("Amount withdrawn successfully.\n");
    } else {
        printf("Invalid or insufficient withdrawal amount.\n");
    }
    return balance;
}

int main() {
    float balance = 5000.0;  
    int choice;
    float amount;

    printf("Initial Balance: %.2f\n", balance);
    printf("Choose an option:\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("Enter your choice:");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter amount to deposit:");
        scanf("%f", &amount);
        balance = deposit(balance, amount);
    } else if (choice == 2) {
        printf("Enter amount to withdraw:");
        scanf("%f", &amount);
        balance = withdraw(balance, amount);
    } else {
        printf("Invalid choice.\n");
    }

    printf("Updated Balance: .2f\n", balance);

    return 0;
}
