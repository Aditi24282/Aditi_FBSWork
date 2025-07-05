#include<stdio.h>
void main(){
	int no,count=0;
	printf("Enetr No");
	scanf("%d",&no);
	for(int i=1;i<=no;i++)
	{
		if(no%i==0)
		{
			for(int j=1;j<=1;j++)
			{
				count++;
			}
		}
	}
	if (count == 2)
        printf("%d is a Prime number.\n", no);
    else
        printf("%d is Not a Prime number.\n", no);
}