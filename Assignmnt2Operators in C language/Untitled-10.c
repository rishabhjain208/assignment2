#include<stdio.h>
int main()
{
    float usd;
    int inr; 
    printf("Enter the Indian rupee value = ");
    scanf("%d",&inr);
    usd=inr*76.23;
    printf("The  Rs %d in US  Dollar is $ %.2f ",inr,usd);
    return 0;
}