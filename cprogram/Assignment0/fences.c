#include <stdio.h>
#include<stdio.h>
void main() {
    float length, width;
    int n;

    printf("Enter length of box : ");
    scanf("%f", &length);

    printf("Enter width of box : ");
    scanf("%f", &width);

    printf("Enter number of horizontal fences: ");
    scanf("%d", &n);

   
    float perimeter = 2 * (length + width);

    
    float total_wire = n * perimeter;

    printf("Total wire required: %.2f meters\n", total_wire);

    
}
