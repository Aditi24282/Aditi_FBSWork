#include<stdio.h>
void main()
{
	char str[100];
	int count=0;
	printf("Enter String");
	scanf("%s",str);
	for(int i=0;str[i]!='\0';i++)
	{
		char ch=str[i];
		
		if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'||ch=='I'||ch=='O'||ch=='U')
		{
			count++;
		}
	}
	printf("Number of vowels in the string %d",count);
}