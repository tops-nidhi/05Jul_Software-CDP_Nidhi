#include<stdio.h>
int no;
int getdata()
{
    printf("Enter the valeu of no:");
    scanf("%d",&no);
    return 0;
}
int showdata()
{
    return no;
}
int main()
{
    getdata();
    printf("Value of no is:%d",showdata());
}