#include<stdio.h>
int no; //global variable
void getdata(void)
{   
    //int no; //local variable
    printf("Enter the value of no:");
    scanf("%d",&no);
}
printdata()
{
    printf("Value of no is:%d",no);
}
void main()
{
    getdata();
    printdata();
};