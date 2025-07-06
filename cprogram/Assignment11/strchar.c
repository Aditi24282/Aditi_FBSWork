#include<stdio.h>
void main(){
	char str[10];
	char ch;
	int found=0;
	printf("Enter String\n");
	scanf("%s",str);
	printf("Enter String To Be Searched");
	scanf(" %c", &ch);  
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		{
			printf("Character '%c' found at position %d \n", ch, i);
            found = 1;
		}
	}
	if(!found)
	{
		 printf("Character '%c' not found in the string.\n", ch);
		
	}


}