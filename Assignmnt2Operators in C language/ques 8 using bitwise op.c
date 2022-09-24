#include<stdio.h>
int main()
{
    int n,a;
    printf("enter the number = ");
    scanf("%d",&n);
    if(((n&1)==0)) //using bitwise AND op
    printf("even number");
    else if(((n&1)==1))
    printf("odd number");
    else if (((n|1)==n+1))//using bitwise OR op
    printf("even number");   
    else if(((n|1)==n))
    printf("odd number ");
    else if (((n^1)==n+1))//using bitwise XOR op
    printf("even number");
    else 
    printf("odd number");  
    
    
    return 0;
    
}