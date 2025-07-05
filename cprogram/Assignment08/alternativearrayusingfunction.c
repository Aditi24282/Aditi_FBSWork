#include<stdio.h>
void alternative(int*,int);
void main()
{
	int arr[5];
	printf("Enter Element:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	alternative(arr,5);
}
	
void alternative(int* arr,int size){
	printf("Alternative  element to are:");
	for(int i=0;i<size;i=i+2){
	   printf("%d",arr[i]);
	}
	
  }

