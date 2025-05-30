#include<stdio.h>
void main(){
	int no,r1,r2,r3,r4,res,q1,q2;
	no=2354;
   	r1=no%10;
	no=no/10;
	r2=no%10;
	no=no/10;
	r3=no%10;
	no=no%10;
	r4=r3;


	res=r1+r2+r3+r4;
	printf("%d",res);
}