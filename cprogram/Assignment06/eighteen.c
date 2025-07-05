#include <stdio.h>
void sumone();
void main() {
	sumone();
}
void sumone(){

    int start = 1, end = 5;
    int sum = 0;

    for (int i = start; i <= end; i++) {
        sum=sum+i;
    }

    printf("Sum from %d to %d is: %d\n", start, end, sum);

   
}
