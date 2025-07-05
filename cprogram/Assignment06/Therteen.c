#include <stdio.h>
void prime();
void main() {
	prime();
}
void prime(){

    int i = 1;

    
    while (i <= 10) {
        int count = 0;
        int j = 1;

        
        while (j <= i) {
            if (i % j == 0) {
                count++;
            }
            j++;
        }

        
        if (count == 2) {
            printf("%d ", i);
        }

        i++;
    }

    printf("\n");
   
}
