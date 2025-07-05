#include<stdio.h>
#include<string.h>
void main(){
	char str[9]="FirsTBIT";
	int i=0;
	while(str[i]!='\0'){
		if(str[i]>='a'&& str[i]<='z'){
			printf("%s",strupr(str));
		}
		else if(str[i]>='A' && str[i]<='z')
		{
			printf("%s",strlwr(str));
		}
		i++;
		break;
	   
	}
		
}