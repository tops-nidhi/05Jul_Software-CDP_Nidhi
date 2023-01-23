#include<stdio.h>
int main()
{
    int array[10];
    int *ptr;
    int i;
    ptr = &array[0];
    for ( i = 0; i < 10; i++)
    {
        printf("\nEnter the value of no:");
        scanf("%d",&*ptr++);
    }
    ptr = &array[0];
    for ( i = 0; i < 10; i++)
    {
        printf("\n%d",*ptr++);
    }
    
    
}