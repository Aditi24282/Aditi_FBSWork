#include<stdio.h>
#include<conio.h>
int finddigit(int*,int*);
void main(){
	int no=123456;
	int dig=3;
	finddigit(&no,&dig);	
}
int finddigit(int* no,int* dig){
	int count=0;
     while(*no>0){
     	int rem=*no%10;
     	if(rem==*dig){
     		count++;
     		*no=*no/10;
     		printf("Digit Found");
		 }
		
	 }
	 
}