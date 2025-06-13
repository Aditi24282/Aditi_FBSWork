#include<stdio.h>
void main(){
	int no;
	printf("Enter Number");
	scanf("%d",&no);
	if(no>0)
	{
		printf("The Number is positive");
	}
	else if(no<0){
	    printf("The Number is Negetive");
	}
	else{
		printf("The Number is Nutral");
	}
}