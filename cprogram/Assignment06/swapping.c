#include<stdio.h>
int swap(int*,int*);
void main(){
	int no1=10,no2=20;
	printf("Befor swap no1=%d,no2=%d",no1,no2);
	swap(&no1,&no2);
	printf("After swap no1=%d,no2=%d",no1,no2);

}
int swap(int* no1,int* no2) //formal parameters they are always inistialized
{
	
	int temp;
	temp=*no1;
	*no1=*no2;
	*no2=temp;
	
}