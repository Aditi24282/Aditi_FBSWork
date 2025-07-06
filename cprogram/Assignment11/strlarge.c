#include<stdio.h>
void main()
{
	int len1=0,len2=0;
	char str1[10];
	printf("Enter String 1");
	scanf("%s",str1);
	char str2[10];
	printf("Enter String 2");
	scanf("%s",str2);
	for(int i=0;str1[i]!='\0';i++)
	{
		len1++;
    }  
    for(int i=0;str2[i]!='\0';i++)
	{
		len2++;
    }  
	     
	if (len1 > len2 ) {
        printf("Larger string: %s\n", str1);
    }   
	else if (len2 > len1) {
        printf("Larger string: %s\n", str2);
    } 
	else {
        printf("Both strings are equal in length.\n");
    }
}
