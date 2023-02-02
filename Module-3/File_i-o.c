#include<stdio.h>
int main()
{
    char str[10],str1[10];
    FILE *fptr;
    printf("Enter the string that you want to print in file:");
    scanf("%s",&str);
    fptr = fopen("D:/nidhi batch/c_c++/23nov_c_C++/module-3/hello.txt","a");
    fprintf(fptr,"%s",str);
    fclose(fptr);
    fopen("D:/nidhi batch/c_c++/23nov_c_C++/module-3/hello.txt","r");
    fscanf(fptr,"%s",&str1);
    printf("%s",str1);
    return 0;
}