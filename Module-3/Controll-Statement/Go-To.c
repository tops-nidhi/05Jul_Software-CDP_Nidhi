#include<stdio.h>
void main()
{
    int i;
    for ( i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            goto kevin;
        }
        printf("\n%d",i);
    }
    kevin:
        printf("\nThis is lable.");
}