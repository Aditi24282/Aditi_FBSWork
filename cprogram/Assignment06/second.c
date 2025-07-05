#include<stdio.h>
void ch();
void main(){
	ch();
}
void ch(){
	char c='A';
	if(c>='A' && c<='Z')
	{
		printf("The character is Upper Case");
	}
	else                                                  //a=97,A=65
	{
		printf("The character is Small Case");
	}
}