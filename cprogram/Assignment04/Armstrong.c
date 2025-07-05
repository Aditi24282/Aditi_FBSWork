#include<stdio.h>
void main(){
	int num1=13,res=0,sum=0,n1;

	for(int i=1;i<=num1;i++){
		int num=i;
		while(i>0)
		{
			n1=i%10;
			
			sum=sum+n1*n1*n1;
			//res=res+sum;
			i=i/10;
			
		}
		if(sum==num){
			printf("%d is Armstrong Number",sum);
		}
	}
	
}