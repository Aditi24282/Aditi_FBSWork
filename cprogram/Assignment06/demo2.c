#include<stdio.h>
int ch();
void main(){
	int res=ch();
	if(res==1){
		printf(" character is upper case");
	}
	else{
		printf("character is small case");
	}
}
int ch(){
	char c='s';
	if(c>='A' && c<='Z')
	{
	    return 1;
	}
	else                                                  //a=97,A=65
	{
		return 0;
	}
}