#include<stdio.h>
void main()
{
    int ch;
    printf("\n1.Case1\n2.Case2\n3.Case3");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("\nThis is case 1.");
        // break;
    case 2:
        printf("\nThis is case 2.");
        break;
    case 3:
        printf("\nThis is case 3.");
        break;

    default:
        printf("\nInvalid choice.......");
        break;
    }
}