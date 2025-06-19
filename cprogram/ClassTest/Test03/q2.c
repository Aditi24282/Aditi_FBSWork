#include<stdio.h>
void main()
{   int i,sum=0;
	printf("The Alternate Numbers are:");
	for(i=1;i<=5;i=i+2){
		printf("%d",i);
		sum=sum+i;
		
	}
	
	printf("\nThe Addition of alternate numbers are%d",sum);
}