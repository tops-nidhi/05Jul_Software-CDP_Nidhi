#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int len;
    printf("Enter your string:");
    scanf("%s",&str);
    len = strlen(str);
    printf("\nLength of the your string is:%d",len);
}