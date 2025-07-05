#include<stdio.h>
int findmax(int*,int);
int findmin(int *arr,int size);
void main(){
	int arr[10];
	printf("Enter Element:");
	for(int i=0;i<10;i++){
	   scanf("%d",&arr[i]);	
	}
	findmax(arr,10);
	findmin(arr,10);	
}
int findmax(int *arr,int size)
{
	int max=arr[0];
	for(int i=0;i<size;i++)
	{
		
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	
	printf("Maximum number: %d\n", max);
	return max; 
}
int findmin(int* arr,int size)
{   int min=arr[0];
    for(int i=0;i<size;i++)
	{
	  if(arr[i]<min)
	  {
	  	min=arr[i];
	   }	
	}
	printf("Minimum number: %d\n", min);
	return min; 
		
}