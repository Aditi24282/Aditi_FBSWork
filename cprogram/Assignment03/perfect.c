#include<stdio.h>
void main(){
	int sum=0,n,i=1;
	printf("Enter Numer");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			sum=sum+i;
			
		}
		i++;
	}
	 if (sum == n)
        printf("%d is a Perfect Number.\n", n);
    else
        printf("%d is Not a Perfect Number.\n", n);
}