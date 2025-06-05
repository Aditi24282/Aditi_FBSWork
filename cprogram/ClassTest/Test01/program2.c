#include<stdio.h>
void main(){
	int year;
	printf("Enter year");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0)
	{
		printf("The %d is leap year",year);
	}
	else
	{
		printf("The %d is not leap year",year);
	}
}