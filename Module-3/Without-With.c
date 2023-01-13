#include<stdio.h>
void data(int no)
{   
    printf("Value of no is:%d",no);
}
void main()
{
    int no;
    printf("Enter the value of no:");
    scanf("%d",&no);
    data(no);
}