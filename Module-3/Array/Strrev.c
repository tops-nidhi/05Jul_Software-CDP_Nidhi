#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter your string:");
    scanf("%s",&str);
    printf("Your original string is:%s",str);    
    strrev(str);
    printf("\nyour revrse string is:%s",str);
    return 0;
}