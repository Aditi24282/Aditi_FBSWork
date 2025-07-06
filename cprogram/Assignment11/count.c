//WAP to Calculate the Number of Words Present in a String
#include<stdio.h>
void main()
{
	char str[10];
	int count=0;
	printf("Enter String");
	scanf("%s",str);
	for(int i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("The %d Words Present In A String",count);
}