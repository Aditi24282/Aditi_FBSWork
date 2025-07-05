#include<stdio.h>
int age(int);
void main(){
	int no;
	printf("Enter Number");
	scanf("%d",&no);
	int res=find(no);
	if(res==1)
	{
		printf("age is eligible for voting");
	}
	else
	{
		printf("age is not eligible for voting");
	}
}
int find(int no){
	 if(no>=18)
	     return 1;
	 else
	     return 0;
}