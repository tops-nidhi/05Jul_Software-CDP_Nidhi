#include<stdio.h>
void main()
{
    int no1,no2;
    int ans;
    printf("Enter the value of no1 and no2:");
    scanf("%d%d",&no1,&no2);
    ans = no1 & no2;
    printf("\nBitwise AND of 4 & 5 is:%d",ans);
    ans = no1 | no2;
    printf("\nBitwise OR of 4 | 5 is:%d",ans);
    ans = no1 ^ no2;
    printf("\nBitwise XOR of 4 ^ 5 is:%d",ans);
    ans = ~no1;
    printf("Bitwise complement of ~4 %d",ans);
    ans = no1 << 1 ;
    printf("\nBitwise 1 shift left of 4 is:%d",ans);
    ans = no2 >> 1;
    printf("\nBitwise 1 shift right of 5 is:%d",ans);
}