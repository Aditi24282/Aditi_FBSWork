#include<stdio.h>
void main()
{
    int i;
    printf("Even numbers from 1 to 5 are:\n");
    for(i = 1; i <= 15; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }
    }

    printf("\nOdd numbers from 10 to 25 are:\n");
    for(i = 10; i <= 25; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d ", i);
        }
    }
}
