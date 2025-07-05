#include<stdio.h>
int age(int*);
void main(){
	int no;
	printf("Enter Number");
	scanf("%d",&no);
	find(&no);
	
}
int find(int* no){
	if(*no>=18) 	
	{
		printf("age is eligible for voting");
	}
	else
	{
		printf("age is not eligible for voting");
	}
}