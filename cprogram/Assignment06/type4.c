#include<stdio.h>
#include<conio.h>
int finddigit(int,int);
void main(){
	int no=123456;
	int dig=3;
	int res=finddigit(no,dig);
	if(res==0)
	{
		printf("Digit Found");
	}
	else
	{
		printf("Not Found");
	}
	
}
int finddigit(int no,int dig){
	int count=0;
     while(no>0){
     	int rem=no%10;
     	if(rem==dig){
     		count++;
     		no=no/10;
     		return 1;
		 }
		 return 0;
	 }
}