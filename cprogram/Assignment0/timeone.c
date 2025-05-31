#include<stdio.h>

void main(){
	int min=123;
	int hrs;
	hrs=min/60;
	min=min%60;
	printf("The %d hours and %d minutes",hrs,min);
}