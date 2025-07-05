#include<stdio.h>
int alternative(int*,int);
void main()
{
	int arr[5];
	printf("Enter Element:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	alternative(arr,5);
	printf("Alternative  element to are:");
int alternative(int* arr,int size){
	for(int i=0;i<5;i=i+2){
	  printf("%d",arr[i]);
	}
	
  }
}
