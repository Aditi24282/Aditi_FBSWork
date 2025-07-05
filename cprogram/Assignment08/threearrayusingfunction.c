#include<stdio.h>
void arrfun(int*,int);
void brrfun(int*,int);
void crrfun(int*,int);
void main(){
	 int arr[5];
	 int brr[5];
	 int crr[5];
	 arrfun(arr,5);
	 brrfun(brr,5);
	 crrfun(crr,5);
	 
}   
void arrfun(int* arr,int size){
    
	printf("Enter Element of array one\n"); 
	for(int i=0;i<size;i++){
	    
		scanf("%d",&arr[i]);
	}
	printf("[");
	for(int i=0;i<size;i++)
	{
		printf("%d,",arr[i]);	
	}
	printf("\b]");
}
void brrfun(int* brr,int size){
	
	
	printf("\nEnter Element of array Two\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&brr[i]);
	}
	printf("[");
	for(int i=0;i<size;i++){
		printf("%d,",brr[i]);
		
	}
	printf("\b]");
}
void crrfun(int* crr,int size){
	
	printf("\nEnter Element of array Three\n");
	for(int i=0;i<size;i++){
		scanf("%d",&crr[i]);
	}
	printf("[");
	for(int i=0;i<size;i++){
		printf("%d,",crr[i]);
	}
	printf("\b]");
	
}
	
