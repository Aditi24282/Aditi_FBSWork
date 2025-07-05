#include<stdio.h>
void evenodd();
void main(){
	evenodd();
}
void evenodd(){
	int no=24;
	if(no%2==0)
	{
		printf("%d is even",no);
		
	}
	else
	{
		printf("%d is odd",no);
	}
}