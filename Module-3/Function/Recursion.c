#include<stdio.h>
int fecto(int no)
{
    if (no <= 1)
    {
        return 1;
    }
    return no*fecto(no-1);
}
int main()
{
    int no;
    printf("Enter the no to get fectorial:");
    scanf("%d",&no);
    printf("Fectorial of %d is:%d",no,fecto(no));
}