#include<stdio.h>
void main(){
	int b=20;
	int *str=&b;
	printf("%u",str+0);
	printf("\n%u",str+1);
	printf("\n%u",str+2);
	printf("\n%u",str+3);
	printf("\n%u",str+4);
	
	double be=20;
	double *str1=&be;
	printf("\n%u",str1+0);
	printf("\n%u",str1+1);
	printf("\n%u",str1+2);
	printf("\n%u",str1+3);
	printf("\n%u",str1+4);
}
	