#include<stdio.h>
void main(){
	int unit,sum=0;
	printf("Enter Number");
	scanf("%d",&unit);
	if(unit>1 && unit<50){
		sum=unit*30;
		printf("The Electricity bill is be 30rs/unit\n");
		printf("The Total bil is:%d",sum);
	}
	else if(unit>=51 && unit<=150){
		sum=unit*40;
		printf("The Electricity bill will be 40rs/unit\n");
		printf("The Total bil is:%d",sum);
	}
	else if(unit<150){
		sum=unit*50;
		printf("The Electricity bill will be 50rs/units\n");
		printf("The Total bil is:%d",sum);
	}
	else if(unit==0){
		printf("Invalid unit");
	}
	else{
		printf("Enter one more time");
	}
}