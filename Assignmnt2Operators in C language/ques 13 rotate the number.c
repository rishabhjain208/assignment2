#include<stdio.h>
int main()
{
    int n,a,b=0,x;
    printf("enter the number = ");
    scanf("%d",&n);
    a=n%10;
    b=b+a;
    n=n/10;
    printf("the rotate number = %d",b);
        
    
    
    return 0;
}