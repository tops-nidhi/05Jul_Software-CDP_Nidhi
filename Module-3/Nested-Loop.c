#include<stdio.h>
void main()
{
    int i,j;
    int count = 5;
    for ( i = 0; i < count; i++)
    {
        for ( j = 5; j > i; j--)
        {
            printf(" %d",j);
        }
        printf("\n");
    }
    
}