#include<stdio.h>
void leap();
void main(){
	leap();
}
void leap(){
	int no=2024;
	if(no%4==0 || no%100!=0 &&(no%400==0)){
		printf("%d is Leap year",no);
	}
	else{
		printf("%d is not Leap year",no);
	
		
	}
}