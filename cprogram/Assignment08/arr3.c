#include<stdio.h>
void main(){
	int arr[5];
	printf("Enter Element of array one\n"); 
	for(int i=0;i<5;i++){
	    
		scanf("%d",&arr[i]);
	}
	printf("[");
	for(int i=0;i<5;i++)
	{
		printf("%d,",arr[i]);	
	}
	printf("\b]");
	int brr[5];
	printf("\nEnter Element of array Two\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
	printf("[");
	for(int i=0;i<5;i++){
		printf("%d,",brr[i]);
		
	}
	printf("\b]");
	
	int crr[5];
	printf("\nEnter Element of array Three\n");
	for(int i=0;i<5;i++){
		scanf("%d",&crr[i]);
	}
	printf("[");
	for(int i=0;i<5;i++){
		printf("%d,",crr[i]);
	}
	printf("\b]");
	
}