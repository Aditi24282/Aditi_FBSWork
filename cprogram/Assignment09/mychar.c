#include<stdio.h>
char* mychar(char*,char);
void main(){
	char str[]="Aditi";
	char ch='d';
	char* res=mychar(str,ch);
}
char* mychar(char* ptr,char x){
	int i=0,flag=0;
	while(ptr[i]!='\0'){
		if(ptr[i]==x){
			flag=1;
			break;	
	    }
		i++;
	}
	return &ptr[i];	
}