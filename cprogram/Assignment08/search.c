#include<stdio.h>
void main()
{
	int arr[5];
	int search;
	printf("Enter Element:");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter element to search");
	scanf("%d",&search);
	int status=0;
	for(int i=0;i<5;i++){
		if(arr[i]==search)
		{
			printf("found at position %d",search,i+1);
			status=1;
			break;
		}
	}
	if(!status){
		printf("Not Found",search);
	}
}