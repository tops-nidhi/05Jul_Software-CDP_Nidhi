#include<stdio.h>
union Union
{
    int id;
    char nm[10];
};

int main()
{
   union Union un[10];
    int i, count = 5;

    for ( i = 0; i < count; i++)
    {
        printf("\nEnter the student's id:");
        scanf("%d",&un[i].id);
        printf("Enter the student's name:");
        scanf("%s",&un[i].nm);
    }
    for ( i = 0; i < count; i++)
    {
        printf("\nYour id is:%d",un[i].id);
        printf("\nYour name is:%s",un[i].nm);
    }
    return 0;
}