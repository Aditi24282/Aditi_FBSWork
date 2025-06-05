#include<stdio.h>
void main(){
	
	int hr,min,sec;
	printf("Enter hours minutes and seconds");
	scanf("%d%d%d",&hr,&min,&sec);
	int time=hr*3600+hr*60+30;
	printf("The Total Seconds are %d",time);
}