#include<stdio.h>
void main(){
	int arr[5],sum=0;
	printf("Enter Element");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++)
	{
		printf("%d",arr[i]);
		sum=sum+arr[i];
		
	}
	printf("\nSum of Elements %d:\n",sum);
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2==0){
			
			printf("%d",arr[i]);
		}
	
		
	}
	
}