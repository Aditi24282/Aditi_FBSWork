#include<stdio.h>
void vowel();
void main()
{
	vowel();
}
void vowel(){

	int var='a';
	if(var =='a' || var=='e' || var=='i' || var=='o'|| var=='u')
	{
		printf("The chracter is vowel");
	}
	else
	{
		printf("The chracter is consonant");
	}
}