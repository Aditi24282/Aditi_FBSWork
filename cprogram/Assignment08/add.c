
#include<stdio.h>
void main()
{
	int arr[5]={1,2,3,4,5};
	int brr[5]={10,20,30,40,50};
	int crr[5];
	printf("Enter Element of array one");
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter Element of array Two");
	for(int i=0;i<5;i++){
		scanf("%d",&brr[i]);	
	}
	for(int i=0;i<5;i++)
	{
		crr[i]=arr[i]+brr[i];
		
	}
	printf("Addition of array is:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", crr[i]);
    }
}