#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("\nenter the value of a = ");
     scanf("%d",&a);
     printf("\nenter the value of b = ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nswap of a = %d  and b = %d is ",a,b);
    return 0;






}