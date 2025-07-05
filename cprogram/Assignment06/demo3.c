#include<stdio.h>
int leap();
void main(){
    int res=leap();
    if(res==1){
    	printf("The year is leap year");
	}
	else{
		printf("The year is not leap year");
	}
}
int leap(){
	int no;
	printf("Enter Year");
	scanf("%d",&no);
	if(no%4==0 || no%100!=0 &&(no%400==0)){
		return 1;
	}
	else{
		return 0;
	
		
	}
}