#include<stdio.h>
int storeArray(int*,int);
int displayArray(int*,int);
//void rep(int*,int);

void main(){
	int arr[10];
	printf("Enter Element:");
	storeArray(arr,10);
	printf("Elements in Array:");
	displayArray(arr,10);
    rep(arr,10,7,5);
    display(arr,10);
    
}
int storeArray(int* ptr,int size)
{
	for(int i=0;i<size;i++)
	    scanf("%d",&ptr[i]);
}
int displayArray(int* ptr,int size){
	for(int i=0;i<size;i++)
	    printf("%d\n",ptr[i]);
}

void rep(int* ptr,int size,int old,int new)
{
	int status=0;
	for(int i=0;i<size;i++){
		if(ptr[i]==old){
			ptr[i]=new;
		}
	}
	if(status==1){
		printf("not found");
	}
	
}
int display(int *ptr,int size){
	printf("Replace elments are:");
	for(int i=0;i<size;i++)
	    printf("%d",ptr[i]);
}
