#include<stdio.h>
int main()
{
    int count;
    printf("Enter the size of array:");
    scanf("%d",&count);
    int array[count], i;
    for ( i = 0; i < count; i++)
    {
        printf("Enter the value of array[%d]:",i);
        scanf("%d",&array[i]);
    }
    for ( i = 0; i < count; i++)
    {
        printf("\nArray[%d]:%d",i,array[i]);
    }
    
    
    return 0;
}