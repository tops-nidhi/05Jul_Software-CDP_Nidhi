#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);
    printf("C:");
    scanf("%d",&c);
    if (a > b)
    {
        if (a > c)
        {
            printf("\n%d is max.",a);            
        }
        else
        {
            printf("%d is max.",c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("\n%d is max.",b);            
        }
        else
        {
            printf("%d is max.",c);
        }
    }

}