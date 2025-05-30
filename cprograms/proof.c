#include<stdio.h>
void main(){
	int c=printf("Firstbit");
	
	printf("%d\n",c);
	
	int x=printf("hello")+printf("fbs");
	printf("%d\n",x);
	
	int y=printf("hello")>printf("fbs");
	printf("%d\n",x);
	
	int a=10<30>20<=40!=50>40<30;
	printf("%d\n",a);
	
	int qa=25/6%3;
	printf("%d\n",qa);
	
	int res=printf("%d",printf("helloworld"));
	printf("\n%d",res);
}