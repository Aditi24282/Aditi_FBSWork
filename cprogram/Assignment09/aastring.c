#include<stdio.h>
void main(){
	char str[]="aaabbc";
	int count=0;
	int i=0;
	while(str[i]!='\0')
	{
	    if(str[i]=='a')
		{
		   count++;	
     	}
     	i++;
     	
     	
   }
    printf("%d",count);
   str[i]='\0';
   
   
}