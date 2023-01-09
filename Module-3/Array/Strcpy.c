#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20];
    char str2[20];
    printf("Enter your first string:");
    scanf("%s",&str1);
    strcpy(str2, str1);
    printf("Your second string is:%s",str2);
}