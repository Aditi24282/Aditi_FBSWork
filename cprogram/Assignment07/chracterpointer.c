#include<stdio.h>
int ch(int*);
void main(){
	char *c='A';
	ch(&c);
}
int ch(int* c){
	
	if(*c>='A' && *c<='Z')
	{
		printf("The character is Upper Case");
	}
	else                                                  //a=97,A=65
	{
		printf("The character is Small Case");
	}
}