#include<stdio.h>
void main()
{
	int arr[5];
	printf("Enter Element:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Alternative  element to are:");
	for(int i=0;i<5;i=i+2){
	  printf("%d",arr[i]);
	}
	
}
