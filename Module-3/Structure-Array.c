#include<stdio.h>
struct Stdata
{
    int id;
    char nm[20];
}/*st[20]*/;
int main()
{
    struct Stdata st[20];
    int i, count = 5;

    for ( i = 0; i < count; i++)
    {
        printf("\nEnter the student's id:");
        scanf("%d",&st[i].id);
        printf("Enter the student's name:");
        scanf("%s",&st[i].nm);
        
    }
    for ( i = 0; i < count; i++)
    {
        printf("\nYour id is:%d",st[i].id);
        printf("\nYour name is:%s",st[i].nm);
    }
    
    return 0;
}
