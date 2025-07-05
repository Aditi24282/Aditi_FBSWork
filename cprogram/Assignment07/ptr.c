#include<stdio.h>
void main(){
	int a=10;
	int* ptr=&a;
	printf("%u\n%u\n%u\n%u",a,&a,ptr,*ptr);
	ptr=30;
	printf("\n%u",ptr);
	printf("\n%d",sizeof(int));
	printf("\n%d",sizeof(float));
	printf("\n%d",sizeof(double));
	printf("\n%d",sizeof(char));
	printf("\n%d",sizeof(void));
	
	printf("\n\n%d",sizeof(int*));
	printf("\n%d",sizeof(float*));
	printf("\n%d",sizeof(double*));
	printf("\n%d",sizeof(char*));
	printf("\n%d",sizeof(void*));
	
	

	
}