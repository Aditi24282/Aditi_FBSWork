#include<stdio.h>
int mystrlen(char*);
void main()
{
	char str[]="Firstbit";
	int res=mystrlen(str);
	printf("%d",res);	
}
int mystrlen(char* ch)
 {
 	int i=0,count=0;
 	while(ch[i]!='\0')
 	{
 		count++;
 		i++;
	 }
	 return count;
 }