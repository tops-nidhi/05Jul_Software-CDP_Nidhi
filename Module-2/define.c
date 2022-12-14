#include<stdio.h>
#define pi 3.14
void main()
{
    int r;
    float area;
    printf("Enter the radoius of circle:");
    scanf("%d",&r);
    area = pi * r*r;
    printf("\nArea of the circle is:%f",area);
}