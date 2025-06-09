#include <stdio.h>

void main() {
    float salary = 4500;  
    float da, ta, hra, total;

   
    if (salary <= 5000) {
        da = 0.10 * salary;
        ta = 0.20 * salary;
        hra = 0.25 * salary;
    } else {
        da = 0.15 * salary;
        ta = 0.25 * salary;
        hra = 0.30 * salary;
    }

   
    total = salary + da + ta + hra;

    
    printf("Basic Salary: %.2f\n", salary);
    printf("DA: %.2f\n", da);
    printf("TA: %.2f\n", ta);
    printf("HRA: %.2f\n", hra);
    printf("Total Salary: %.2f\n", total);

    
}
