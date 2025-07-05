#include<stdio.h>
void main()
{
	char str[10]="hello";
	char* ptr=strdup(str);
	printf("%s",str);
}