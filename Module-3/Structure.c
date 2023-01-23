#include<stdio.h>
struct Stdata
{
    int id;
    char nm[20];
}st;
int main()
{
    printf("Enter the student's id:");
    scanf("%d",&st.id);
    printf("Enter the student's name:");
    scanf("%s",&st.nm);
    printf("\nYour id is:%d",st.id);
    printf("\nYour name is:%s",st.nm);
    return 0;
}
