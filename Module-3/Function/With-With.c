#include<stdio.h>
int data(int *ptr)
{
    return *ptr;
}
int main()
{
    int a = 100;
    printf("%d",data(&a));
}