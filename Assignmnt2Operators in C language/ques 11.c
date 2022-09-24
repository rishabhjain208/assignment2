#include<stdio.h>
int main()
{
    int n,a,b,x;
    printf("enter the number = ");
    scanf("%d",&n);
    printf("enter that digit u want to add the one place = ");
    scanf("%d",&x);
    a=n*10;
    b=a+x;
    printf("the resulting number = %d",b);
    return 0;
}