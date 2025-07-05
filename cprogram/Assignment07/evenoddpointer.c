#include<stdio.h>
int evenodd(int*);
void main(){
	int no=2;
	evenodd(&no);
	
}
int evenodd(int* no)
{
	if(*no%2==0){
		printf("The %d is Even ",*no);
	}
	else
	{
		printf("The %d is Odd",*no);
	}
}