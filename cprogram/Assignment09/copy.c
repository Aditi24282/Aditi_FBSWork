#include<stdio.h>
char* mycopy(char*,char*);
void main(){
	char str1[10]="Firstbit";
	char str2[10];
	char* res=mycopy(str1,str2);
	printf("%s",res);
}
char* mycopy(char* str1,char* str2 ){
	int i=0;
 	while(str1[i]!='\0')
 	{
 		if(str1[i]==str2[i])
 		{
 			return str2[i];	
		 }
		 i++;
 		
	 }
	 str2[i]='\0';
 	
 }