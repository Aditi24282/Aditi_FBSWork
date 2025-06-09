#include<stdio.h>
void main(){
	char c='a';
	if(c>='A' && c<='Z')
	{
		printf("The character is Upper Case");
	}
	else                                                  //a=97,A=65
	{
		printf("The character is Small Case");
	}
}