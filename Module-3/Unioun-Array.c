#include<stdio.h>
union Stdata
{
    int id;
    char nm[20];
};
int main()
{
    union Stdata st[10];
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("\nEnter your id and name:");
        scanf("%d%s",&st[i].id,&st[i].nm);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("\nYour id is:%d and name is:%s",st[i].id, st[i].nm);
    }
    
    
}