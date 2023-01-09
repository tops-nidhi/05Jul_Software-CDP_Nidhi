#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    int cmp;
    printf("Enter your first string:");
    scanf("%s",&str1);
    printf("Enter yoiur second string:");
    scanf("%s",&str2);
    cmp = strcmp(str1, str2);
    if (cmp > 0)
    {
        printf("1st string is max.");
    }
    else if (cmp == 0)
    {
        printf("Both are equle.");
    }
    else
    {
        printf("2nd strign is max.");
    }
    
}