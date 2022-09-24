#include<stdio.h>
int main()
{
    
    int a,b,c,n,sum;
    printf("enter the three digit number = ");
    scanf("%d",&n);
    a=n/100;
    b=((n%100)/10);
    c=n%10;
    sum=a+b+c;
    printf("\nsum of three digit number is = %d",c);
    return 0;

}