#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of 2 no:");
    scanf("%d%d",&a,&b);
    (a > b) ? (printf("A is max.")) : (printf("B is max.")) ;
    return 0;
}