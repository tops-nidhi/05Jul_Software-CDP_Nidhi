#include<stdio.h>
void main()
{
    int a,n,ans;

    printf("Enter the value of 2 no:");
    scanf("%d%d",&a,&n);
    printf("\nAddition is:%d",a+n);
    ans = a - n;
    printf("\nSubstraction is:%d",ans);
    ans = a * n;
    printf("\nMultiplication is:%d", ans);
    ans = a / n;
    printf("\nDivistion is:%d",ans);
    ans = a % n;
    printf("\nModulo is:%d",ans);
    a++;
    printf("\nAfter increment value of a is:%d",a);
    --n;
    printf("\nAfter decrement value of n is:%d",n);

}