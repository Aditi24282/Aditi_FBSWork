#include <stdio.h>
int sumone(int*,int*);
void main() {
	int start = 1, end = 5;
	sumone(&start,&end);
}
int sumone(int* start,int* end){
    int sum = 0;
    for (int i = *start; i <= *end; i++) {
        sum=sum+i;
    }

    printf("Sum from %d to %d is: %d\n", *start, *end,sum);

   
}
