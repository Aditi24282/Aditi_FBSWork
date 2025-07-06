#include<stdio.h>
#include<string.h>
void main()
{
	char str[10];
	int len,temp;
	printf("Enter String");
	scanf("%s",str);
	len=strlen(str);
	if(len>=2)
	{
	   temp=str[0];
	   str[0]=str[len-1];
	   str[len-1]=temp;	
	}
	printf("Modified string: %s\n", str);	
}