#include<stdio.h>
void main(){
	int no,r1,r2,r3,res,q1;
	no=123;
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	r3=q1/10;
	res=r1+r2+r3;
	printf("%d",res);
}