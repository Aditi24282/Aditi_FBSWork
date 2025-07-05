#include<stdio.h>
int oddeven(int);
void main(){
	int no;
	printf("Enter Number");
	scanf("%d",&no);
	int res=oddeven(no);
	if(res==1){
		printf("The Number is Even");
	}
	else{
		printf("The Number is Odd");
	}
	
}
int oddeven(int no){

    if(no%2==0)
   	   return 1;
    else
       return 0;
       
}