#include <stdio.h>
double amount(double*,double*,double*);
void main() {
	double price,discount = 0.0;
	double finalAmount;
	printf("Enter the purchase amount:");
    scanf("%lf", &price);
    amount(&price,&discount,&finalAmount);
}
double amount(double* price,double* discount,double* finalAmount){
    char isStudent;
    printf("Are you a student? (y/n): ");
    scanf(" %c", &isStudent);  
    if (isStudent == 'y' || isStudent == 'Y') {
        if (*price > 500) {
            *discount = 0.20 * *price;
        } else {
            *discount = 0.10 * *price;
        }
    } else if (isStudent == 'n' || isStudent == 'N') {
        if (*price > 700) {
            *discount = 0.15 * *price;
        } else {
            *discount = 0.0;
        }
    } else {
        printf("Invalid input for student status.\n");
        
    }

    *finalAmount = *price - *discount;

    
    printf("Discount: ?%.2lf\n", *discount);
    printf("Amount to be paid after discount: ?%.2lf\n",*finalAmount);

}

