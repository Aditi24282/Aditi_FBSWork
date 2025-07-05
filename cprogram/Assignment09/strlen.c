#include<stdio.h>
#include<string.h>
void main()
{
	char str[10]="hello";
	int me=strlen(str);
	printf("The Length is %d\n",me);
	
	char str1[]="Helloaditi";
	char str2[15];
	strcpy(str2,str1);
	printf("The String Is Copied=%s\n",str2);
	
	char str3[20]="world";
	char str4[]="hello";
	strcat(str3,str4);
	printf("The Concatination is=%s\n",str3);
	
	char str5[]="apple";
	char str6[]="appl";
	if(strcmp(str5,str6)==0)
	{
		printf("Equal");
	}
	else
	{
		printf("Not Equal");
	}
	
	char str7[]="Aditi";
	printf("Revesed:%s\n",strrev(str7));
	
	char str8[]="computer";
	char str9[10];
	strncpy(str9,str8,4);
	str9[4]='\0';
	printf("copied:%s",str9);
	
	char str11[] = "India";
    char *ptr = strchr(str11, 'i');
    printf("Found at: %s", ptr);
    
    printf("4. strpbrk: %s\n", strpbrk(str4, "or"));
}

