#include<stdio.h>
void main()
{
    int expression1, expression2;
    printf("1.Cold Drink\n2.Hot Drink");
    printf("\n\nEnter your choice:");
    scanf("%d",&expression1);
switch (expression1)
{
case 1:
printf("\n1.Coca cola\n2.Fanta\n3.Sprite");
    printf("\nWhich cold drink you want to prefer:");
    scanf("%d",&expression2);
    switch (expression2)
    {
    case 1:
        printf("\nYou choice Coca Cola.");
        break;
    case 2:
        printf("\nYour choice is Fanta.");
        break;
    case 3:
        printf("\nYour choice is sprite.");
        break;

    default:
        printf("your choice is invalid............");
        break;
    }
    break;

case 2:
printf("\n1.Coffe\n2.tea");
    printf("\nWhich hot drink you want:");
    scanf("%d",&expression2);
    switch (expression2)
    {
    case 1:
        printf("\nYour choice is coffee.");
        break;
    case 2:
        printf("\nYour chocie is Tea.");
        break;
    default:
        printf("your choice is invalid............");
        break;
    }
    break;

default:
    printf("your choice is invalid............");
    break;
}
}