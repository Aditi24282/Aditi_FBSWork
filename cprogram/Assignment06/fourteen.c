#include <stdio.h>
void table();
void main() {
	table();
}
void table(){

    int n, i = 1;

    
    printf("Enter a number to print its table: ");
    scanf("%d", &n);

    
    while (i <= 10) {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }

    
}
