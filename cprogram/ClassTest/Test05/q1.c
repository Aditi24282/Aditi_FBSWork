#include <stdio.h>
float calculateSellingPrice(float,float);
void main() {
    float costPrice, discount, sellingPrice;

    
    printf("Enter cost price of the book: ");
    scanf("%f", &costPrice);

    printf("Enter discount percentage: ");
    scanf("%f", &discount);

    
    sellingPrice = calculateSellingPrice(costPrice, discount);

   
    if (sellingPrice != 0) {
        printf("Selling Price of the book: %.2f\n", sellingPrice);
    }

    return 0;
}


float calculateSellingPrice(float costPrice, float discount) {
    float sellingPrice;

    if (costPrice > 0) {
        if (discount >= 0 && discount <= 100) {
            sellingPrice = costPrice - (costPrice * discount / 100);
        } else {
            printf("Invalid discount\n");
            sellingPrice = 0;
        }
    } else {
        printf("Invalid cost price\n");
        sellingPrice = 0;
    }

    return sellingPrice;
}


