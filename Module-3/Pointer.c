#include<stdio.h>
void main()
{
    int no = 100;
    int *ptr;
    ptr = &no;

    // printf("Address of the no is:%d",ptr);
    // ptr++;
    // printf("\nAfter increment address is:%d",ptr);
    printf("\nValue of no is:%d",*ptr);
    *ptr = 13;
    printf("\nValue of no is:%d", no);
}