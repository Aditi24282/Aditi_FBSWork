#include<stdio.h>
void main(){
	int n,original,result=0,rem;
	printf("Enter Numer:");
	scanf("%d",&n);
	original=n;
	while(n>0){
	   rem=n%10;
	   result=result+(rem*rem*rem);
	   n=n/10;
	}
	if(result==original){
		printf("The Number Is Armstrong");
	}
	else{
		printf("The Number Is Not Armstrong");
	}
	
}