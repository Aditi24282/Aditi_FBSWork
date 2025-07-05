#include<stdio.h>
int age(int*);
void main(){
	int *no=15;
    age(&no);
}
int age(int* no){

	if(*no>=18)
	{
		printf("age is eligible for voting");
	}
	else
	{
		printf("age is not eligible for voting");
	}
}


