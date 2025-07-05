#include <stdio.h>
void one();
void main() {
	one();
}
void one(){

    int i = 1;

    while (i <= 10) {
        printf("%d ", i);
        i++;
    }

    printf("\n"); 

   
}
