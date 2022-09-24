#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("\nenter the value of a = ");
     scanf("%d",&a);
     printf("\nenter the value of b = ");
    scanf("%d"&b);
    temp=b;
    b=a;
    a=temp;
    printf("swap of a = %d  and b = %d is ",a,b);
    return 0;






}