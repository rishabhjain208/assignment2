#include<stdio.h>
int main()
{
    int n;
    int result,count=0; 
    printf("enter the value of n = ");
    scanf("%d",&n);
    while (n!=0)
    {
        result = n&1;
        count++;
        if (result==1)
        {
            printf("number of count of LSB is %d ",count);
        }
        n=n>>1;
    }
    
    return 0;
    
}